// Function at 0x80089910
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80089910: stwu     r1, -0x20(r1)
//   0x80089914: mflr     r0
//   0x80089918: stw      r0, 0x24(r1)
//   0x8008991c: stw      r31, 0x1c(r1)
//   0x80089920: mr       r31, r3
//   0x80089924: lwz      r0, 0x4c(r3)
//   0x80089928: cmpwi    r0, 0
//   0x8008992c: bne      0x800899c4
//   0x80089930: lwz      r5, 0x44(r3)
//   0x80089934: lwz      r0, 0x48(r3)
//   0x80089938: cmpw     r0, r5
//   0x8008993c: blt      0x80089948
//   0x80089940: lfs      f1, 0x40(r3)
//   0x80089944: b        0x80089990
//   0x80089948: lis      r4, 0x4330
//   0x8008994c: xoris    r0, r0, 0x8000
//   0x80089950: stw      r0, 0xc(r1)
//   0x80089954: xoris    r0, r5, 0x8000
//   0x80089958: lfd      f4, -0x7090(r2)
//   0x8008995c: stw      r4, 8(r1)
//

// TODO: Full decompilation requires Ghidra
