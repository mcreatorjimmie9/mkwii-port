// Function at 0x8009c850
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8009c850: stwu     r1, -0x60(r1)
//   0x8009c854: mflr     r0
//   0x8009c858: stw      r0, 0x64(r1)
//   0x8009c85c: stfd     f31, 0x50(r1)
//   0x8009c860: xscmpgtdp vs31, f1, f0
//   0x8009c864: stfd     f30, 0x40(r1)
//   0x8009c868: xsmaddmsp f30, f1, f0
//   0x8009c86c: stfd     f29, 0x30(r1)
//   0x8009c870: xxsel    vs29, vs1, vs0, v0
//   0x8009c874: lfs      f31, 0x24(r3)
//   0x8009c878: stw      r31, 0x2c(r1)
//   0x8009c87c: mr       r31, r6
//   0x8009c880: lfs      f0, -0x6e38(r2)
//   0x8009c884: stw      r30, 0x28(r1)
//   0x8009c888: mr       r30, r5
//   0x8009c88c: fcmpu    cr0, f0, f31
//   0x8009c890: stw      r29, 0x24(r1)
//   0x8009c894: mr       r29, r4
//   0x8009c898: bne      0x8009c8a8
//   0x8009c89c: lfs      f0, -0x6e3c(r2)
//

// TODO: Full decompilation requires Ghidra
