#!/usr/bin/env bash
# Simple macOS build helper for 86Box
# - Detects Homebrew locations for Qt (5/6), SDL2, and OpenAL Soft
# - Configures with CMake + Ninja (falls back to Unix Makefiles)
# - Builds a Release binary under build/macos-release (by default)

set -euo pipefail

usage() {
  cat <<EOF
Usage: $0 [options]

Options:
  --build-dir DIR       Build directory (default: build/macos-release)
  --prefix PATH         Install prefix (unused; for future packaging)
  --install-deps        Attempt to install deps via Homebrew
  --clean               Remove and recreate build dir before configuring
  --generator NAME      CMake generator (default: Ninja, fallback to Unix Makefiles)
  --qt-prefix PATH      Override Qt prefix (Qt5/Qt6)
  --sdl-prefix PATH     Override SDL2 prefix
  --openal-prefix PATH  Override OpenAL Soft prefix
  -h, --help            Show this help

Examples:
  $0 --install-deps
  $0 --build-dir build/macos-rel-qt6
EOF
}

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
# Repo root is two levels above tools/whitebox
REPO_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

BUILD_DIR="$REPO_ROOT/build/macos-release"
GENERATOR="Ninja"
INSTALL_DEPS=0
CLEAN=0
PREFIX=""
QT_PREFIX=""
SDL_PREFIX=""
OPENAL_PREFIX=""

while [[ $# -gt 0 ]]; do
  case "$1" in
    --build-dir) BUILD_DIR="$2"; shift 2 ;;
    --prefix) PREFIX="$2"; shift 2 ;;
    --install-deps) INSTALL_DEPS=1; shift ;;
    --clean) CLEAN=1; shift ;;
    --generator) GENERATOR="$2"; shift 2 ;;
    --qt-prefix) QT_PREFIX="$2"; shift 2 ;;
    --sdl-prefix) SDL_PREFIX="$2"; shift 2 ;;
    --openal-prefix) OPENAL_PREFIX="$2"; shift 2 ;;
    -h|--help) usage; exit 0 ;;
    *) echo "Unknown argument: $1" >&2; usage; exit 2 ;;
  esac
done

require_cmd() {
  command -v "$1" >/dev/null 2>&1 || {
    echo "error: missing required command: $1" >&2
    exit 1
  }
}

brew_prefix() {
  local formula="$1"
  if command -v brew >/dev/null 2>&1; then
    brew --prefix "$formula" 2>/dev/null || true
  fi
}

if [[ $INSTALL_DEPS -eq 1 ]]; then
  if ! command -v brew >/dev/null 2>&1; then
    echo "error: Homebrew not found; install from https://brew.sh or install dependencies manually." >&2
    exit 1
  fi
  brew install cmake ninja sdl2 qt@5 libpng zlib pkg-config openal-soft || true
fi

require_cmd cmake

# Prefer Ninja if available; otherwise fall back
if [[ "$GENERATOR" == "Ninja" ]]; then
  if ! command -v ninja >/dev/null 2>&1; then
    echo "warning: ninja not found, falling back to \"Unix Makefiles\"" >&2
    GENERATOR="Unix Makefiles"
  fi
fi

if [[ -z "$SDL_PREFIX" ]]; then
  SDL_PREFIX="$(brew_prefix sdl2)"
fi

# OpenAL Soft (prefer keg path; falls back to auto)
if [[ -z "$OPENAL_PREFIX" ]]; then
  OPENAL_PREFIX="$(brew_prefix openal-soft)"
fi

# Qt selection: prefer Qt5 if present; otherwise try Qt6 (qt or qt@6)
QT_MAJOR=""
if [[ -z "$QT_PREFIX" ]]; then
  QT5_PFX="$(brew_prefix qt@5)"
  QT6_PFX="$(brew_prefix qt)"
  if [[ -z "$QT6_PFX" ]]; then
    QT6_PFX="$(brew_prefix qt@6)"
  fi
  if [[ -n "$QT5_PFX" ]]; then
    QT_PREFIX="$QT5_PFX"; QT_MAJOR=5
  elif [[ -n "$QT6_PFX" ]]; then
    QT_PREFIX="$QT6_PFX"; QT_MAJOR=6
  fi
else
  # Try to infer major version from prefix contents
  if [[ -f "$QT_PREFIX/lib/cmake/Qt5Core/Qt5CoreConfig.cmake" ]]; then
    QT_MAJOR=5
  elif [[ -f "$QT_PREFIX/lib/cmake/Qt6Core/Qt6CoreConfig.cmake" ]]; then
    QT_MAJOR=6
  fi
fi

echo "Repo root: $REPO_ROOT"
echo "Using generator: $GENERATOR"
echo "Qt prefix: ${QT_PREFIX:-auto-not-found} (Qt${QT_MAJOR:-?})"
echo "SDL2 prefix: ${SDL_PREFIX:-auto-not-found}"
echo "OpenAL Soft prefix: ${OPENAL_PREFIX:-auto-not-found}"

# Compose CMAKE_PREFIX_PATH
CMAKE_PREFIX_PATH=""
append_prefix() { if [[ -n "$1" ]]; then if [[ -n "$CMAKE_PREFIX_PATH" ]]; then CMAKE_PREFIX_PATH="${CMAKE_PREFIX_PATH};$1"; else CMAKE_PREFIX_PATH="$1"; fi; fi; }
append_prefix "$QT_PREFIX"
append_prefix "$SDL_PREFIX"
append_prefix "$OPENAL_PREFIX"

# If user provided a relative build dir, anchor it to repo root
case "$BUILD_DIR" in
  /*) ;; # absolute
  *) BUILD_DIR="$REPO_ROOT/$BUILD_DIR" ;;
esac

if [[ $CLEAN -eq 1 && -d "$BUILD_DIR" ]]; then
  rm -rf "$BUILD_DIR"
fi
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

CFG_ARGS=(
  -G "$GENERATOR"
  -DCMAKE_BUILD_TYPE=Release
)

if [[ -n "$CMAKE_PREFIX_PATH" ]]; then
  CFG_ARGS+=( -DCMAKE_PREFIX_PATH="$CMAKE_PREFIX_PATH" )
fi

# Tell 86Box to use Qt6 when applicable
if [[ "$QT_MAJOR" == "6" ]]; then
  CFG_ARGS+=( -DUSE_QT6=ON )
fi

# If OpenAL Soft keg is present, pass explicit include and library to avoid
# linking Apple’s deprecated framework and ensure alext.h is available.
if [[ -n "$OPENAL_PREFIX" ]] && [[ -f "$OPENAL_PREFIX/include/AL/alext.h" ]]; then
  if [[ -f "$OPENAL_PREFIX/lib/libopenal.dylib" ]]; then
    CFG_ARGS+=(
      -DOPENAL_INCLUDE_DIR="$OPENAL_PREFIX/include"
      -DOPENAL_LIBRARY="$OPENAL_PREFIX/lib/libopenal.dylib"
    )
  fi
fi

echo "Configuring 86Box…"
cmake "${CFG_ARGS[@]}" "$REPO_ROOT"

echo "Building 86Box…"
if [[ "$GENERATOR" == "Ninja" ]]; then
  ninja
else
  make -j"$(sysctl -n hw.ncpu 2>/dev/null || echo 4)"
fi

# Locate the built binary (prefer the app bundle)
APP_DIR="$BUILD_DIR/src/Whitebox.app"
APP_NAME_BIN="Whitebox"
if [[ ! -d "$APP_DIR" ]]; then
  APP_DIR="$BUILD_DIR/src/86Box.app"
  APP_NAME_BIN="86Box"
fi
APP_BIN="$APP_DIR/Contents/MacOS/$APP_NAME_BIN"
CLI_BIN="$BUILD_DIR/bin/$APP_NAME_BIN"
if [[ -x "$APP_BIN" ]]; then
  echo "Build complete: $APP_BIN"
  echo "Run: $APP_BIN" # Launches VM Manager UI by default
elif [[ -x "$CLI_BIN" ]]; then
  echo "Build complete: $CLI_BIN"
  echo "Run: $CLI_BIN" # Launches VM Manager UI by default
else
  echo "warning: build finished but $APP_NAME_BIN binary not found under $BUILD_DIR/src or $BUILD_DIR/bin" >&2
fi

# If the roms submodule exists, copy it into the runtime search path so the
# app can find them by default. The emulator looks for a "roms" folder next to
# the app bundle (…/86Box.app/roms) or next to the CLI binary.
ROMS_SRC="$REPO_ROOT/roms"
if [[ -d "$ROMS_SRC" ]]; then
  # Determine destination: app bundle first (next to executable), then CLI bin, finally build root.
  if [[ -d "$APP_DIR/Contents/MacOS" ]]; then
    ROMS_DST="$APP_DIR/Contents/MacOS/roms"
  elif [[ -d "$BUILD_DIR/bin" ]]; then
    ROMS_DST="$BUILD_DIR/bin/roms"
  else
    ROMS_DST="$BUILD_DIR/roms"
  fi

  echo "Copying ROMs from $ROMS_SRC to $ROMS_DST …"
  rm -rf "$ROMS_DST"
  mkdir -p "$ROMS_DST"
  if command -v rsync >/dev/null 2>&1; then
    rsync -a --delete --exclude .git --exclude .github "$ROMS_SRC/" "$ROMS_DST/"
  else
    # Fallback to cp -R (won't prune removed files)
    (cd "$ROMS_SRC" && tar -cf - . --exclude .git --exclude .github) | (cd "$ROMS_DST" && tar -xf -)
  fi
else
  echo "warning: ROMs submodule not found at $ROMS_SRC; app may not find ROM files" >&2
fi

# Install Whitebox machine presets into the VM Manager path so they appear on first launch
PRESETS_SRC="$REPO_ROOT/tools/whitebox/presets"
if [[ -d "$PRESETS_SRC" ]]; then
  # macOS VM Manager directories (Qt AppDataLocation + VMM_PATH)
  VMM_DIR_WHITEBOX="$HOME/Library/Application Support/Whitebox/Virtual Machines"
  VMM_DIR_86BOX="$HOME/Library/Application Support/86Box/Virtual Machines"
  for VMM_DIR in "$VMM_DIR_WHITEBOX" "$VMM_DIR_86BOX"; do
    mkdir -p "$VMM_DIR"
    echo "Installing machine presets into: $VMM_DIR"
    if [[ -x "$REPO_ROOT/tools/whitebox/setup_presets.sh" ]]; then
      "$REPO_ROOT/tools/whitebox/setup_presets.sh" "$VMM_DIR" || true
    else
      shopt -s nullglob
      for cfg in "$PRESETS_SRC"/*.cfg; do
        base="$(basename "$cfg" .cfg)"
        dest="$VMM_DIR/$base"
        mkdir -p "$dest"
        cp -f "$cfg" "$dest/86box.cfg"
        echo "Installed preset: $base -> $dest/86box.cfg"
      done
    fi
  done
fi

# App icon is handled by CMake with .icns; no PNG conversion here.
