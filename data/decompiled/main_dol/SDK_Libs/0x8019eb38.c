// Function at 0x8019eb38
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8019eb38: stwu     r1, -0x10(r1)
//   0x8019eb3c: mflr     r0
//   0x8019eb40: stw      r0, 0x14(r1)
//   0x8019eb44: stw      r31, 0xc(r1)
//   0x8019eb48: bl       0x801a650c
//   0x8019eb4c: lwz      r0, -0x71a0(r13)
//   0x8019eb50: cmpwi    r0, -0xff
//   0x8019eb54: bne      0x8019eb68
//   0x8019eb58: li       r0, -0xfe
//   0x8019eb5c: li       r31, 0
//   0x8019eb60: stw      r0, -0x71a0(r13)
//   0x8019eb64: b        0x8019eb6c
//   0x8019eb68: li       r31, 1
//   0x8019eb6c: bl       0x801a6534
//   0x8019eb70: cntlzw   r0, r31
//   0x8019eb74: lwz      r31, 0xc(r1)
//   0x8019eb78: srwi     r3, r0, 5
//   0x8019eb7c: lwz      r0, 0x14(r1)
//   0x8019eb80: mtlr     r0
//   0x8019eb84: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
