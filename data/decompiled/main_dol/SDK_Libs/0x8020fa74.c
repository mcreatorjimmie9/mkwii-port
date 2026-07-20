// Function at 0x8020fa74
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8020fa74: stwu     r1, -0x20(r1)
//   0x8020fa78: mflr     r0
//   0x8020fa7c: addi     r3, r3, 0x18
//   0x8020fa80: stw      r0, 0x24(r1)
//   0x8020fa84: stw      r31, 0x1c(r1)
//   0x8020fa88: mr       r31, r5
//   0x8020fa8c: addi     r5, r1, 8
//   0x8020fa90: bl       0x80124500
//   0x8020fa94: neg      r0, r3
//   0x8020fa98: or       r0, r0, r3
//   0x8020fa9c: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8020faa0: beq      0x8020fabc
//   0x8020faa4: addi     r3, r1, 8
//   0x8020faa8: bl       0x80124c34
//   0x8020faac: stw      r3, 0(r31)
//   0x8020fab0: addi     r3, r1, 8
//   0x8020fab4: bl       0x80124c3c
//   0x8020fab8: stw      r3, 4(r31)
//   0x8020fabc: addi     r3, r1, 8
//   0x8020fac0: bl       0x80124c44
//

// TODO: Full decompilation requires Ghidra
