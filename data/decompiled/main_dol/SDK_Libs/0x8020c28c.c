// Function at 0x8020c28c
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c28c: stwu     r1, -0x10(r1)
//   0x8020c290: mflr     r0
//   0x8020c294: stw      r0, 0x14(r1)
//   0x8020c298: bl       0x80208f38
//   0x8020c29c: cmplwi   r3, 0x1a
//   0x8020c2a0: bge      0x8020c2b8
//   0x8020c2a4: mulli    r0, r3, 0x14
//   0x8020c2a8: lis      r3, -0x7fc8
//   0x8020c2ac: addi     r3, r3, -0x1450
//   0x8020c2b0: add      r3, r3, r0
//   0x8020c2b4: b        0x8020c2bc
//   0x8020c2b8: li       r3, 0
//   0x8020c2bc: cmpwi    r3, 0
//   0x8020c2c0: beq      0x8020c2cc
//   0x8020c2c4: lwz      r3, 4(r3)
//   0x8020c2c8: b        0x8020c2d0
//   0x8020c2cc: li       r3, 0
//   0x8020c2d0: lwz      r0, 0x14(r1)
//   0x8020c2d4: mtlr     r0
//   0x8020c2d8: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
