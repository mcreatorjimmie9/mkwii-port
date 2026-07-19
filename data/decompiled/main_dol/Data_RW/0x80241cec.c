// Function at 0x80241cec
// Size: 112 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80241cec: stwu     r1, -0x10(r1)
//   0x80241cf0: mflr     r0
//   0x80241cf4: stw      r0, 0x14(r1)
//   0x80241cf8: stw      r31, 0xc(r1)
//   0x80241cfc: mr       r31, r3
//   0x80241d00: lwz      r3, 8(r3)
//   0x80241d04: bl       0x801a981c
//   0x80241d08: cmpwi    r3, 1
//   0x80241d0c: beq      0x80241d48
//   0x80241d10: bl       0x80163030
//   0x80241d14: lwz      r3, 0x4c(r31)
//   0x80241d18: cmpwi    r3, 0
//   0x80241d1c: beq      0x80241d28
//   0x80241d20: addi     r3, r3, -0x10
//   0x80241d24: bl       0x80229b5c
//   0x80241d28: cmpwi    r31, 0
//   0x80241d2c: beq      0x80241d48
//   0x80241d30: lwz      r12, 0(r31)
//   0x80241d34: mr       r3, r31
//   0x80241d38: li       r4, 1
//

// TODO: Full decompilation requires Ghidra
