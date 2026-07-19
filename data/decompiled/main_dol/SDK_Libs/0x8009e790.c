// Function at 0x8009e790
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8009e790: stwu     r1, -0x10(r1)
//   0x8009e794: mflr     r0
//   0x8009e798: lwz      r5, 0x28(r3)
//   0x8009e79c: stw      r0, 0x14(r1)
//   0x8009e7a0: stw      r31, 0xc(r1)
//   0x8009e7a4: mr       r31, r4
//   0x8009e7a8: stw      r30, 8(r1)
//   0x8009e7ac: mr       r30, r3
//   0x8009e7b0: lbz      r3, 0(r5)
//   0x8009e7b4: lwz      r4, 4(r5)
//   0x8009e7b8: bl       0x800ad010
//   0x8009e7bc: cmpwi    r3, 0
//   0x8009e7c0: bne      0x8009e7cc
//   0x8009e7c4: li       r3, 0
//   0x8009e7c8: b        0x8009e860
//   0x8009e7cc: lwz      r0, 0(r3)
//   0x8009e7d0: cmplw    r31, r0
//   0x8009e7d4: blt      0x8009e7e0
//   0x8009e7d8: li       r3, 0
//   0x8009e7dc: b        0x8009e860
//

// TODO: Full decompilation requires Ghidra
