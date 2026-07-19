// Function at 0x8006f4f0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006f4f0: stwu     r1, -0x10(r1)
//   0x8006f4f4: mflr     r0
//   0x8006f4f8: stw      r0, 0x14(r1)
//   0x8006f4fc: stw      r31, 0xc(r1)
//   0x8006f500: mr       r31, r3
//   0x8006f504: lwz      r0, 0x2888(r3)
//   0x8006f508: cmpwi    r0, 0
//   0x8006f50c: beq      0x8006f524
//   0x8006f510: mr       r3, r0
//   0x8006f514: lwz      r12, 0(r3)
//   0x8006f518: lwz      r12, 0x2c(r12)
//   0x8006f51c: mtctr    r12
//   0x8006f520: bctrl    
//   0x8006f524: lwz      r12, 0(r31)
//   0x8006f528: mr       r3, r31
//   0x8006f52c: li       r4, 8
//   0x8006f530: li       r5, 0
//   0x8006f534: lwz      r12, 0xc(r12)
//   0x8006f538: li       r6, 0
//   0x8006f53c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
