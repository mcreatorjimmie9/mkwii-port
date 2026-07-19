// Function at 0x8020c468
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c468: stwu     r1, -0x10(r1)
//   0x8020c46c: mflr     r0
//   0x8020c470: stw      r0, 0x14(r1)
//   0x8020c474: bl       0x80208f38
//   0x8020c478: cmplwi   r3, 0x1a
//   0x8020c47c: bge      0x8020c494
//   0x8020c480: mulli    r0, r3, 0x14
//   0x8020c484: lis      r3, -0x7fc8
//   0x8020c488: addi     r3, r3, -0x1450
//   0x8020c48c: add      r3, r3, r0
//   0x8020c490: b        0x8020c498
//   0x8020c494: li       r3, 0
//   0x8020c498: cmpwi    r3, 0
//   0x8020c49c: beq      0x8020c4a8
//   0x8020c4a0: lwz      r3, 0x10(r3)
//   0x8020c4a4: b        0x8020c4ac
//   0x8020c4a8: li       r3, 0
//   0x8020c4ac: lwz      r0, 0x14(r1)
//   0x8020c4b0: mtlr     r0
//   0x8020c4b4: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
