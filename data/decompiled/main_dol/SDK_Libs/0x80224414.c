// Function at 0x80224414
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80224414: stwu     r1, -0x10(r1)
//   0x80224418: mflr     r0
//   0x8022441c: stw      r0, 0x14(r1)
//   0x80224420: stw      r31, 0xc(r1)
//   0x80224424: stw      r30, 8(r1)
//   0x80224428: mr       r30, r3
//   0x8022442c: bl       0x80027090
//   0x80224430: li       r31, 0
//   0x80224434: lwz      r0, 0x14(r30)
//   0x80224438: mr       r3, r30
//   0x8022443c: li       r5, 0
//   0x80224440: or       r4, r0, r31
//   0x80224444: bl       0x802245ac
//   0x80224448: addi     r31, r31, 1
//   0x8022444c: cmpwi    r31, 4
//   0x80224450: blt      0x80224434
//   0x80224454: lwz      r0, 0x14(r1)
//   0x80224458: lwz      r31, 0xc(r1)
//   0x8022445c: lwz      r30, 8(r1)
//   0x80224460: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
