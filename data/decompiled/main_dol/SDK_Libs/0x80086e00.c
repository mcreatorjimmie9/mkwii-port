// Function at 0x80086e00
// Size: 544 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80086e00: stwu     r1, -0x40(r1)
//   0x80086e04: mflr     r0
//   0x80086e08: stw      r0, 0x44(r1)
//   0x80086e0c: stfd     f31, 0x30(r1)
//   0x80086e10: xxsel    vs31, vs1, vs0, v0
//   0x80086e14: fmr      f31, f1
//   0x80086e18: stw      r31, 0x2c(r1)
//   0x80086e1c: stw      r30, 0x28(r1)
//   0x80086e20: stw      r29, 0x24(r1)
//   0x80086e24: mr       r29, r3
//   0x80086e28: stw      r28, 0x20(r1)
//   0x80086e2c: lfs      f0, 0xc(r3)
//   0x80086e30: fmr      f1, f0
//   0x80086e34: bl       0x8001aaf8
//   0x80086e38: frsp     f0, f1
//   0x80086e3c: fmr      f1, f31
//   0x80086e40: fctiwz   f0, f0
//   0x80086e44: stfd     f0, 8(r1)
//   0x80086e48: lwz      r28, 0xc(r1)
//   0x80086e4c: bl       0x8001aaf8
//

// TODO: Full decompilation requires Ghidra
