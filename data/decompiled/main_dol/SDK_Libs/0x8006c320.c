// Function at 0x8006c320
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8006c320: stwu     r1, -0x20(r1)
//   0x8006c324: mflr     r0
//   0x8006c328: lfs      f1, 8(r4)
//   0x8006c32c: lfs      f0, -0x7290(r2)
//   0x8006c330: addi     r4, r1, 8
//   0x8006c334: stw      r0, 0x24(r1)
//   0x8006c338: fmuls    f1, f0, f1
//   0x8006c33c: stw      r31, 0x1c(r1)
//   0x8006c340: mr       r31, r3
//   0x8006c344: addi     r3, r1, 0xc
//   0x8006c348: bl       0x80085140
//   0x8006c34c: lfs      f5, 8(r1)
//   0x8006c350: lfs      f2, 0(r31)
//   0x8006c354: lfs      f1, 0xc(r1)
//   0x8006c358: lfs      f0, 0x10(r31)
//   0x8006c35c: fmuls    f4, f5, f2
//   0x8006c360: fmuls    f3, f1, f2
//   0x8006c364: lfs      f9, 4(r31)
//   0x8006c368: fmuls    f1, f1, f0
//   0x8006c36c: lfs      f2, 0x14(r31)
//

// TODO: Full decompilation requires Ghidra
