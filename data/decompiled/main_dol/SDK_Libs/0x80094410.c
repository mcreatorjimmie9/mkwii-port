// Function at 0x80094410
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80094410: stwu     r1, -0x10(r1)
//   0x80094414: mflr     r0
//   0x80094418: stw      r0, 0x14(r1)
//   0x8009441c: stw      r31, 0xc(r1)
//   0x80094420: mr       r31, r3
//   0x80094424: addi     r3, r3, 0x48
//   0x80094428: bl       0x80128018
//   0x8009442c: addi     r0, r3, 0x87
//   0x80094430: addi     r3, r31, 0x190
//   0x80094434: rlwinm   r31, r0, 0, 0, 0x1a
//   0x80094438: bl       0x80129000
//   0x8009443c: addi     r0, r3, 0x87
//   0x80094440: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80094444: cmplw    r3, r31
//   0x80094448: bge      0x80094450
//   0x8009444c: mr       r3, r31
//   0x80094450: lwz      r0, 0x14(r1)
//   0x80094454: lwz      r31, 0xc(r1)
//   0x80094458: mtlr     r0
//   0x8009445c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
