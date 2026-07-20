// Function at 0x80191f2c
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80191f2c: stwu     r1, -0x10(r1)
//   0x80191f30: mflr     r0
//   0x80191f34: stw      r0, 0x14(r1)
//   0x80191f38: stw      r31, 0xc(r1)
//   0x80191f3c: mr       r31, r3
//   0x80191f40: bl       0x80191db4
//   0x80191f44: lfs      f2, 0x24(r31)
//   0x80191f48: lis      r3, -0x7fdb
//   0x80191f4c: lfs      f0, 0x2930(r3)
//   0x80191f50: fmuls    f1, f2, f1
//   0x80191f54: fmuls    f1, f0, f1
//   0x80191f58: bl       0x80020918
//   0x80191f5c: lwz      r5, 4(r31)
//   0x80191f60: li       r6, 1
//   0x80191f64: srwi     r4, r3, 0x10
//   0x80191f68: li       r0, 0
//   0x80191f6c: sth      r6, 0x30(r5)
//   0x80191f70: lwz      r5, 4(r31)
//   0x80191f74: sth      r4, 0xce(r5)
//   0x80191f78: sth      r3, 0xd0(r5)
//

// TODO: Full decompilation requires Ghidra
