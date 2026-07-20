// Function at 0x80095150
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80095150: stwu     r1, -0x10(r1)
//   0x80095154: mflr     r0
//   0x80095158: stw      r0, 0x14(r1)
//   0x8009515c: stw      r31, 0xc(r1)
//   0x80095160: mr       r31, r3
//   0x80095164: addi     r3, r3, 0x44
//   0x80095168: bl       0x8012b3dc
//   0x8009516c: addi     r0, r3, 0x87
//   0x80095170: addi     r3, r31, 0x12c
//   0x80095174: rlwinm   r31, r0, 0, 0, 0x1a
//   0x80095178: bl       0x8012c0dc
//   0x8009517c: addi     r0, r3, 0x87
//   0x80095180: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80095184: cmplw    r3, r31
//   0x80095188: bge      0x80095190
//   0x8009518c: mr       r3, r31
//   0x80095190: lwz      r0, 0x14(r1)
//   0x80095194: lwz      r31, 0xc(r1)
//   0x80095198: mtlr     r0
//   0x8009519c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
