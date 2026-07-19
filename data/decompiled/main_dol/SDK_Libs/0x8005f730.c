// Function at 0x8005f730
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005f730: stwu     r1, -0x10(r1)
//   0x8005f734: mflr     r0
//   0x8005f738: lfs      f0, -0x73a0(r2)
//   0x8005f73c: stw      r0, 0x14(r1)
//   0x8005f740: stw      r31, 0xc(r1)
//   0x8005f744: mr       r31, r3
//   0x8005f748: lfs      f1, 0x10(r3)
//   0x8005f74c: fcmpu    cr0, f0, f1
//   0x8005f750: beq      0x8005f794
//   0x8005f754: lfs      f2, 0x10(r3)
//   0x8005f758: lfs      f1, -0x7ee0(r13)
//   0x8005f75c: lfs      f0, 0xc(r3)
//   0x8005f760: fmuls    f3, f2, f1
//   0x8005f764: lwz      r12, 0x1c(r3)
//   0x8005f768: lfs      f1, 0x14(r3)
//   0x8005f76c: lfs      f2, 0x18(r3)
//   0x8005f770: fadds    f3, f0, f3
//   0x8005f774: mtctr    r12
//   0x8005f778: bctrl    
//   0x8005f77c: lwz      r0, 0x24(r31)
//

// TODO: Full decompilation requires Ghidra
