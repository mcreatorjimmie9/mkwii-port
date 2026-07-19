// Function at 0x8020c364
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c364: stwu     r1, -0x10(r1)
//   0x8020c368: mflr     r0
//   0x8020c36c: stw      r0, 0x14(r1)
//   0x8020c370: stw      r31, 0xc(r1)
//   0x8020c374: mr       r31, r4
//   0x8020c378: bl       0x80208f38
//   0x8020c37c: cmplwi   r3, 0x1a
//   0x8020c380: bge      0x8020c398
//   0x8020c384: mulli    r0, r3, 0x14
//   0x8020c388: lis      r3, -0x7fc8
//   0x8020c38c: addi     r3, r3, -0x1450
//   0x8020c390: add      r3, r3, r0
//   0x8020c394: b        0x8020c39c
//   0x8020c398: li       r3, 0
//   0x8020c39c: cmpwi    r3, 0
//   0x8020c3a0: beq      0x8020c3a8
//   0x8020c3a4: stw      r31, 8(r3)
//   0x8020c3a8: lwz      r0, 0x14(r1)
//   0x8020c3ac: lwz      r31, 0xc(r1)
//   0x8020c3b0: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
