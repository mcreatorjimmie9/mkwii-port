// Function at 0x8005b9d0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b9d0: stwu     r1, -0x20(r1)
//   0x8005b9d4: mflr     r0
//   0x8005b9d8: stw      r0, 0x24(r1)
//   0x8005b9dc: stfd     f31, 0x18(r1)
//   0x8005b9e0: fmr      f31, f1
//   0x8005b9e4: stw      r31, 0x14(r1)
//   0x8005b9e8: li       r31, 0
//   0x8005b9ec: stw      r30, 0x10(r1)
//   0x8005b9f0: li       r30, 0
//   0x8005b9f4: stw      r29, 0xc(r1)
//   0x8005b9f8: mr       r29, r3
//   0x8005b9fc: b        0x8005ba2c
//   0x8005ba00: lwz      r3, 0x1c(r29)
//   0x8005ba04: lwzx     r3, r3, r31
//   0x8005ba08: cmpwi    r3, 0
//   0x8005ba0c: beq      0x8005ba24
//   0x8005ba10: lwz      r12, 0(r3)
//   0x8005ba14: fmr      f1, f31
//   0x8005ba18: lwz      r12, 0x28(r12)
//   0x8005ba1c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
