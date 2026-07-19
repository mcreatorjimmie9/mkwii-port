// Function at 0x80243e0c
// Size: 116 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243e0c: stwu     r1, -0x10(r1)
//   0x80243e10: mflr     r0
//   0x80243e14: cmpwi    r3, 0
//   0x80243e18: stw      r0, 0x14(r1)
//   0x80243e1c: stw      r31, 0xc(r1)
//   0x80243e20: mr       r31, r3
//   0x80243e24: beq      0x80243e5c
//   0x80243e28: lbz      r0, 0xf3(r3)
//   0x80243e2c: lis      r4, -0x7fd6
//   0x80243e30: addi     r4, r4, -0x360
//   0x80243e34: stw      r4, 0(r3)
//   0x80243e38: extsb.   r0, r0
//   0x80243e3c: beq      0x80243e48
//   0x80243e40: li       r0, 0
//   0x80243e44: stb      r0, 0xf3(r3)
//   0x80243e48: cmpwi    r3, 0
//   0x80243e4c: beq      0x80243e5c
//   0x80243e50: mr       r3, r31
//   0x80243e54: li       r4, 0
//   0x80243e58: bl       0x8006d800
//

// TODO: Full decompilation requires Ghidra
