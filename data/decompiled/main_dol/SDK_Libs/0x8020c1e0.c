// Function at 0x8020c1e0
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c1e0: stwu     r1, -0x10(r1)
//   0x8020c1e4: mflr     r0
//   0x8020c1e8: stw      r0, 0x14(r1)
//   0x8020c1ec: bl       0x80208f38
//   0x8020c1f0: cmplwi   r3, 0x1a
//   0x8020c1f4: bge      0x8020c20c
//   0x8020c1f8: mulli    r0, r3, 0x14
//   0x8020c1fc: lis      r3, -0x7fc8
//   0x8020c200: addi     r3, r3, -0x1450
//   0x8020c204: add      r3, r3, r0
//   0x8020c208: b        0x8020c210
//   0x8020c20c: li       r3, 0
//   0x8020c210: cmpwi    r3, 0
//   0x8020c214: beq      0x8020c220
//   0x8020c218: lwz      r3, 0(r3)
//   0x8020c21c: b        0x8020c224
//   0x8020c220: li       r3, 0
//   0x8020c224: lwz      r0, 0x14(r1)
//   0x8020c228: mtlr     r0
//   0x8020c22c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
