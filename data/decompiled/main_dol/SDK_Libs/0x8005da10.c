// Function at 0x8005da10
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005da10: stwu     r1, -0x20(r1)
//   0x8005da14: mflr     r0
//   0x8005da18: stw      r0, 0x24(r1)
//   0x8005da1c: stfd     f31, 0x18(r1)
//   0x8005da20: fmr      f31, f1
//   0x8005da24: stw      r31, 0x14(r1)
//   0x8005da28: li       r31, 0
//   0x8005da2c: stw      r30, 0x10(r1)
//   0x8005da30: li       r30, 0
//   0x8005da34: stw      r29, 0xc(r1)
//   0x8005da38: mr       r29, r3
//   0x8005da3c: b        0x8005da6c
//   0x8005da40: lwz      r3, 0x1c(r29)
//   0x8005da44: lwzx     r3, r3, r31
//   0x8005da48: cmpwi    r3, 0
//   0x8005da4c: beq      0x8005da64
//   0x8005da50: lwz      r12, 0(r3)
//   0x8005da54: fmr      f1, f31
//   0x8005da58: lwz      r12, 0x28(r12)
//   0x8005da5c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
