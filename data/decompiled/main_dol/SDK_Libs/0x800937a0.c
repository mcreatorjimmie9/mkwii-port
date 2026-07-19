// Function at 0x800937a0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800937a0: stwu     r1, -0x10(r1)
//   0x800937a4: mflr     r0
//   0x800937a8: stw      r0, 0x14(r1)
//   0x800937ac: stw      r31, 0xc(r1)
//   0x800937b0: mr       r31, r3
//   0x800937b4: addi     r3, r3, 0x30
//   0x800937b8: bl       0x8012a0b4
//   0x800937bc: addi     r0, r3, 0x87
//   0x800937c0: addi     r3, r31, 0x88
//   0x800937c4: rlwinm   r31, r0, 0, 0, 0x1a
//   0x800937c8: bl       0x8012ab3c
//   0x800937cc: addi     r0, r3, 0x87
//   0x800937d0: rlwinm   r3, r0, 0, 0, 0x1a
//   0x800937d4: cmplw    r3, r31
//   0x800937d8: bge      0x800937e0
//   0x800937dc: mr       r3, r31
//   0x800937e0: lwz      r0, 0x14(r1)
//   0x800937e4: lwz      r31, 0xc(r1)
//   0x800937e8: mtlr     r0
//   0x800937ec: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
