// Function at 0x8006b630
// Size: 352 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8006b630: stwu     r1, -0x20(r1)
//   0x8006b634: mflr     r0
//   0x8006b638: lfs      f1, 8(r4)
//   0x8006b63c: lfs      f0, -0x72a8(r2)
//   0x8006b640: addi     r4, r1, 8
//   0x8006b644: stw      r0, 0x24(r1)
//   0x8006b648: fmuls    f1, f0, f1
//   0x8006b64c: stw      r31, 0x1c(r1)
//   0x8006b650: mr       r31, r3
//   0x8006b654: addi     r3, r1, 0xc
//   0x8006b658: bl       0x80085140
//   0x8006b65c: lfs      f10, 0xc(r1)
//   0x8006b660: lfs      f0, 0x10(r31)
//   0x8006b664: fneg     f1, f10
//   0x8006b668: lfs      f4, 0(r31)
//   0x8006b66c: lfs      f5, 8(r1)
//   0x8006b670: fmuls    f2, f10, f0
//   0x8006b674: lfs      f12, -0x72a4(r2)
//   0x8006b678: fmuls    f3, f5, f4
//   0x8006b67c: fmuls    f1, f1, f4
//

// TODO: Full decompilation requires Ghidra
