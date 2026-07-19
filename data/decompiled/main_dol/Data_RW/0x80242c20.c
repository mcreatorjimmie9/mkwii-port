// Function at 0x80242c20
// Size: 144 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242c20: stwu     r1, -0x10(r1)
//   0x80242c24: mflr     r0
//   0x80242c28: lfs      f4, -0x5ee0(r2)
//   0x80242c2c: stw      r0, 0x14(r1)
//   0x80242c30: stw      r31, 0xc(r1)
//   0x80242c34: mr       r31, r3
//   0x80242c38: lfs      f1, 0(r3)
//   0x80242c3c: lfs      f0, 4(r3)
//   0x80242c40: fmuls    f2, f1, f1
//   0x80242c44: lfs      f3, 8(r3)
//   0x80242c48: fmuls    f1, f0, f0
//   0x80242c4c: lfs      f0, -0x5edc(r2)
//   0x80242c50: fmuls    f3, f3, f3
//   0x80242c54: fadds    f1, f2, f1
//   0x80242c58: fadds    f1, f3, f1
//

// TODO: Full decompilation requires Ghidra
