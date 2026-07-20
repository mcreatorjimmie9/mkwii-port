// Function at 0x80188358
// Size: 392 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80188358: stwu     r1, -0x60(r1)
//   0x8018835c: mflr     r0
//   0x80188360: stw      r0, 0x64(r1)
//   0x80188364: stfd     f31, 0x50(r1)
//   0x80188368: xscmpgtdp vs31, f1, f0
//   0x8018836c: stfd     f30, 0x40(r1)
//   0x80188370: xsmaddmsp f30, f1, f0
//   0x80188374: addi     r11, r1, 0x40
//   0x80188378: bl       0x80020a3c
//   0x8018837c: lis      r30, -0x7fdb
//   0x80188380: fmr      f30, f1
//   0x80188384: lfs      f1, 0x2868(r30)
//   0x80188388: mr       r27, r4
//   0x8018838c: mr       r26, r3
//   0x80188390: mr       r28, r5
//   0x80188394: fmr      f2, f1
//   0x80188398: stfs     f1, 0(r3)
//   0x8018839c: mr       r29, r6
//   0x801883a0: stfs     f1, 8(r3)
//   0x801883a4: stfs     f1, 4(r3)
//

// TODO: Full decompilation requires Ghidra
