// Function at 0x802399b8
// Size: 212 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x802399b8: stwu     r1, -0x20(r1)
//   0x802399bc: mflr     r0
//   0x802399c0: stw      r0, 0x24(r1)
//   0x802399c4: stfd     f31, 0x10(r1)
//   0x802399c8: xscmpeqdp vs31, f1, f0
//   0x802399cc: lfs      f2, -0x5fe0(r2)
//   0x802399d0: lfs      f0, -0x5fcc(r2)
//   0x802399d4: fmuls    f2, f2, f1
//   0x802399d8: stw      r31, 0xc(r1)
//   0x802399dc: mr       r31, r3
//   0x802399e0: stfs     f1, 0x10(r3)
//   0x802399e4: fmuls    f31, f2, f0
//   0x802399e8: fmr      f1, f31
//   0x802399ec: bl       0x8022f4dc
//   0x802399f0: stfs     f1, 0x14(r31)
//   0x802399f4: fmr      f1, f31
//   0x802399f8: bl       0x8022f4e8
//   0x802399fc: stfs     f1, 0x18(r31)
//   0x80239a00: fmr      f1, f31
//   0x80239a04: bl       0x8022f4f4
//

// TODO: Full decompilation requires Ghidra
