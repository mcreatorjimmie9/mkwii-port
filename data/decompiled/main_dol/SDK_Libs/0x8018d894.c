// Function at 0x8018d894
// Size: 352 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8018d894: stwu     r1, -0x50(r1)
//   0x8018d898: mflr     r0
//   0x8018d89c: stw      r0, 0x54(r1)
//   0x8018d8a0: stfd     f31, 0x40(r1)
//   0x8018d8a4: xsmaddmsp f31, f1, f0
//   0x8018d8a8: stfd     f30, 0x30(r1)
//   0x8018d8ac: xxsel    vs30, vs1, vs0, v0
//   0x8018d8b0: cmpwi    r4, 0xa
//   0x8018d8b4: stw      r31, 0x2c(r1)
//   0x8018d8b8: stw      r30, 0x28(r1)
//   0x8018d8bc: stw      r29, 0x24(r1)
//   0x8018d8c0: mr       r29, r5
//   0x8018d8c4: beq      0x8018d8d8
//   0x8018d8c8: bge      0x8018d9c4
//   0x8018d8cc: cmpwi    r4, 9
//   0x8018d8d0: bge      0x8018d90c
//   0x8018d8d4: b        0x8018d9c4
//   0x8018d8d8: lwz      r31, 0(r5)
//   0x8018d8dc: lfs      f30, 8(r5)
//   0x8018d8e0: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
