// Function at 0x801b1ec8
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1ec8: stwu     r1, -0x10(r1)
//   0x801b1ecc: mflr     r0
//   0x801b1ed0: li       r4, 0x20
//   0x801b1ed4: stw      r0, 0x14(r1)
//   0x801b1ed8: addi     r3, r1, 8
//   0x801b1edc: bl       0x801b123c
//   0x801b1ee0: cmpwi    r3, 0
//   0x801b1ee4: bne      0x801b1ef4
//   0x801b1ee8: li       r0, 1
//   0x801b1eec: stb      r0, 8(r1)
//   0x801b1ef0: b        0x801b1f08
//   0x801b1ef4: lbz      r0, 8(r1)
//   0x801b1ef8: cmplwi   r0, 1
//   0x801b1efc: beq      0x801b1f08
//   0x801b1f00: li       r0, 0
//   0x801b1f04: stb      r0, 8(r1)
//   0x801b1f08: lwz      r0, 0x14(r1)
//   0x801b1f0c: lbz      r3, 8(r1)
//   0x801b1f10: mtlr     r0
//   0x801b1f14: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
