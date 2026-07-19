// Function at 0x8003f680
// Size: 2192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x320 bytes
//
// Disassembly (first 20 instructions):
//   0x8003f680: stwu     r1, -0x320(r1)
//   0x8003f684: mflr     r0
//   0x8003f688: stw      r0, 0x324(r1)
//   0x8003f68c: stfd     f31, 0x310(r1)
//   0x8003f690: xvcmpeqdp vs31, vs1, vs0
//   0x8003f694: stfd     f30, 0x300(r1)
//   0x8003f698: xvmaddadp vs30, vs1, vs0
//   0x8003f69c: stfd     f29, 0x2f0(r1)
//   0x8003f6a0: xxsel    vs29, vs1, vs0, v11
//   0x8003f6a4: stfd     f28, 0x2e0(r1)
//   0x8003f6a8: xvtdivsp cr7, vs1, vs0
//   0x8003f6ac: stfd     f27, 0x2d0(r1)
//

// TODO: Full decompilation requires Ghidra
