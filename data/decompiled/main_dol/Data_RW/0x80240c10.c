// Function at 0x80240c10
// Size: 148 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80240c10: stwu     r1, -0x10(r1)
//   0x80240c14: mflr     r0
//   0x80240c18: lis      r5, -0x7fc8
//   0x80240c1c: stw      r0, 0x14(r1)
//   0x80240c20: stw      r31, 0xc(r1)
//   0x80240c24: mr       r31, r4
//   0x80240c28: stw      r30, 8(r1)
//   0x80240c2c: mr       r30, r3
//   0x80240c30: lwz      r0, 0x120(r5)
//   0x80240c34: rlwinm.  r0, r0, 0, 0x1c, 0x1c
//   0x80240c38: beq      0x80240c58
//   0x80240c3c: addi     r5, r5, 0x120
//   0x80240c40: lwz      r0, 4(r5)
//   0x80240c44: cmpw     r3, r0
//   0x80240c48: bne      0x80240c58
//   0x80240c4c: lwz      r0, 8(r5)
//   0x80240c50: cmpw     r4, r0
//   0x80240c54: beq      0x80240c8c
//   0x80240c58: mr       r3, r30
//   0x80240c5c: mr       r4, r31
//

// TODO: Full decompilation requires Ghidra
