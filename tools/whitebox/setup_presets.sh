#!/usr/bin/env bash
set -euo pipefail

if [[ $# -lt 1 ]]; then
  echo "usage: $0 <vmpath>" >&2
  exit 2
fi

VMPATH="$1"
SRC_DIR="$(cd "$(dirname "$0")" && pwd)/presets"

mkdir -p "$VMPATH"

shopt -s nullglob
for cfg in "$SRC_DIR"/*.cfg; do
  base="$(basename "$cfg" .cfg)"
  dest="$VMPATH/$base"
  mkdir -p "$dest"
  # Copy preset as 86box.cfg so 86Box can pick it up
  cp -f "$cfg" "$dest/86box.cfg"
  echo "Installed preset: $base -> $dest/86box.cfg"
done
echo "All done. Launch 86Box with:  ./bin/86Box --vmpath $VMPATH"

