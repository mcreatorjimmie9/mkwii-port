// Function at 0x80240ce4
// Size: 92 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80240ce4: stwu     r1, -0x10(r1)
//   0x80240ce8: mflr     r0
//   0x80240cec: stw      r0, 0x14(r1)
//   0x80240cf0: lhz      r0, 0xc(r3)
//   0x80240cf4: clrlwi.  r0, r0, 0x1f
//   0x80240cf8: beq      0x80240d20
//   0x80240cfc: bl       0x80240ff0
//   0x80240d00: lis      r4, -0x7fdb
//   0x80240d04: addi     r5, r1, 8
//   0x80240d08: addi     r4, r4, 0x7f10
//   0x80240d0c: addi     r4, r4, 0x1c
//   0x80240d10: crclr    cr1eq
//   0x80240d14: bl       0x800124e0
//   0x80240d18: lwz      r3, 8(r1)
//   0x80240d1c: b        0x80240d30
//   0x80240d20: addi     r4, r1, 0xc
//   0x80240d24: li       r5, 4
//   0x80240d28: bl       0x80240dac
//   0x80240d2c: lwz      r3, 0xc(r1)
//   0x80240d30: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
