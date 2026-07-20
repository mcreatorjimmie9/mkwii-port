// Function at 0x80072e60
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80072e60: stwu     r1, -0x10(r1)
//   0x80072e64: mflr     r0
//   0x80072e68: mr       r5, r3
//   0x80072e6c: stw      r0, 0x14(r1)
//   0x80072e70: lwz      r4, 0(r3)
//   0x80072e74: cmpwi    r4, 0
//   0x80072e78: beq      0x80072eac
//   0x80072e7c: lwz      r0, 0x10(r3)
//   0x80072e80: cmpwi    r0, 0
//   0x80072e84: beq      0x80072e90
//   0x80072e88: lwz      r3, 0x10(r3)
//   0x80072e8c: b        0x80072eb0
//   0x80072e90: lwz      r0, 0xe8(r4)
//   0x80072e94: addi     r3, r1, 8
//   0x80072e98: stw      r0, 8(r1)
//   0x80072e9c: lwz      r4, 4(r5)
//   0x80072ea0: bl       0x8004e950
//   0x80072ea4: addi     r3, r3, 0x1a8
//   0x80072ea8: b        0x80072eb0
//   0x80072eac: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
