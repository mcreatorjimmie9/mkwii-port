// Function at 0x800af880
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800af880: stwu     r1, -0x30(r1)
//   0x800af884: mflr     r0
//   0x800af888: stw      r0, 0x34(r1)
//   0x800af88c: stw      r31, 0x2c(r1)
//   0x800af890: stw      r30, 0x28(r1)
//   0x800af894: stw      r29, 0x24(r1)
//   0x800af898: mr       r29, r4
//   0x800af89c: lwz      r30, 0(r4)
//   0x800af8a0: lwz      r31, 0x58(r30)
//   0x800af8a4: cmpwi    r31, 0
//   0x800af8a8: ble      0x800af928
//   0x800af8ac: lbz      r0, 0x43(r30)
//   0x800af8b0: cmpwi    r0, 0
//   0x800af8b4: beq      0x800af8c0
//   0x800af8b8: lfs      f1, 0x44(r30)
//   0x800af8bc: b        0x800af8c8
//   0x800af8c0: mr       r3, r30
//   0x800af8c4: bl       0x800b3980
//   0x800af8c8: lis      r0, 0x4330
//   0x800af8cc: xoris    r3, r31, 0x8000
//

// TODO: Full decompilation requires Ghidra
