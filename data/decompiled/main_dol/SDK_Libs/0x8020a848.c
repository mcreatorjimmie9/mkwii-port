// Function at 0x8020a848
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020a848: stwu     r1, -0x10(r1)
//   0x8020a84c: mflr     r0
//   0x8020a850: stw      r0, 0x14(r1)
//   0x8020a854: stw      r31, 0xc(r1)
//   0x8020a858: mr       r31, r3
//   0x8020a85c: bl       0x802062f0
//   0x8020a860: cmpwi    r3, 0
//   0x8020a864: beq      0x8020a8c8
//   0x8020a868: lwz      r0, -0x5ea0(r13)
//   0x8020a86c: cmpwi    r0, 0
//   0x8020a870: beq      0x8020a884
//   0x8020a874: lwz      r6, -0x5e90(r13)
//   0x8020a878: cmpwi    r6, 0
//   0x8020a87c: beq      0x8020a884
//   0x8020a880: b        0x8020a888
//   0x8020a884: li       r6, 0
//   0x8020a888: mulli    r0, r0, 0x140
//   0x8020a88c: add      r5, r6, r0
//   0x8020a890: b        0x8020a8c0
//   0x8020a894: lwz      r0, 0(r6)
//

// TODO: Full decompilation requires Ghidra
