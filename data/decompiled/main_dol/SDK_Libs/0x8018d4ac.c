// Function at 0x8018d4ac
// Size: 352 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8018d4ac: stwu     r1, -0x50(r1)
//   0x8018d4b0: mflr     r0
//   0x8018d4b4: stw      r0, 0x54(r1)
//   0x8018d4b8: stfd     f31, 0x40(r1)
//   0x8018d4bc: xsmaddmsp f31, f1, f0
//   0x8018d4c0: stfd     f30, 0x30(r1)
//   0x8018d4c4: xxsel    vs30, vs1, vs0, v0
//   0x8018d4c8: cmpwi    r4, 0xa
//   0x8018d4cc: stw      r31, 0x2c(r1)
//   0x8018d4d0: stw      r30, 0x28(r1)
//   0x8018d4d4: stw      r29, 0x24(r1)
//   0x8018d4d8: mr       r29, r5
//   0x8018d4dc: beq      0x8018d4f0
//   0x8018d4e0: bge      0x8018d5dc
//   0x8018d4e4: cmpwi    r4, 9
//   0x8018d4e8: bge      0x8018d524
//   0x8018d4ec: b        0x8018d5dc
//   0x8018d4f0: lwz      r31, 0(r5)
//   0x8018d4f4: lfs      f30, 8(r5)
//   0x8018d4f8: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
