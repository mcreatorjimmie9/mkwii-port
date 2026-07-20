// Function at 0x801aa4ec
// Size: 664 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801aa4ec: stwu     r1, -0x20(r1)
//   0x801aa4f0: mflr     r0
//   0x801aa4f4: stw      r0, 0x24(r1)
//   0x801aa4f8: stw      r31, 0x1c(r1)
//   0x801aa4fc: stw      r30, 0x18(r1)
//   0x801aa500: stw      r29, 0x14(r1)
//   0x801aa504: mr       r29, r3
//   0x801aa508: bl       0x801a650c
//   0x801aa50c: lwz      r30, 0x2cc(r29)
//   0x801aa510: mr       r31, r3
//   0x801aa514: addic.   r0, r30, -1
//   0x801aa518: stw      r0, 0x2cc(r29)
//   0x801aa51c: bge      0x801aa52c
//   0x801aa520: li       r0, 0
//   0x801aa524: stw      r0, 0x2cc(r29)
//   0x801aa528: b        0x801aa75c
//   0x801aa52c: bne      0x801aa75c
//   0x801aa530: lhz      r0, 0x2c8(r29)
//   0x801aa534: cmpwi    r0, 4
//   0x801aa538: beq      0x801aa5e8
//

// TODO: Full decompilation requires Ghidra
