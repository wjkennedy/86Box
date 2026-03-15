# Canon object.station 41 (Design Notes)

Hardware summary (per NeXTanswers 1683):
- CPU: Intel 80486DX4-100, ISA + VL-BUS board (CHIPS ISA486 BIOS 1.2.2)
- SCSI: BusLogic BT-445C (VLB) at I/O 0x334, IRQ 11
- CD-ROM: Sony CDU561-01 (SCSI)
- Disk: Quantum Empire SCSI (target 0)
- Graphics: Canon Wingine, local bus; Bt485 RAMDAC, 2 MB VRAM
- Network: AMD PCnet-32, built-in (I/O 0x300, IRQ 15)
- Audio: Canon Object.station sound at 0x530, IRQ 9, DMA 3 (WSS-compatible)
- I/O: PS/2 KB/mouse; onboard serial/parallel; 1.44 MB FDD

Whitebox preset
- Use tools/whitebox/presets/whitebox-486-vlb-canon-object-station-41.cfg
  - Board: 486 VLB (Mylex MVI486), DX4 100 (33 MHz x3), 32 MB RAM
  - SCSI: BusLogic BT-445C VLB at 0x334, IRQ 11; HDD at 0:0; CD at 0:5
  - NIC: PCnet-32 VLB at 0x300, IRQ 15
  - Sound: Windows Sound System (base 0x530)
  - Video: temporary S3 Trio64 VLB; replace with Wingine device when available

Driver notes (NeXTSTEP/OPENSTEP)
- Requires Canon-specific packages for Display and Sound; PCnet-32 and BusLogic packages available from NeXTanswers (1685/1687/1690/1632).
- If boot hangs on networking, reorder Active Drivers per 1683 instructions.

Implementation roadmap
- Wingine video (phase 1):
  - New device: src/video/vid_wingine.c with Bt485 RAMDAC, 2 MB linear FB
  - I/O: 0x2C6–0x2C9 and 0x82C6–0x82C9; MMIO: 0x7600000 (2 MB), 0x90000 (192 KB)
  - Hook as onboard video in a new 486 Socket 3 VLB machine entry
- Onboard devices (phase 2):
  - Machine entry: “Canon object.station 41” under MACHINE_TYPE_486_S3
  - Default net: pcnetvlb @ 0x300/IRQ 15; sound: WSS @ 0x530; SCSI flag
- Validation (phase 3):
  - Boot NEXTSTEP 3.2 and OPENSTEP 4.2; install Canon display/sound, BusLogic, PCnet-32
  - Exercise modes up to 1024x768; NIC throughput; SCSI timing

Notes
- Keep root partitions ≤ 2 GB for reliability on NeXTSTEP/OPENSTEP.
- Do not commit ROM images; use the roms submodule/local packs.
