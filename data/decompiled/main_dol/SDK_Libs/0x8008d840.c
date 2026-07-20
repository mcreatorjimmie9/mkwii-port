// Function at 0x8008d840
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008d840: stwu     r1, -0x10(r1)
//   0x8008d844: mflr     r0
//   0x8008d848: stw      r0, 0x14(r1)
//   0x8008d84c: lbz      r0, 1(r4)
//   0x8008d850: stw      r31, 0xc(r1)
//   0x8008d854: mr       r31, r5
//   0x8008d858: cmpwi    r0, 1
//   0x8008d85c: li       r5, 0
//   0x8008d860: beq      0x8008d878
//   0x8008d864: cmpwi    r0, 2
//   0x8008d868: beq      0x8008d880
//   0x8008d86c: cmpwi    r0, 3
//   0x8008d870: beq      0x8008d8f4
//   0x8008d874: b        0x8008d948
//   0x8008d878: mr       r5, r4
//   0x8008d87c: b        0x8008d948
//   0x8008d880: lwz      r5, 4(r3)
//   0x8008d884: lbz      r3, 0(r4)
//   0x8008d888: lwz      r4, 4(r4)
//   0x8008d88c: addi     r5, r5, 8
//

// TODO: Full decompilation requires Ghidra
