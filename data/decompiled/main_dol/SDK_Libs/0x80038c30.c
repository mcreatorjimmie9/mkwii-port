// Function at 0x80038c30
// Size: 2144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x220 bytes
//
// Disassembly (first 20 instructions):
//   0x80038c30: stwu     r1, -0x220(r1)
//   0x80038c34: mflr     r0
//   0x80038c38: stw      r0, 0x224(r1)
//   0x80038c3c: stfd     f31, 0x210(r1)
//   0x80038c40: xvcmpeqsp vs31, vs1, vs0
//   0x80038c44: stfd     f30, 0x200(r1)
//   0x80038c48: xvmaddasp vs30, vs1, vs0
//   0x80038c4c: stfd     f29, 0x1f0(r1)
//   0x80038c50: xxsel    vs29, vs1, vs0, v7
//   0x80038c54: stfd     f28, 0x1e0(r1)
//   0x80038c58: xstdivdp cr7, f1, f0
//   0x80038c5c: stfd     f27, 0x1d0(r1)
//

// TODO: Full decompilation requires Ghidra
