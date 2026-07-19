// Function at 0x8007ca10
// Size: 384 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8007ca10: stwu     r1, -0x60(r1)
//   0x8007ca14: mflr     r0
//   0x8007ca18: stw      r0, 0x64(r1)
//   0x8007ca1c: stfd     f31, 0x50(r1)
//   0x8007ca20: xscmpgtdp vs31, f1, f0
//   0x8007ca24: stfd     f30, 0x40(r1)
//   0x8007ca28: xsmaddmsp f30, f1, f0
//   0x8007ca2c: addi     r11, r1, 0x40
//   0x8007ca30: bl       0x80020a40
//   0x8007ca34: lfs      f31, -0x71d8(r2)
//   0x8007ca38: fmr      f30, f1
//   0x8007ca3c: stfs     f31, 0(r3)
//   0x8007ca40: mr       r27, r3
//   0x8007ca44: mr       r28, r4
//   0x8007ca48: mr       r29, r5
//   0x8007ca4c: stfs     f31, 8(r3)
//   0x8007ca50: mr       r30, r6
//   0x8007ca54: stfs     f31, 4(r3)
//   0x8007ca58: stfs     f31, 0xc(r3)
//   0x8007ca5c: stfs     f31, 0x2c(r4)
//

// TODO: Full decompilation requires Ghidra
