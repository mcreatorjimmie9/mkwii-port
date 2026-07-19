// Function at 0x8005a390
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005a390: stwu     r1, -0x20(r1)
//   0x8005a394: mflr     r0
//   0x8005a398: stw      r0, 0x24(r1)
//   0x8005a39c: stfd     f31, 0x18(r1)
//   0x8005a3a0: fmr      f31, f1
//   0x8005a3a4: stw      r31, 0x14(r1)
//   0x8005a3a8: li       r31, 0
//   0x8005a3ac: stw      r30, 0x10(r1)
//   0x8005a3b0: li       r30, 0
//   0x8005a3b4: stw      r29, 0xc(r1)
//   0x8005a3b8: mr       r29, r3
//   0x8005a3bc: b        0x8005a3ec
//   0x8005a3c0: lwz      r3, 0x1c(r29)
//   0x8005a3c4: lwzx     r3, r3, r31
//   0x8005a3c8: cmpwi    r3, 0
//   0x8005a3cc: beq      0x8005a3e4
//   0x8005a3d0: lwz      r12, 0(r3)
//   0x8005a3d4: fmr      f1, f31
//   0x8005a3d8: lwz      r12, 0x28(r12)
//   0x8005a3dc: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
