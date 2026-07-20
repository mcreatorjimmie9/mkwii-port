// Function at 0x8024342c
// Size: 104 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8024342c: stwu     r1, -0x10(r1)
//   0x80243430: mflr     r0
//   0x80243434: stw      r0, 0x14(r1)
//   0x80243438: stw      r31, 0xc(r1)
//   0x8024343c: stw      r30, 8(r1)
//   0x80243440: mr       r30, r3
//   0x80243444: bl       0x801a650c
//   0x80243448: lwz      r4, 8(r30)
//   0x8024344c: mr       r31, r3
//   0x80243450: cmpwi    r4, 0
//   0x80243454: beq      0x80243474
//   0x80243458: lwz      r3, 4(r4)
//   0x8024345c: bl       0x801baa18
//   0x80243460: bl       0x801ba904
//   0x80243464: lwz      r3, 8(r30)
//   0x80243468: li       r0, 0
//   0x8024346c: stw      r3, 0xc(r30)
//   0x80243470: stw      r0, 8(r30)
//   0x80243474: mr       r3, r31
//   0x80243478: bl       0x801a6534
//

// TODO: Full decompilation requires Ghidra
