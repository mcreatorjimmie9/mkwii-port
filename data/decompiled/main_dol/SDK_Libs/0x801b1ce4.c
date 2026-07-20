// Function at 0x801b1ce4
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1ce4: stwu     r1, -0x10(r1)
//   0x801b1ce8: mflr     r0
//   0x801b1cec: li       r4, 0xe
//   0x801b1cf0: stw      r0, 0x14(r1)
//   0x801b1cf4: addi     r3, r1, 8
//   0x801b1cf8: bl       0x801b123c
//   0x801b1cfc: cmpwi    r3, 0
//   0x801b1d00: bne      0x801b1d10
//   0x801b1d04: li       r0, 0
//   0x801b1d08: stb      r0, 8(r1)
//   0x801b1d0c: b        0x801b1d24
//   0x801b1d10: lbz      r0, 8(r1)
//   0x801b1d14: cmplwi   r0, 1
//   0x801b1d18: beq      0x801b1d24
//   0x801b1d1c: li       r0, 0
//   0x801b1d20: stb      r0, 8(r1)
//   0x801b1d24: lwz      r0, 0x14(r1)
//   0x801b1d28: lbz      r3, 8(r1)
//   0x801b1d2c: mtlr     r0
//   0x801b1d30: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
