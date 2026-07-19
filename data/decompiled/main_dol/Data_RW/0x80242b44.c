// Function at 0x80242b44
// Size: 120 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242b44: stwu     r1, -0x10(r1)
//   0x80242b48: mflr     r0
//   0x80242b4c: lfs      f3, -0x5ee0(r2)
//   0x80242b50: stw      r0, 0x14(r1)
//   0x80242b54: stw      r31, 0xc(r1)
//   0x80242b58: mr       r31, r3
//   0x80242b5c: lfs      f0, 0(r3)
//   0x80242b60: lfs      f1, 4(r3)
//   0x80242b64: fmuls    f2, f0, f0
//   0x80242b68: lfs      f0, -0x5edc(r2)
//   0x80242b6c: fmuls    f1, f1, f1
//   0x80242b70: fadds    f1, f2, f1
//

// TODO: Full decompilation requires Ghidra
