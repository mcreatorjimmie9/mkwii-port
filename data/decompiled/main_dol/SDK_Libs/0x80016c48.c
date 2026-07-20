// Function at 0x80016c48
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80016c48: stwu     r1, -0x10(r1)
//   0x80016c4c: mflr     r0
//   0x80016c50: stw      r0, 0x14(r1)
//   0x80016c54: stw      r31, 0xc(r1)
//   0x80016c58: stw      r30, 8(r1)
//   0x80016c5c: mr       r30, r3
//   0x80016c60: lwz      r6, 8(r3)
//   0x80016c64: lwz      r7, 4(r3)
//   0x80016c68: add      r0, r6, r5
//   0x80016c6c: cmplw    r0, r7
//   0x80016c70: subf     r31, r6, r7
//   0x80016c74: bgt      0x80016c7c
//   0x80016c78: mr       r31, r5
//   0x80016c7c: lwz      r3, 0(r3)
//   0x80016c80: slwi     r0, r6, 1
//   0x80016c84: mr       r5, r31
//   0x80016c88: add      r3, r3, r0
//   0x80016c8c: bl       0x80014af0
//   0x80016c90: lwz      r0, 8(r30)
//   0x80016c94: add      r0, r0, r31
//

// TODO: Full decompilation requires Ghidra
