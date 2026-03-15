Whitebox for 86Box — NeXTSTEP/OpenStep on PC Compatibles

Goals
- Provide a complete NeXT experience on PC-compatible hardware emulated by 86Box.
- Curate only hardware known to be supported by the NeXTSTEP 3.3 and OpenStep 4.2 Intel HCL.
- Prefer simple, stable ISA-era devices; avoid late PCI/AGP devices and PnP pitfalls.

Scope
- Targets: NeXTSTEP 3.3 (Intel) and OpenStep 4.2 (Intel).
- Emulators: 86Box (current tree). No patches required, only configuration guidance.
- Principle: If it’s in the HCL and 86Box emulates it, include it. Remove/avoid all else.

Baseline Guidance
- CPU/Chipset: 486DX2/66 or early Pentium (Socket 5/7) with classic Intel chipsets (430FX/HX/VX) or well‑behaved 486 VLB.
- Memory: 32–64 MB (NeXTSTEP runs fine with 16–32 MB; 64 MB is comfortable for OpenStep 4.2). Avoid >128 MB.
- Storage: Prefer SCSI with Adaptec AHA‑1542C/CF (ISA) or AHA‑2940 (PCI) when available; IDE/ATAPI also works within size limits.
- Video: S3 family adapters (e.g., Trio64/ViRGE) are safest. Cirrus Logic GD542x/543x also viable.
- Network: ISA NE2000 or 3Com 3C509.
- Audio: Sound Blaster 16 (non‑PnP variants preferred) or PC speaker.
- Input: PS/2 mouse, standard AT keyboard.

Disk Size/Partitioning
- Use disks ≤ 2 GB for NeXTSTEP; OpenStep 4.2 tolerates larger but keep the root partition ≤ 2 GB for reliability.
- Use CHS/LBA defaults; avoid very large geometries. Create partitions during the NeXT/OPENSTEP install tools.

Reference Configurations (86Box)

Config A — 486 ISA + SCSI (maximum compatibility)
- Machine: 486 VLB/ISA board (e.g., generic AMI/SiS 496/497 style). Disable advanced PnP.
- CPU: 486DX2/66.
- RAM: 32 MB.
- Video: S3 Trio64 (ISA/VLB) or S3 805/864 class; 2–4 MB VRAM.
- Storage Controller: Adaptec AHA‑1542C/CF (ISA SCSI) with a 1–2 GB SCSI HDD and SCSI CD‑ROM.
- Floppy: 3.5" 1.44 MB.
- Network: NE2000 (ISA) or 3Com 3C509 (ISA).
- Audio: Sound Blaster 16 (non‑PnP), base I/O 220h, IRQ 5/7, DMA 1.
- Mouse: PS/2.

Config B — Early Pentium PCI + IDE (simple setup)
- Machine: Pentium (Socket 5/7) with Intel 430FX/430HX‑like chipset.
- CPU: Pentium 90–133.
- RAM: 64 MB.
- Video: S3 Trio64V+/ViRGE (PCI); 2–4 MB VRAM.
- Storage Controller: IDE (Primary) with 1–2 GB HDD and ATAPI CD‑ROM.
- Floppy: 3.5" 1.44 MB.
- Network: NE2000 (ISA) or 3Com 3C509 (ISA). Prefer ISA NICs even on PCI boards.
- Audio: Sound Blaster 16 (non‑PnP), base I/O 220h, IRQ 5/7, DMA 1.
- Mouse: PS/2.

Driver Notes (Installers)
- Video: Select an S3 driver (Trio/ViRGE) or Cirrus Logic driver matching the chosen card; fall back to VGA if needed and update post‑install.
- SCSI: Choose Adaptec 1542 (ISA) or 2940 (PCI) drivers to match the selected controller.
- IDE/ATAPI: Use standard EIDE/ATAPI driver during install; ensure CD‑ROM is on a supported channel.
- Network: Choose NE2000 or 3C509 driver; set I/O base/IRQ to match the 86Box NIC settings.
- Audio: Sound Blaster 16 compatible driver; ensure non‑PnP resources match.

What to Avoid (Unsupported/Unreliable)
- Late PCI/AGP video (S3 Savage, Virge GX2+, Riva, Voodoo, ATI Rage/128), and 3D accelerators.
- PCI‑only NICs (e.g., 3C90x/905, Intel Pro/100, Realtek 8139) — use ISA NE2000/3C509 instead.
- ACPI/APIC, advanced power management beyond classic APM; disable APIC.
- Very large disks (> 2–4 GB) for boot; GPT/modern partitioning.
- USB input devices; stick to PS/2.
- SB16 PnP variants if you cannot lock their resources; non‑PnP is safer.

Installation Tips
- Start with VGA 640×480 if unsure; switch to S3/Cirrus driver after the base system boots.
- Keep the CD‑ROM on a controller/channel supported by the chosen driver (SCSI or primary IDE).
- Match IRQ/I/O bases for ISA peripherals exactly with driver selections.
- If networking stalls, try NE2000 first; if issues persist, switch to 3C509.
- If IDE timing causes issues on faster Pentiums, reduce CPU speed or cache settings in 86Box.

Curation Policy
- Include only devices present in the NeXTSTEP/OpenStep Intel HCL and emulated by 86Box.
- Prefer the simplest option when multiple variants exist (e.g., S3 Trio64 over newer S3).
- Provide at least one ISA‑centric and one PCI‑centric reference configuration.

Next Steps
- Turn these into shareable 86Box preset files (sample .cfg) and a short setup script.
- Validate exact driver names from the HCL and update this document with precise pick‑lists per OS version.
- Add screenshots of 86Box device menus with the selected options for both configs.

Confirmed IDs (OpenStep 4.2 media)
- IntelPRO100PCI: 0x1227:0x8086 (device:vendor)
- AMDPCnet32: 0x2000:0x1022 (device:vendor)
- ATI (Display): 0x4758:0x1002, 0x4358:0x1002, 0x4554:0x1002, 0x4354:0x1002, 0x5654:0x1002, 0x4754:0x1002
- Weitek P9100 (Display): 0x9100:0x100e
- PCMCIA (Intel 82365 PCIC): 0x1100:0x1013
- S3, Cirrus, Adaptec 2940: present with named drivers; IDs not explicitly enumerated in the scanned strings output. Use the named drivers listed above.

Floppy Findings (4.2 + Beta)
- IDE/EIDE (Primary): EIDE includes Auto Detect IDs for common Intel PIIX IDE controllers: 0x1230:0x8086, 0x7010:0x8086, 0x7111:0x8086; plus 0x1000:0x1042.
- Sound Blaster 16: PnP identifiers seen (PNPB003, CTL009e, CTL00c3) and 0x0e8c0031 string; prefer non‑PnP SB16 with fixed resources.
- ATI Display (Beta): Additional device IDs appear: 0x4742:0x1002, 0x4354:0x1002, 0x4754:0x1002, 0x4755:0x1002, 0x4750:0x1002, 0x4C47:0x1002, 0x5654:0x1002.
- BusLogic FlashPoint (Beta): BLFPController shows 0x8130:0x104b.
- Number Nine (Beta): Imagine 128 S2: 0x2339:0x105d and 0x493d:0x105d.
- Matrox (Beta): MGA‑2064W: 0x0519:0x102B; MGA‑1064SG: 0x051A:0x102B, 0x051E:0x102B.

Presets
- tools/whitebox/presets/whitebox-486-isa-scsi.cfg: 486DX2/66, S3 Trio64 VLB, AHA‑154xC SCSI, NE2000, SB16, SCSI CD‑ROM.
- tools/whitebox/presets/whitebox-pentium-pci-ide.cfg: Pentium 90, S3 Trio64 PCI, IDE HDD + ATAPI CD, NE2000, SB16.
- tools/whitebox/presets/whitebox-full-tilt-special.cfg: Socket 7 with Matrox Millennium II + 3Dfx Voodoo, two NICs (NE2000 + AMD PCnet‑PCI), IDE HDD + ATAPI CD, SB16.
- Variants:
  - tools/whitebox/presets/whitebox-486-vlb-ide-cirrus.cfg: 486DX2/66, Cirrus Logic GD5434 VLB, IDE HDD + ATAPI CD, NE2000, SB16.
  - tools/whitebox/presets/whitebox-pentium-pci-ide-s3v2.cfg: Pentium 100, S3 Trio64V2/DX PCI, IDE HDD + ATAPI CD, NE2000, SB16.
  - tools/whitebox/presets/whitebox-pentium-pci-scsi-ncr810.cfg: Pentium 100, PCI NCR 53c810 SCSI, S3 Trio64 PCI, NE2000, SB16, SCSI CD‑ROM.
  - tools/whitebox/presets/whitebox-pentium-pci-scsi-buslogic.cfg: Pentium 100, BusLogic BT‑958D PCI SCSI, S3 Trio64 PCI, NE2000, SB16, SCSI CD‑ROM.
  - tools/whitebox/presets/whitebox-s370-full-tilt.cfg: Socket 370 (i440LX), Matrox G100 + 3Dfx Voodoo add‑on, two NICs (PCnet‑PCI + DEC 21140 Tulip), dual ATAPI, larger RAM.
  - tools/whitebox/presets/whitebox-full-tilt-voodoo2.cfg: Socket 7 full‑tilt with Voodoo2 add‑on (type=2), Matrox Millennium II primary.
  - tools/whitebox/presets/whitebox-s370-voodoo2-full-tilt.cfg: Socket 370 full‑tilt with Voodoo2 add‑on (type=2), Matrox G100 primary.

Notes on the “Full‑Tilt Special”
- This is intentionally over-provisioned “for fun” and not HCL‑clean. Expect limited or no driver support for Voodoo in OpenStep; Matrox beta drivers exist but are not preferred for Whitebox. 86Box does not expose a general PCMCIA bus for desktops; so PCMCIA is not included in the preset.
- If you want different pairings (e.g., Virge instead of Matrox, alternate NICs), say the word and I’ll add variants.
- For Socket 370, ATAPI is used across devices; feel free to scale disk sizes. If you want a Voodoo2‑focused variant, we can wire that once we confirm the exact preset knob for selecting Voodoo2 in this 86Box build; current presets enable a Voodoo Graphics (Voodoo1) add‑on.
  - Note: 86Box supports selecting Voodoo2 for the add‑on via a per‑device section named “3Dfx Voodoo Graphics” with key `type = 2`. These Voodoo presets are for experimentation; OpenStep itself does not ship Voodoo 1/2 drivers.

Driver Pick Lists (Initial)
- Display (2D)
  - S3: “S3GenericDisplayDriver” (covers 805/805i/928/864/964, Trio32/Trio64/Trio64V+).
  - Cirrus: “CirrusLogicGD542X”, “CirrusLogicGD5434DisplayDriver”.
  - ATI (present but not preferred): “ATI” with Auto Detect IDs device:vendor pairs
    - 0x4758:0x1002, 0x4358:0x1002, 0x4554:0x1002, 0x4354:0x1002, 0x5654:0x1002, 0x4754:0x1002.
  - Installer tip: Start with VGA if unsure; after first boot, switch to S3 or Cirrus.
- SCSI
  - ISA: “Adaptec1542B” (Adaptec 154x). Stable boot/storage choice.
  - PCI: “Adaptec2940SCSIDriver” (Adaptec 2940/AIC‑78xx). Detected via PCI config; no explicit IDs string in media.
  - Optional: “BusLogic FlashPoint” (PCI) available but not required for Whitebox targets.
- IDE/ATAPI
  - “EIDE” standard driver (Primary). Keep boot/root ≤ 2 GB for reliability.
- Network (ISA preferred)
  - 3Com: “EtherLink3” (3C509 ISA; variants EISA/ISA/PnP present). Use ISA 3C509 for maximum compatibility.
  - NE2000‑compatible: Use SMC/WD ISA drivers such as “SMC EtherCard Plus Elite16” when NE2000 wording is absent.
  - Optional PCI: “IntelPRO100PCI” Auto Detect IDs 0x1227:0x8086; “AMDPCnet32” Auto Detect IDs 0x2000:0x1022. Prefer ISA NICs.
- Audio
  - “Sound Blaster 16” (non‑PnP) at 220h, IRQ 5 or 7, DMA 1; PC Speaker fallback.
- Input
  - PS/2 Keyboard + PS/2 Mouse.

PCI ID Verification (Optional)
- Some OpenStep drivers match by PCI vendor/device IDs. When using PCI devices (e.g., S3 Trio64V+, AHA‑2940), verify IDs against the OpenStep driver bundles.
- Use the helper at `tools/whitebox/scan_openstep_drivers.py` on an extracted or mounted OpenStep/NeXTSTEP driver set to list discovered PCI IDs, then reconcile with 86Box device choices. If you cannot mount NeXT UFS media, piping `strings` over the ISO and grepping for “Auto Detect IDs” and “Driver Name” also works. See artifacts:
  - `tools/whitebox/os42_scan_snippets.txt` (strings/grep results; works without mounting)
  - `tools/whitebox/os42_ids.csv` (CSV from scanner; may be empty unless files are mounted/extracted)

Revision History
- v0.1: Initial draft of Whitebox guidance and reference configs.
