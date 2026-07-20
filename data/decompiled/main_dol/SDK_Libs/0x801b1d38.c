// Function at 0x801b1d38
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1d38: stwu     r1, -0x10(r1)
//   0x801b1d3c: mflr     r0
//   0x801b1d40: li       r4, 0xf
//   0x801b1d44: stw      r0, 0x14(r1)
//   0x801b1d48: addi     r3, r1, 8
//   0x801b1d4c: bl       0x801b123c
//   0x801b1d50: cmpwi    r3, 0
//   0x801b1d54: bne      0x801b1d64
//   0x801b1d58: li       r0, 1
//   0x801b1d5c: stb      r0, 8(r1)
//   0x801b1d60: b        0x801b1d78
//   0x801b1d64: lbz      r0, 8(r1)
//   0x801b1d68: cmplwi   r0, 1
//   0x801b1d6c: beq      0x801b1d78
//   0x801b1d70: li       r0, 0
//   0x801b1d74: stb      r0, 8(r1)
//   0x801b1d78: lwz      r0, 0x14(r1)
//   0x801b1d7c: lbz      r3, 8(r1)
//   0x801b1d80: mtlr     r0
//   0x801b1d84: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
