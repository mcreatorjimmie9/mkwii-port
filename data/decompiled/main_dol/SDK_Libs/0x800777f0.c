// Function at 0x800777f0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800777f0: stwu     r1, -0x10(r1)
//   0x800777f4: mflr     r0
//   0x800777f8: fmr      f4, f1
//   0x800777fc: lfs      f0, -0x7238(r2)
//   0x80077800: lfs      f1, -0x7240(r2)
//   0x80077804: stw      r0, 0x14(r1)
//   0x80077808: fmuls    f4, f4, f0
//   0x8007780c: lfs      f3, -0x723c(r2)
//   0x80077810: stw      r31, 0xc(r1)
//   0x80077814: mr       r31, r3
//   0x80077818: fmr      f2, f1
//   0x8007781c: addi     r3, r3, 4
//   0x80077820: fmr      f5, f1
//   0x80077824: fsubs    f6, f3, f4
//   0x80077828: bl       0x8016fe64
//   0x8007782c: lwz      r0, 0(r31)
//   0x80077830: rlwinm   r0, r0, 0, 0, 0x1e
//   0x80077834: ori      r0, r0, 2
//   0x80077838: stw      r0, 0(r31)
//   0x8007783c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
