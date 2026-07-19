// Function at 0x80078ce0
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80078ce0: stwu     r1, -0x20(r1)
//   0x80078ce4: mflr     r0
//   0x80078ce8: stw      r0, 0x24(r1)
//   0x80078cec: stw      r31, 0x1c(r1)
//   0x80078cf0: stw      r30, 0x18(r1)
//   0x80078cf4: mr       r30, r3
//   0x80078cf8: addi     r3, r3, 0xbc
//   0x80078cfc: stw      r29, 0x14(r1)
//   0x80078d00: mr       r29, r5
//   0x80078d04: stw      r28, 0x10(r1)
//   0x80078d08: mr       r28, r4
//   0x80078d0c: bl       0x80084240
//   0x80078d10: cmpwi    r3, 0
//   0x80078d14: beq      0x80078d20
//   0x80078d18: mr       r3, r30
//   0x80078d1c: b        0x80078d68
//   0x80078d20: cmpwi    r29, 0
//   0x80078d24: beq      0x80078d64
//   0x80078d28: lwzu     r31, 0x14(r30)
//   0x80078d2c: b        0x80078d5c
//

// TODO: Full decompilation requires Ghidra
