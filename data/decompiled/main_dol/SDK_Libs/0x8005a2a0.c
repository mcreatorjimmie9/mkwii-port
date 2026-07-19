// Function at 0x8005a2a0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005a2a0: stwu     r1, -0x20(r1)
//   0x8005a2a4: mflr     r0
//   0x8005a2a8: stw      r0, 0x24(r1)
//   0x8005a2ac: stfd     f31, 0x18(r1)
//   0x8005a2b0: fmr      f31, f1
//   0x8005a2b4: stw      r31, 0x14(r1)
//   0x8005a2b8: li       r31, 0
//   0x8005a2bc: stw      r30, 0x10(r1)
//   0x8005a2c0: li       r30, 0
//   0x8005a2c4: stw      r29, 0xc(r1)
//   0x8005a2c8: mr       r29, r3
//   0x8005a2cc: b        0x8005a2fc
//   0x8005a2d0: lwz      r3, 0x1c(r29)
//   0x8005a2d4: lwzx     r3, r3, r31
//   0x8005a2d8: cmpwi    r3, 0
//   0x8005a2dc: beq      0x8005a2f4
//   0x8005a2e0: lwz      r12, 0(r3)
//   0x8005a2e4: fmr      f1, f31
//   0x8005a2e8: lwz      r12, 0x1c(r12)
//   0x8005a2ec: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
