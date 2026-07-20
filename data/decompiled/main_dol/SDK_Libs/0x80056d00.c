// Function at 0x80056d00
// Size: 368 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80056d00: stwu     r1, -0x40(r1)
//   0x80056d04: mflr     r0
//   0x80056d08: stw      r0, 0x44(r1)
//   0x80056d0c: stfd     f31, 0x30(r1)
//   0x80056d10: xxsel    vs31, vs1, vs0, v0
//   0x80056d14: addi     r11, r1, 0x30
//   0x80056d18: bl       0x80020a2c
//   0x80056d1c: lwz      r3, 0(r3)
//   0x80056d20: fmr      f31, f1
//   0x80056d24: mr       r23, r4
//   0x80056d28: mr       r24, r6
//   0x80056d2c: lwz      r0, 0x10(r3)
//   0x80056d30: cmpwi    r0, 0
//   0x80056d34: beq      0x80056d40
//   0x80056d38: add      r0, r3, r0
//   0x80056d3c: b        0x80056d44
//   0x80056d40: li       r0, 0
//   0x80056d44: cmpwi    r0, 0
//   0x80056d48: beq      0x80056d74
//   0x80056d4c: addi     r3, r5, 1
//

// TODO: Full decompilation requires Ghidra
