// Function at 0x80124c4c
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80124c4c: stwu     r1, -0x10(r1)
//   0x80124c50: mflr     r0
//   0x80124c54: stw      r0, 0x14(r1)
//   0x80124c58: stw      r31, 0xc(r1)
//   0x80124c5c: mr       r31, r3
//   0x80124c60: bl       0x801247f4
//   0x80124c64: cmpwi    r3, 0
//   0x80124c68: lwz      r4, 4(r31)
//   0x80124c6c: blt      0x80124c80
//   0x80124c70: mulli    r0, r3, 0xc
//   0x80124c74: lwzx     r0, r4, r0
//   0x80124c78: rlwinm.  r0, r0, 0, 0, 7
//   0x80124c7c: bne      0x80124c88
//   0x80124c80: li       r3, 0
//   0x80124c84: b        0x80124c90
//   0x80124c88: stw      r3, 0x18(r31)
//   0x80124c8c: li       r3, 1
//   0x80124c90: lwz      r0, 0x14(r1)
//   0x80124c94: lwz      r31, 0xc(r1)
//   0x80124c98: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
