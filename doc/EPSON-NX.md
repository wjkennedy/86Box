# Epson NX (Design Notes)

Summary
- Class: Intel 486 ISA desktop (PS/2 ports); NeXTSTEP/OPENSTEP certified
- CPU: i486DX2/66 default (33 MHz bus x2); Socket 3
- Video: On-board Chips & Technologies Wingine (CT64200 family) with Bt485 RAMDAC; 2 MB VRAM
- Storage: Dual on-board IDE (primary/secondary) per NX specs
- I/O: PS/2 keyboard/mouse; onboard serial/parallel; FDD controller
- NIC: Intel EtherExpress 16C (8‑bit ISA) referenced; optional, not set by default

References
- object.station/64200.pdf – Chips & Technologies CT64200 (Wingine) datasheet
- object.station/epnx__ps.pdf – Epson NX product sheet and specifications
- object.station/prog__pg.pdf – Programming/certification notes (mentions WSS context but NX uses IDE/ISA)

Whitebox preset
- tools/whitebox/presets/whitebox-486-isa-epson-nx.cfg
  - Machine: `epson_nx`, DX2/66 (33 MHz x2), 32 MB
  - Video: Wingine on‑board
  - Storage: IDE HDD + IDE CD‑ROM (on‑board)
  - Audio/Network: unset (no onboard sound; NIC optional)

Driver notes (NeXTSTEP/OPENSTEP)
- Display: Use Epson NX/Canon Wingine display driver package when available.
- Network: If onboard NIC is PCnet-32 (to be confirmed), use PCnet-32 driver.
- Storage: If SCSI present (e.g., BusLogic), install corresponding package; IDE also works for basic validation.

Implementation status
- Wingine device: basic scanout + palette; minimal E8 register block; 2 MB LFB at 0x7600000.
- Machine entry: “Epson NX” with on‑board Wingine and dual IDE; other devices NULL by default.

Validation plan
- Boot NEXTSTEP 3.2/OPENSTEP 4.2 using on‑board IDE.
- Install Epson Wingine/CT64200 display driver; exercise 640×480, 800×600, 1024×768.
- Add an ISA NIC (e.g., WD8013) via config if needed; EtherExpress 16C not yet emulated here.
