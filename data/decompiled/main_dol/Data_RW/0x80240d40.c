// Function at 0x80240d40
// Size: 108 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80240d40: stwu     r1, -0x10(r1)
//   0x80240d44: mflr     r0
//   0x80240d48: stw      r0, 0x14(r1)
//   0x80240d4c: stw      r31, 0xc(r1)
//   0x80240d50: mr       r31, r5
//   0x80240d54: stw      r30, 8(r1)
//   0x80240d58: mr       r30, r4
//   0x80240d5c: lhz      r0, 0xc(r3)
//   0x80240d60: clrlwi.  r0, r0, 0x1f
//   0x80240d64: beq      0x80240d90
//   0x80240d68: bl       0x80240ff0
//   0x80240d6c: lis      r5, -0x7fdb
//   0x80240d70: mr       r6, r3
//   0x80240d74: addi     r5, r5, 0x7f10
//   0x80240d78: mr       r3, r30
//   0x80240d7c: mr       r4, r31
//   0x80240d80: addi     r5, r5, 0x56
//   0x80240d84: crclr    cr1eq
//   0x80240d88: bl       0x80010dd8
//   0x80240d8c: b        0x80240d94
//

// TODO: Full decompilation requires Ghidra
