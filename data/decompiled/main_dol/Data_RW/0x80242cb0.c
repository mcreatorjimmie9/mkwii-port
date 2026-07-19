// Function at 0x80242cb0
// Size: 124 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242cb0: stwu     r1, -0x10(r1)
//   0x80242cb4: mflr     r0
//   0x80242cb8: stw      r0, 0x14(r1)
//   0x80242cbc: stw      r31, 0xc(r1)
//   0x80242cc0: mr       r31, r3
//   0x80242cc4: lfs      f1, 0(r3)
//   0x80242cc8: lfs      f0, 4(r3)
//   0x80242ccc: fmuls    f2, f1, f1
//   0x80242cd0: lfs      f3, 8(r3)
//   0x80242cd4: fmuls    f1, f0, f0
//   0x80242cd8: lfs      f0, -0x5edc(r2)
//   0x80242cdc: fmuls    f3, f3, f3
//   0x80242ce0: fadds    f1, f2, f1
//   0x80242ce4: fadds    f1, f3, f1
//

// TODO: Full decompilation requires Ghidra
