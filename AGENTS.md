# Repository Guidelines

## Project Structure & Module Organization
- `src/`: Emulator core and devices (C/C++). Key subfolders: `cpu/`, `video/`, `sound/`, `scsi/`, `qt/` (UI).
- `cmake/`: Toolchains and flags; root `CMakeLists.txt` drives the build.
- `tools/whitebox/`: Helper scripts, VM presets, and setup docs for Whitebox workflows.
- `roms/`: Optional ROM pack (submodule/local); not required to build but needed to run many machines.
- `doc/`, `.ci/`, `debian/`: Documentation, CI scripts, and packaging assets.

## Build, Test, and Development Commands
- Configure with CMake presets (Ninja by default):
  - `cmake --preset regular` → generates to `build/regular`
  - `cmake --build build/regular`
- Manual configure/build:
  - `cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release`
  - `cmake --build build`
- macOS helper: `bash tools/whitebox/build_macos.sh --install-deps`
- Run locally:
  - CLI: `./build/regular/bin/86Box --vmpath ~/86box-vms`
  - App bundle (macOS): `./build/regular/src/86Box.app/Contents/MacOS/86Box`
- VM presets: `bash tools/whitebox/setup_presets.sh ~/86box-vms`

## Coding Style & Naming Conventions
- Formatting: clang-format (WebKit base). Run before committing:
  - `clang-format -i src/**/*.{c,cpp,h,hpp}`
- Indentation: 4 spaces; LF line endings; UTF-8.
- Includes are not auto-sorted; pointer alignment to the right.
- Naming: match existing subsystems (e.g., `scsi_*`, `pci_*`, `qt_*`), keep functions descriptive, avoid one-letter variables.

## Testing Guidelines
- No formal unit test suite; validate changes by building and running affected configurations.
- Use debug presets for diagnostics: `cmake --preset dev_debug` or `ultra_debug`, then `cmake --build ...`.
- Provide a clear manual test plan in PRs (steps, expected behavior, affected machines/devices, platforms).

## Commit & Pull Request Guidelines
- Commits: imperative mood with subsystem prefix, e.g., `scsi: fix SEEK BLOCK timing`, `qt: guard null model`.
- PRs must include:
  - Summary, rationale, and scope of impact
  - Linked issues (if any) and repro/test steps
  - Platform/build info (OS, compiler, preset) and screenshots for UI changes
- Ensure CI passes and avoid unrelated formatting churn.

## Security & Configuration Tips
- Do not commit proprietary ROMs or disk images. Keep large assets out of the repo.
- Prefer presets in `CMakePresets.json` and scripts in `tools/whitebox/` to align environments.
