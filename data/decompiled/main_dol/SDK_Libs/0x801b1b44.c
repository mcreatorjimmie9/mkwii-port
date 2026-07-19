// Function at 0x801b1b44
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1b44: stwu     r1, -0x10(r1)
//   0x801b1b48: mflr     r0
//   0x801b1b4c: li       r4, 1
//   0x801b1b50: stw      r0, 0x14(r1)
//   0x801b1b54: addi     r3, r1, 8
//   0x801b1b58: bl       0x801b123c
//   0x801b1b5c: cmpwi    r3, 0
//   0x801b1b60: bne      0x801b1b70
//   0x801b1b64: li       r0, 0
//   0x801b1b68: stb      r0, 8(r1)
//   0x801b1b6c: b        0x801b1b84
//   0x801b1b70: lbz      r0, 8(r1)
//   0x801b1b74: cmplwi   r0, 1
//   0x801b1b78: beq      0x801b1b84
//   0x801b1b7c: li       r0, 0
//   0x801b1b80: stb      r0, 8(r1)
//   0x801b1b84: lwz      r0, 0x14(r1)
//   0x801b1b88: lbz      r3, 8(r1)
//   0x801b1b8c: mtlr     r0
//   0x801b1b90: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
