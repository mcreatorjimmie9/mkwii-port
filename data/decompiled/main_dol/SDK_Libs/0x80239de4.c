// Function at 0x80239de4
// Size: 360 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80239de4: stwu     r1, -0x10(r1)
//   0x80239de8: mflr     r0
//   0x80239dec: stw      r0, 0x14(r1)
//   0x80239df0: stw      r31, 0xc(r1)
//   0x80239df4: mr       r31, r3
//   0x80239df8: lfs      f1, 0(r3)
//   0x80239dfc: lfs      f0, 4(r3)
//   0x80239e00: fmuls    f3, f1, f1
//   0x80239e04: lfs      f4, 8(r3)
//   0x80239e08: fmuls    f2, f0, f0
//   0x80239e0c: lfs      f1, 0xc(r3)
//   0x80239e10: fmuls    f4, f4, f4
//   0x80239e14: lfs      f0, -0x5fbc(r2)
//   0x80239e18: fadds    f2, f3, f2
//   0x80239e1c: fmuls    f1, f1, f1
//   0x80239e20: fadds    f2, f4, f2
//   0x80239e24: fadds    f1, f1, f2
//

// TODO: Full decompilation requires Ghidra
