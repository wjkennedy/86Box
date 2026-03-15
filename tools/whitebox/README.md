Whitebox Driver Scanner

Purpose
- Aid in verifying OpenStep/NeXTSTEP driver PCI vendor/device IDs against 86Box device choices.

Usage
1) Obtain and mount or extract the OpenStep 4.2 (Intel) media or a driver update package so you have a directory containing driver bundles (e.g., `.config`, `.table`, `.plist`, `.cfg` files).
2) Run the scanner and point it at the root of that directory:

   python3 tools/whitebox/scan_openstep_drivers.py /path/to/DriversRoot > ids.csv

3) Review `ids.csv` for lines mapping files to detected PCI IDs (vendor:device), then update `doc/WHITEBOX-NEXT.md` pick lists with exact matches.

Notes
- The scanner uses heuristics to find hex IDs near common keys like “vendor”, “device”, and “pci”. It’s conservative and won’t mutate files.
- If your media is an ISO, first mount it and pass the mounted path. If it’s a `.pkg`/`.cpio` archive, extract it with `pax`/`cpio`.

Alternative (when mounting NeXT UFS fails)
- You can still mine IDs and names without mounting by combining `strings` with ripgrep and saving the results:

  strings -a /path/to/OPENSTEP_4.2.iso | rg -n -S "\"Driver Name\" = |Auto Detect IDs" > tools/whitebox/os42_scan_snippets.txt

  Then reconcile “Auto Detect IDs” (format 0xDDDDVVVV) and nearby “Driver Name” entries manually.
