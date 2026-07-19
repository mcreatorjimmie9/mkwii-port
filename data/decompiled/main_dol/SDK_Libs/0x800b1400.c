// Function at 0x800b1400
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b1400: stwu     r1, -0x10(r1)
//   0x800b1404: mflr     r0
//   0x800b1408: stw      r0, 0x14(r1)
//   0x800b140c: stw      r31, 0xc(r1)
//   0x800b1410: mr       r31, r3
//   0x800b1414: lbz      r0, 0x16c(r3)
//   0x800b1418: cmpwi    r0, 0
//   0x800b141c: beq      0x800b143c
//   0x800b1420: lbz      r0, 4(r3)
//   0x800b1424: cmpwi    r0, 0
//   0x800b1428: beq      0x800b143c
//   0x800b142c: addi     r3, r3, 0xd8
//   0x800b1430: bl       0x8019c9e0
//   0x800b1434: li       r0, 0
//   0x800b1438: stb      r0, 4(r31)
//   0x800b143c: lwz      r0, 0x14(r1)
//   0x800b1440: lwz      r31, 0xc(r1)
//   0x800b1444: mtlr     r0
//   0x800b1448: addi     r1, r1, 0x10
//   0x800b144c: blr      
//

// TODO: Full decompilation requires Ghidra
