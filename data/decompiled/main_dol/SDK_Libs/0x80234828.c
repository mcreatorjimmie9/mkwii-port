// Function at 0x80234828
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80234828: stwu     r1, -0x60(r1)
//   0x8023482c: mflr     r0
//   0x80234830: stw      r0, 0x64(r1)
//   0x80234834: stfd     f31, 0x50(r1)
//   0x80234838: xscmpgtdp vs31, f1, f0
//   0x8023483c: stfd     f30, 0x40(r1)
//   0x80234840: xsmaddmsp f30, f1, f0
//   0x80234844: fmr      f0, f3
//   0x80234848: lfs      f3, -0x613c(r2)
//   0x8023484c: fmr      f30, f1
//   0x80234850: addi     r3, r1, 8
//   0x80234854: fmr      f31, f2
//   0x80234858: fmr      f1, f0
//   0x8023485c: fmr      f2, f4
//   0x80234860: bl       0x8019a3c0
//   0x80234864: lfs      f0, -0x6140(r2)
//   0x80234868: addi     r3, r1, 8
//   0x8023486c: stfs     f30, 0x14(r1)
//   0x80234870: li       r4, 0
//   0x80234874: stfs     f31, 0x24(r1)
//

// TODO: Full decompilation requires Ghidra
