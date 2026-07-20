// Function at 0x8000bf10
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000bf10: stwu     r1, -0x10(r1)
//   0x8000bf14: mflr     r0
//   0x8000bf18: stw      r0, 0x14(r1)
//   0x8000bf1c: stw      r31, 0xc(r1)
//   0x8000bf20: li       r31, 0
//   0x8000bf24: stw      r30, 8(r1)
//   0x8000bf28: lis      r30, -0x7fd9
//   0x8000bf2c: addi     r30, r30, -0x3650
//   0x8000bf30: b        0x8000bf58
//   0x8000bf34: lwz      r0, 4(r30)
//   0x8000bf38: rlwinm.  r0, r0, 0xa, 0x1d, 0x1f
//   0x8000bf3c: beq      0x8000bf54
//   0x8000bf40: mr       r3, r30
//   0x8000bf44: bl       0x8000e1b8
//   0x8000bf48: cmpwi    r3, 0
//   0x8000bf4c: beq      0x8000bf54
//   0x8000bf50: li       r31, -1
//   0x8000bf54: lwz      r30, 0x4c(r30)
//   0x8000bf58: cmpwi    r30, 0
//   0x8000bf5c: bne      0x8000bf34
//

// TODO: Full decompilation requires Ghidra
