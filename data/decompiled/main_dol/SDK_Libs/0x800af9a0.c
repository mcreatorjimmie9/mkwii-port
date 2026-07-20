// Function at 0x800af9a0
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x800af9a0: stwu     r1, -0x50(r1)
//   0x800af9a4: mflr     r0
//   0x800af9a8: stw      r0, 0x54(r1)
//   0x800af9ac: stfd     f31, 0x40(r1)
//   0x800af9b0: xsmaddmsp f31, f1, f0
//   0x800af9b4: stfd     f30, 0x30(r1)
//   0x800af9b8: xxsel    vs30, vs1, vs0, v0
//   0x800af9bc: cmpwi    r4, 0xa
//   0x800af9c0: stw      r31, 0x2c(r1)
//   0x800af9c4: stw      r30, 0x28(r1)
//   0x800af9c8: stw      r29, 0x24(r1)
//   0x800af9cc: mr       r29, r5
//   0x800af9d0: beq      0x800af9e0
//   0x800af9d4: cmpwi    r4, 9
//   0x800af9d8: beq      0x800afa08
//   0x800af9dc: b        0x800afa9c
//   0x800af9e0: lwz      r31, 0(r5)
//   0x800af9e4: lfs      f31, 8(r5)
//   0x800af9e8: lfs      f30, 0x30(r31)
//   0x800af9ec: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
