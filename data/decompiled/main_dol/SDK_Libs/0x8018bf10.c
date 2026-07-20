// Function at 0x8018bf10
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8018bf10: stwu     r1, -0x50(r1)
//   0x8018bf14: mflr     r0
//   0x8018bf18: stw      r0, 0x54(r1)
//   0x8018bf1c: stfd     f31, 0x40(r1)
//   0x8018bf20: xsmaddmsp f31, f1, f0
//   0x8018bf24: stfd     f30, 0x30(r1)
//   0x8018bf28: xxsel    vs30, vs1, vs0, v0
//   0x8018bf2c: fmr      f30, f1
//   0x8018bf30: fmr      f31, f2
//   0x8018bf34: stw      r31, 0x2c(r1)
//   0x8018bf38: stw      r30, 0x28(r1)
//   0x8018bf3c: stw      r29, 0x24(r1)
//   0x8018bf40: mr       r29, r3
//   0x8018bf44: lwz      r3, 0x48(r3)
//   0x8018bf48: lwz      r12, 0(r3)
//   0x8018bf4c: lwz      r12, 0x10(r12)
//   0x8018bf50: mtctr    r12
//   0x8018bf54: bctrl    
//   0x8018bf58: xoris    r0, r3, 0x8000
//   0x8018bf5c: lis      r31, 0x4330
//

// TODO: Full decompilation requires Ghidra
