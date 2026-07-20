// Function at 0x801562a0
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801562a0: stwu     r1, -0x10(r1)
//   0x801562a4: mflr     r0
//   0x801562a8: stw      r0, 0x14(r1)
//   0x801562ac: stb      r5, 8(r1)
//   0x801562b0: lbz      r0, 1(r4)
//   0x801562b4: cmpwi    r0, 0
//   0x801562b8: beq      0x801562e4
//   0x801562bc: lbz      r0, 0x68(r4)
//   0x801562c0: cmplwi   r0, 2
//   0x801562c4: beq      0x801562d4
//   0x801562c8: cmplwi   r0, 3
//   0x801562cc: beq      0x801562d4
//   0x801562d0: b        0x801562e4
//   0x801562d4: mr       r3, r4
//   0x801562d8: addi     r5, r1, 8
//   0x801562dc: li       r4, 0xf
//   0x801562e0: bl       0x80153084
//   0x801562e4: lwz      r0, 0x14(r1)
//   0x801562e8: mtlr     r0
//   0x801562ec: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
