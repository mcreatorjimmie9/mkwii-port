// Function at 0x80089360
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80089360: stwu     r1, -0x20(r1)
//   0x80089364: mflr     r0
//   0x80089368: cmpwi    r5, 0
//   0x8008936c: stw      r0, 0x24(r1)
//   0x80089370: bne      0x8008937c
//   0x80089374: bl       0x80089430
//   0x80089378: b        0x80089418
//   0x8008937c: slwi     r8, r4, 4
//   0x80089380: add      r6, r3, r8
//   0x80089384: lwz      r7, 0x5c(r6)
//   0x80089388: lwz      r0, 0x60(r6)
//   0x8008938c: cmpw     r0, r7
//   0x80089390: blt      0x8008939c
//   0x80089394: lfs      f0, 0x58(r6)
//   0x80089398: b        0x800893e4
//   0x8008939c: lis      r4, 0x4330
//   0x800893a0: xoris    r0, r0, 0x8000
//   0x800893a4: stw      r0, 0xc(r1)
//   0x800893a8: xoris    r0, r7, 0x8000
//   0x800893ac: lfd      f4, -0x7090(r2)
//

// TODO: Full decompilation requires Ghidra
