// Function at 0x80092d70
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80092d70: stwu     r1, -0x20(r1)
//   0x80092d74: mflr     r0
//   0x80092d78: stw      r0, 0x24(r1)
//   0x80092d7c: stw      r31, 0x1c(r1)
//   0x80092d80: stw      r30, 0x18(r1)
//   0x80092d84: mr       r30, r3
//   0x80092d88: addi     r3, r3, 0x30
//   0x80092d8c: bl       0x8012ce14
//   0x80092d90: addi     r0, r3, 0x87
//   0x80092d94: addi     r3, r30, 0xd0
//   0x80092d98: rlwinm   r31, r0, 0, 0, 0x1a
//   0x80092d9c: bl       0x8012d918
//   0x80092da0: addi     r0, r3, 0x87
//   0x80092da4: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80092da8: cmplw    r3, r31
//   0x80092dac: bge      0x80092db4
//   0x80092db0: mr       r3, r31
//   0x80092db4: lwz      r4, 0x14(r30)
//   0x80092db8: cmpwi    r4, 0
//   0x80092dbc: bne      0x80092dc8
//

// TODO: Full decompilation requires Ghidra
