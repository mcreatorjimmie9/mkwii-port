// Function at 0x80143d18
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80143d18: stwu     r1, -0x10(r1)
//   0x80143d1c: mflr     r0
//   0x80143d20: lis      r5, -0x7fcd
//   0x80143d24: stw      r0, 0x14(r1)
//   0x80143d28: li       r0, 2
//   0x80143d2c: addi     r5, r5, 0x46c0
//   0x80143d30: stw      r31, 0xc(r1)
//   0x80143d34: addi     r31, r5, 0xac
//   0x80143d38: li       r5, 0
//   0x80143d3c: mtctr    r0
//   0x80143d40: lbz      r0, 0(r31)
//   0x80143d44: cmpwi    r0, 0
//   0x80143d48: beq      0x80143d5c
//   0x80143d4c: lhz      r0, 6(r31)
//   0x80143d50: cmplw    r0, r3
//   0x80143d54: bne      0x80143d5c
//   0x80143d58: b        0x80143dcc
//   0x80143d5c: lbzu     r0, 0x60(r31)
//   0x80143d60: addi     r5, r5, 1
//   0x80143d64: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
