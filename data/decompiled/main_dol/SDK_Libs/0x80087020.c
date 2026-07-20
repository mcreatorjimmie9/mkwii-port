// Function at 0x80087020
// Size: 640 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80087020: stwu     r1, -0x40(r1)
//   0x80087024: mflr     r0
//   0x80087028: stw      r0, 0x44(r1)
//   0x8008702c: stfd     f31, 0x30(r1)
//   0x80087030: xxsel    vs31, vs1, vs0, v0
//   0x80087034: fmr      f31, f1
//   0x80087038: stw      r31, 0x2c(r1)
//   0x8008703c: stw      r30, 0x28(r1)
//   0x80087040: stw      r29, 0x24(r1)
//   0x80087044: mr       r29, r3
//   0x80087048: stw      r28, 0x20(r1)
//   0x8008704c: lfs      f0, 0xc(r3)
//   0x80087050: fmr      f1, f0
//   0x80087054: bl       0x8001a8b8
//   0x80087058: frsp     f0, f1
//   0x8008705c: fmr      f1, f31
//   0x80087060: fctiwz   f0, f0
//   0x80087064: stfd     f0, 8(r1)
//   0x80087068: lwz      r28, 0xc(r1)
//   0x8008706c: bl       0x8001a8b8
//

// TODO: Full decompilation requires Ghidra
