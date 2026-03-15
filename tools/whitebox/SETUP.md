Whitebox Setup and Test (Quick Start)

Prereqs
- Host: macOS 10.13+ or Linux with modern CMake and compiler
- Install dependencies (examples):
  - macOS (Homebrew): brew install cmake ninja sdl2 qt@5 libpng zlib
  - Linux (Debian/Ubuntu): sudo apt-get install cmake ninja-build libsdl2-dev qtbase5-dev libpng-dev zlib1g-dev
- ROMs: 86Box requires ROM packs for many machines/cards. Place them under the default 86Box ROMs directory or point 86Box there via UI.

Build
- mkdir build && cd build
- cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ..
- ninja

macOS one‑liner
- bash tools/whitebox/build_macos.sh --install-deps
  - Script locates the repo root automatically; you can run it from anywhere.
  - It prefers Qt 5 if available. If only Qt 6 is installed (brew install qt), it sets -DUSE_QT6=ON automatically.

Prepare VMs
- Choose a vmpath directory to store VMs, e.g., ~/86box-vms
- From repo root, run:

  bash tools/whitebox/setup_presets.sh ~/86box-vms

- This creates one subfolder per preset and installs its config as 86box.cfg.

Run 86Box
- From build directory:

  ./bin/86Box --vmpath ~/86box-vms

- In the UI, pick a Whitebox VM folder (e.g., whitebox-486-isa-scsi), open Settings to confirm devices, and attach media:
  - Floppy 1: 4.2_Install_Disk.floppyimage.img
  - Floppy 2: 4.2_Driver_Disk.floppyimage.img (or Beta driver floppies as needed)
  - CD-ROM: OPENSTEP_4.2.iso (for IDE ATAPI or SCSI depending on preset)
- Boot from floppy, install, and when prompted, add SCSI/Video/NIC drivers matching the preset (see Driver Pick Lists in doc/WHITEBOX-NEXT.md).

Notes
- Keep root partition ≤ 2 GB for reliability with NeXTSTEP/OpenStep.
- If the UI warns about missing ROMs for selected devices, install the ROM pack and relaunch.
- For Voodoo add-on variants, no OpenStep 2D/3D driver is expected; they are “specials”. Use S3/Cirrus for the display driver.
