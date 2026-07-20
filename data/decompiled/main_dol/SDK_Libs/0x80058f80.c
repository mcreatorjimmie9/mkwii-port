// Function at 0x80058f80
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80058f80: stwu     r1, -0x20(r1)
//   0x80058f84: mflr     r0
//   0x80058f88: stw      r0, 0x24(r1)
//   0x80058f8c: stw      r31, 0x1c(r1)
//   0x80058f90: li       r31, 0
//   0x80058f94: stw      r30, 0x18(r1)
//   0x80058f98: li       r30, 0
//   0x80058f9c: stw      r29, 0x14(r1)
//   0x80058fa0: mr       r29, r3
//   0x80058fa4: b        0x80058fd0
//   0x80058fa8: lwz      r3, 0x1c(r29)
//   0x80058fac: lwzx     r3, r3, r31
//   0x80058fb0: cmpwi    r3, 0
//   0x80058fb4: beq      0x80058fc8
//   0x80058fb8: lwz      r12, 0(r3)
//   0x80058fbc: lwz      r12, 0x34(r12)
//   0x80058fc0: mtctr    r12
//   0x80058fc4: bctrl    
//   0x80058fc8: addi     r31, r31, 4
//   0x80058fcc: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
