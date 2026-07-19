// Function at 0x8020c234
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c234: stwu     r1, -0x10(r1)
//   0x8020c238: mflr     r0
//   0x8020c23c: stw      r0, 0x14(r1)
//   0x8020c240: stw      r31, 0xc(r1)
//   0x8020c244: mr       r31, r4
//   0x8020c248: bl       0x80208f38
//   0x8020c24c: cmplwi   r3, 0x1a
//   0x8020c250: bge      0x8020c268
//   0x8020c254: mulli    r0, r3, 0x14
//   0x8020c258: lis      r3, -0x7fc8
//   0x8020c25c: addi     r3, r3, -0x1450
//   0x8020c260: add      r3, r3, r0
//   0x8020c264: b        0x8020c26c
//   0x8020c268: li       r3, 0
//   0x8020c26c: cmpwi    r3, 0
//   0x8020c270: beq      0x8020c278
//   0x8020c274: stw      r31, 0(r3)
//   0x8020c278: lwz      r0, 0x14(r1)
//   0x8020c27c: lwz      r31, 0xc(r1)
//   0x8020c280: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
