// Function at 0x80242bbc
// Size: 100 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242bbc: stwu     r1, -0x10(r1)
//   0x80242bc0: mflr     r0
//   0x80242bc4: stw      r0, 0x14(r1)
//   0x80242bc8: stw      r31, 0xc(r1)
//   0x80242bcc: mr       r31, r3
//   0x80242bd0: lfs      f0, 0(r3)
//   0x80242bd4: lfs      f1, 4(r3)
//   0x80242bd8: fmuls    f2, f0, f0
//   0x80242bdc: lfs      f0, -0x5edc(r2)
//   0x80242be0: fmuls    f1, f1, f1
//   0x80242be4: fadds    f1, f2, f1
//

// TODO: Full decompilation requires Ghidra
