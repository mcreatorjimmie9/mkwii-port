// Function at 0x80111f2c
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80111f2c: stwu     r1, -0x10(r1)
//   0x80111f30: mflr     r0
//   0x80111f34: stw      r0, 0x14(r1)
//   0x80111f38: stw      r31, 0xc(r1)
//   0x80111f3c: mr       r31, r3
//   0x80111f40: lwz      r0, 0x174(r3)
//   0x80111f44: cmpwi    r0, 0
//   0x80111f48: beq      0x80111f78
//   0x80111f4c: lwz      r3, 0x164(r3)
//   0x80111f50: bl       0x800ef408
//   0x80111f54: lwz      r12, 0x174(r31)
//   0x80111f58: mr       r7, r3
//   0x80111f5c: lwz      r3, 4(r31)
//   0x80111f60: lwz      r4, 0x16c(r31)
//   0x80111f64: lwz      r5, 0x170(r31)
//   0x80111f68: lwz      r6, 0x168(r31)
//   0x80111f6c: lwz      r8, 0x48(r31)
//   0x80111f70: mtctr    r12
//   0x80111f74: bctrl    
//   0x80111f78: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
