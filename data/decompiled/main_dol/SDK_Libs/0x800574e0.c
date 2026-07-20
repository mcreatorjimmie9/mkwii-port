// Function at 0x800574e0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800574e0: stwu     r1, -0x20(r1)
//   0x800574e4: mflr     r0
//   0x800574e8: stw      r0, 0x24(r1)
//   0x800574ec: stfd     f31, 0x18(r1)
//   0x800574f0: fmr      f31, f1
//   0x800574f4: stw      r31, 0x14(r1)
//   0x800574f8: li       r31, 0
//   0x800574fc: stw      r30, 0x10(r1)
//   0x80057500: li       r30, 0
//   0x80057504: stw      r29, 0xc(r1)
//   0x80057508: mr       r29, r3
//   0x8005750c: b        0x8005753c
//   0x80057510: lwz      r3, 0x1c(r29)
//   0x80057514: lwzx     r3, r3, r31
//   0x80057518: cmpwi    r3, 0
//   0x8005751c: beq      0x80057534
//   0x80057520: lwz      r12, 0(r3)
//   0x80057524: fmr      f1, f31
//   0x80057528: lwz      r12, 0x28(r12)
//   0x8005752c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
