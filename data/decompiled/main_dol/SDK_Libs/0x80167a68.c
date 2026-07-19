// Function at 0x80167a68
// Size: 252 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80167a68: stwu     r1, -0x20(r1)
//   0x80167a6c: mflr     r0
//   0x80167a70: stw      r0, 0x24(r1)
//   0x80167a74: stw      r31, 0x1c(r1)
//   0x80167a78: lwz      r0, -0x64b8(r13)
//   0x80167a7c: cmpwi    r0, 0
//   0x80167a80: beq      0x80167a8c
//   0x80167a84: li       r3, 1
//   0x80167a88: b        0x80167b50
//   0x80167a8c: bl       0x8019f29c
//   0x80167a90: rlwinm.  r0, r3, 0, 3, 3
//   0x80167a94: bne      0x80167aa8
//   0x80167a98: li       r0, 2
//   0x80167a9c: li       r3, 0
//   0x80167aa0: stw      r0, -0x64b4(r13)
//   0x80167aa4: b        0x80167b50
//   0x80167aa8: bl       0x801a650c
//   0x80167aac: li       r0, 0xf2
//   0x80167ab0: mr       r31, r3
//   0x80167ab4: stb      r0, 8(r1)
//

// TODO: Full decompilation requires Ghidra
