// Function at 0x80239834
// Size: 388 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80239834: stwu     r1, -0x50(r1)
//   0x80239838: mflr     r0
//   0x8023983c: stw      r0, 0x54(r1)
//   0x80239840: lbz      r0, -0x5d10(r13)
//   0x80239844: cmpwi    r0, 0
//   0x80239848: beq      0x80239854
//   0x8023984c: lfs      f4, -0x6c60(r13)
//   0x80239850: b        0x80239858
//   0x80239854: lfs      f4, -0x5fe8(r2)
//   0x80239858: lfs      f1, 0x1c(r3)
//   0x8023985c: cmpwi    r0, 0
//   0x80239860: lfs      f0, 0x18(r3)
//   0x80239864: lfs      f7, -0x5fe8(r2)
//   0x80239868: fsubs    f3, f1, f0
//   0x8023986c: lfs      f2, -0x5fd4(r2)
//   0x80239870: lfs      f1, 8(r3)
//   0x80239874: lfs      f0, -0x5fe4(r2)
//   0x80239878: fmuls    f3, f3, f4
//   0x8023987c: stfs     f0, 0xc(r1)
//   0x80239880: fmuls    f0, f2, f1
//

// TODO: Full decompilation requires Ghidra
