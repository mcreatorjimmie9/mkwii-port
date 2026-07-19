// Function at 0x80210c44
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80210c44: stwu     r1, -0x10(r1)
//   0x80210c48: mflr     r0
//   0x80210c4c: stw      r0, 0x14(r1)
//   0x80210c50: stw      r31, 0xc(r1)
//   0x80210c54: mr       r31, r3
//   0x80210c58: lwz      r0, 8(r3)
//   0x80210c5c: cmpwi    r0, 0
//   0x80210c60: beq      0x80210cbc
//   0x80210c64: lwz      r4, 0x4cc(r3)
//   0x80210c68: addi     r0, r4, -3
//   0x80210c6c: cmplwi   r0, 1
//   0x80210c70: ble      0x80210ca0
//   0x80210c74: cmpwi    r4, 1
//   0x80210c78: beq      0x80210c88
//   0x80210c7c: cmpwi    r4, 2
//   0x80210c80: beq      0x80210c94
//   0x80210c84: b        0x80210ca8
//   0x80210c88: addi     r3, r3, 0xc
//   0x80210c8c: bl       0x80091130
//   0x80210c90: b        0x80210ca8
//

// TODO: Full decompilation requires Ghidra
