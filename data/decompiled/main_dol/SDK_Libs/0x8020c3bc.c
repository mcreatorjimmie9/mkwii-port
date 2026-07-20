// Function at 0x8020c3bc
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c3bc: stwu     r1, -0x10(r1)
//   0x8020c3c0: mflr     r0
//   0x8020c3c4: stw      r0, 0x14(r1)
//   0x8020c3c8: bl       0x80208f38
//   0x8020c3cc: cmplwi   r3, 0x1a
//   0x8020c3d0: bge      0x8020c3e8
//   0x8020c3d4: mulli    r0, r3, 0x14
//   0x8020c3d8: lis      r3, -0x7fc8
//   0x8020c3dc: addi     r3, r3, -0x1450
//   0x8020c3e0: add      r3, r3, r0
//   0x8020c3e4: b        0x8020c3ec
//   0x8020c3e8: li       r3, 0
//   0x8020c3ec: cmpwi    r3, 0
//   0x8020c3f0: beq      0x8020c3fc
//   0x8020c3f4: lwz      r3, 0xc(r3)
//   0x8020c3f8: b        0x8020c400
//   0x8020c3fc: li       r3, 0
//   0x8020c400: lwz      r0, 0x14(r1)
//   0x8020c404: mtlr     r0
//   0x8020c408: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
