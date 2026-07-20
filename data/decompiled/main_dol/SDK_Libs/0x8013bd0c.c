// Function at 0x8013bd0c
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8013bd0c: stwu     r1, -0x10(r1)
//   0x8013bd10: mflr     r0
//   0x8013bd14: cmpwi    r3, 0
//   0x8013bd18: stw      r0, 0x14(r1)
//   0x8013bd1c: stw      r31, 0xc(r1)
//   0x8013bd20: stw      r30, 8(r1)
//   0x8013bd24: mr       r30, r3
//   0x8013bd28: beq      0x8013bd3c
//   0x8013bd2c: cmplwi   r3, 1
//   0x8013bd30: beq      0x8013bd3c
//   0x8013bd34: li       r3, 5
//   0x8013bd38: b        0x8013bda4
//   0x8013bd3c: lis      r31, -0x7fcd
//   0x8013bd40: addi     r31, r31, 0x1ef8
//   0x8013bd44: lbz      r0, 0x643(r31)
//   0x8013bd48: rlwinm.  r0, r0, 0, 0x1b, 0x1b
//   0x8013bd4c: bne      0x8013bd58
//   0x8013bd50: li       r3, 4
//   0x8013bd54: b        0x8013bda4
//   0x8013bd58: lhz      r0, 0x16a4(r31)
//

// TODO: Full decompilation requires Ghidra
