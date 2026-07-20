// Function at 0x80092cf0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80092cf0: stwu     r1, -0x10(r1)
//   0x80092cf4: mflr     r0
//   0x80092cf8: stw      r0, 0x14(r1)
//   0x80092cfc: stw      r31, 0xc(r1)
//   0x80092d00: mr       r31, r3
//   0x80092d04: addi     r3, r3, 0x30
//   0x80092d08: bl       0x8012ce14
//   0x80092d0c: addi     r0, r3, 0x87
//   0x80092d10: addi     r3, r31, 0xd0
//   0x80092d14: rlwinm   r31, r0, 0, 0, 0x1a
//   0x80092d18: bl       0x8012d918
//   0x80092d1c: addi     r0, r3, 0x87
//   0x80092d20: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80092d24: cmplw    r3, r31
//   0x80092d28: bge      0x80092d30
//   0x80092d2c: mr       r3, r31
//   0x80092d30: lwz      r0, 0x14(r1)
//   0x80092d34: lwz      r31, 0xc(r1)
//   0x80092d38: mtlr     r0
//   0x80092d3c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
