// Function at 0x800881a0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800881a0: stwu     r1, -0x10(r1)
//   0x800881a4: mflr     r0
//   0x800881a8: cmpwi    r4, 0
//   0x800881ac: stw      r0, 0x14(r1)
//   0x800881b0: stw      r31, 0xc(r1)
//   0x800881b4: mr       r31, r4
//   0x800881b8: stw      r30, 8(r1)
//   0x800881bc: mr       r30, r3
//   0x800881c0: bne      0x800881cc
//   0x800881c4: li       r3, 0
//   0x800881c8: b        0x800881fc
//   0x800881cc: lwz      r4, 4(r3)
//   0x800881d0: cmpwi    r4, 0
//   0x800881d4: beq      0x800881e8
//   0x800881d8: lbz      r3, 0xc(r4)
//   0x800881dc: addi     r5, r4, 8
//   0x800881e0: lwz      r4, 0x10(r4)
//   0x800881e4: bl       0x800ad010
//   0x800881e8: lwz      r5, 4(r30)
//   0x800881ec: lbz      r3, 0xc(r31)
//

// TODO: Full decompilation requires Ghidra
