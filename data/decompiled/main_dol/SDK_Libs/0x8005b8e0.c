// Function at 0x8005b8e0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b8e0: stwu     r1, -0x20(r1)
//   0x8005b8e4: mflr     r0
//   0x8005b8e8: stw      r0, 0x24(r1)
//   0x8005b8ec: stfd     f31, 0x18(r1)
//   0x8005b8f0: fmr      f31, f1
//   0x8005b8f4: stw      r31, 0x14(r1)
//   0x8005b8f8: li       r31, 0
//   0x8005b8fc: stw      r30, 0x10(r1)
//   0x8005b900: li       r30, 0
//   0x8005b904: stw      r29, 0xc(r1)
//   0x8005b908: mr       r29, r3
//   0x8005b90c: b        0x8005b93c
//   0x8005b910: lwz      r3, 0x1c(r29)
//   0x8005b914: lwzx     r3, r3, r31
//   0x8005b918: cmpwi    r3, 0
//   0x8005b91c: beq      0x8005b934
//   0x8005b920: lwz      r12, 0(r3)
//   0x8005b924: fmr      f1, f31
//   0x8005b928: lwz      r12, 0x1c(r12)
//   0x8005b92c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
