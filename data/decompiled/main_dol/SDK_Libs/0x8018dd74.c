// Function at 0x8018dd74
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8018dd74: stwu     r1, -0x20(r1)
//   0x8018dd78: mflr     r0
//   0x8018dd7c: stw      r0, 0x24(r1)
//   0x8018dd80: stw      r31, 0x1c(r1)
//   0x8018dd84: stw      r30, 0x18(r1)
//   0x8018dd88: mr       r30, r3
//   0x8018dd8c: bl       0x8018b00c
//   0x8018dd90: cmpwi    r3, 0
//   0x8018dd94: beq      0x8018ddb0
//   0x8018dd98: lwz      r12, 0(r3)
//   0x8018dd9c: lwz      r12, 0x34(r12)
//   0x8018dda0: mtctr    r12
//   0x8018dda4: bctrl    
//   0x8018dda8: mr       r31, r3
//   0x8018ddac: b        0x8018ddb4
//   0x8018ddb0: li       r31, 0
//   0x8018ddb4: mr       r3, r30
//   0x8018ddb8: bl       0x8018bf08
//   0x8018ddbc: xoris    r3, r31, 0x8000
//   0x8018ddc0: lis      r0, 0x4330
//

// TODO: Full decompilation requires Ghidra
