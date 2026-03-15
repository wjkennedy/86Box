#!/usr/bin/env python3
import re
import sys
from pathlib import Path


PATTERNS = [
    # Typical key/value hints around PCI IDs in OpenStep/NeXTSTEP driver bundles
    re.compile(r"(?i)(pci|vendor|device)[^\n]{0,40}?0x([0-9a-f]{4})"),
]

# Strict hex ID (e.g., 0x5333, 0x8811) for fallback pairing
HEX = re.compile(r"0x([0-9a-fA-F]{4})")

TEXT_LIKE = {
    ".config",
    ".table",
    ".tbl",
    ".cfg",
    ".conf",
    ".plist",
    ".txt",
}


def is_texty(path: Path) -> bool:
    return path.suffix.lower() in TEXT_LIKE


def scan_text(path: Path):
    try:
        data = path.read_bytes()
    except Exception:
        return []
    # Try utf-8, then latin-1 fallback
    try:
        text = data.decode("utf-8", errors="ignore")
    except Exception:
        text = data.decode("latin-1", errors="ignore")

    ids = []
    for pat in PATTERNS:
        for m in pat.finditer(text):
            # capture the hex at group 2 if present
            if m.lastindex and m.lastindex >= 2:
                try:
                    ids.append(int(m.group(2), 16))
                except Exception:
                    pass

    # Fallback: collect standalone 0xNNNN tokens
    if not ids:
        for m in HEX.finditer(text):
            try:
                ids.append(int(m.group(1), 16))
            except Exception:
                pass

    # Deduplicate while preserving order
    seen = set()
    uniq = []
    for i in ids:
        if i not in seen:
            uniq.append(i)
            seen.add(i)
    return uniq


def walk(root: Path):
    for p in root.rglob("*"):
        if not p.is_file():
            continue
        if is_texty(p):
            yield p


def main():
    if len(sys.argv) != 2:
        print("usage: scan_openstep_drivers.py <drivers_root>", file=sys.stderr)
        sys.exit(2)
    root = Path(sys.argv[1])
    if not root.exists():
        print(f"error: path not found: {root}", file=sys.stderr)
        sys.exit(1)

    # CSV header: file,hex_ids (semicolon separated)
    print("file,ids")
    for f in walk(root):
        ids = scan_text(f)
        if ids:
            joined = ";".join(f"0x{v:04x}" for v in ids)
            print(f"{f},{joined}")


if __name__ == "__main__":
    main()

