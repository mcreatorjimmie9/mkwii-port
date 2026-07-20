// Function at 0x80093f20
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80093f20: stwu     r1, -0x20(r1)
//   0x80093f24: mflr     r0
//   0x80093f28: stw      r0, 0x24(r1)
//   0x80093f2c: stw      r31, 0x1c(r1)
//   0x80093f30: mr       r31, r3
//   0x80093f34: lbz      r0, 0xc(r3)
//   0x80093f38: cmpwi    r0, 0
//   0x80093f3c: beq      0x80093f70
//   0x80093f40: li       r0, 0
//   0x80093f44: stb      r0, 0xc(r3)
//   0x80093f48: addi     r3, r3, 0x10
//   0x80093f4c: addi     r4, r1, 0xc
//   0x80093f50: addi     r5, r1, 8
//   0x80093f54: bl       0x8008d140
//   0x80093f58: addi     r3, r31, 0x44
//   0x80093f5c: bl       0x801283c0
//   0x80093f60: lwz      r4, 0xc(r1)
//   0x80093f64: addi     r3, r31, 0x10
//   0x80093f68: lwz      r5, 8(r1)
//   0x80093f6c: bl       0x8008d1a0
//

// TODO: Full decompilation requires Ghidra
