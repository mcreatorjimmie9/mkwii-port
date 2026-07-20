// Function at 0x8020c4bc
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c4bc: stwu     r1, -0x10(r1)
//   0x8020c4c0: mflr     r0
//   0x8020c4c4: stw      r0, 0x14(r1)
//   0x8020c4c8: stw      r31, 0xc(r1)
//   0x8020c4cc: mr       r31, r4
//   0x8020c4d0: bl       0x80208f38
//   0x8020c4d4: cmplwi   r3, 0x1a
//   0x8020c4d8: bge      0x8020c4f0
//   0x8020c4dc: mulli    r0, r3, 0x14
//   0x8020c4e0: lis      r3, -0x7fc8
//   0x8020c4e4: addi     r3, r3, -0x1450
//   0x8020c4e8: add      r3, r3, r0
//   0x8020c4ec: b        0x8020c4f4
//   0x8020c4f0: li       r3, 0
//   0x8020c4f4: cmpwi    r3, 0
//   0x8020c4f8: beq      0x8020c500
//   0x8020c4fc: stw      r31, 0x10(r3)
//   0x8020c500: lwz      r0, 0x14(r1)
//   0x8020c504: lwz      r31, 0xc(r1)
//   0x8020c508: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
