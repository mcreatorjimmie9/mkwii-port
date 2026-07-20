// Function at 0x80065960
// Size: 576 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80065960: stwu     r1, -0x60(r1)
//   0x80065964: mflr     r0
//   0x80065968: stw      r0, 0x64(r1)
//   0x8006596c: stfd     f31, 0x50(r1)
//   0x80065970: xscmpgtdp vs31, f1, f0
//   0x80065974: stfd     f30, 0x40(r1)
//   0x80065978: xsmaddmsp f30, f1, f0
//   0x8006597c: stfd     f29, 0x30(r1)
//   0x80065980: xxsel    vs29, vs1, vs0, v0
//   0x80065984: lfs      f0, -0x7310(r2)
//   0x80065988: stw      r31, 0x2c(r1)
//   0x8006598c: mr       r31, r8
//   0x80065990: stw      r30, 0x28(r1)
//   0x80065994: mr       r30, r5
//   0x80065998: stw      r29, 0x24(r1)
//   0x8006599c: mr       r29, r4
//   0x800659a0: stw      r28, 0x20(r1)
//   0x800659a4: mr       r28, r3
//   0x800659a8: lfs      f2, 0x14(r3)
//   0x800659ac: lfs      f1, 4(r3)
//

// TODO: Full decompilation requires Ghidra
