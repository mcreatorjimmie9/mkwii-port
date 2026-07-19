// Function at 0x801b1d8c
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1d8c: stwu     r1, -0x10(r1)
//   0x801b1d90: mflr     r0
//   0x801b1d94: li       r4, 0x11
//   0x801b1d98: stw      r0, 0x14(r1)
//   0x801b1d9c: addi     r3, r1, 8
//   0x801b1da0: bl       0x801b123c
//   0x801b1da4: cmpwi    r3, 0
//   0x801b1da8: bne      0x801b1db8
//   0x801b1dac: li       r0, 1
//   0x801b1db0: stb      r0, 8(r1)
//   0x801b1db4: b        0x801b1ddc
//   0x801b1db8: lbz      r0, 8(r1)
//   0x801b1dbc: cmpwi    r0, 0
//   0x801b1dc0: beq      0x801b1ddc
//   0x801b1dc4: cmplwi   r0, 1
//   0x801b1dc8: beq      0x801b1ddc
//   0x801b1dcc: cmplwi   r0, 2
//   0x801b1dd0: beq      0x801b1ddc
//   0x801b1dd4: li       r0, 1
//   0x801b1dd8: stb      r0, 8(r1)
//

// TODO: Full decompilation requires Ghidra
