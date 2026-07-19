// Function at 0x8005dec0
// Size: 816 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8005dec0: stwu     r1, -0x60(r1)
//   0x8005dec4: mflr     r0
//   0x8005dec8: stw      r0, 0x64(r1)
//   0x8005decc: stfd     f31, 0x50(r1)
//   0x8005ded0: xscmpgtdp vs31, f1, f0
//   0x8005ded4: stfd     f30, 0x40(r1)
//   0x8005ded8: xsmaddmsp f30, f1, f0
//   0x8005dedc: stfd     f29, 0x30(r1)
//   0x8005dee0: xxsel    vs29, vs1, vs0, v0
//   0x8005dee4: addi     r11, r1, 0x30
//   0x8005dee8: bl       0x80020a30
//   0x8005deec: mr       r23, r3
//   0x8005def0: mr       r24, r4
//   0x8005def4: mr       r25, r5
//   0x8005def8: bl       0x80067870
//   0x8005defc: lfs      f30, -0x73b0(r2)
//   0x8005df00: mr       r28, r3
//   0x8005df04: mr       r30, r28
//   0x8005df08: slwi     r29, r25, 1
//   0x8005df0c: fmr      f31, f30
//

// TODO: Full decompilation requires Ghidra
