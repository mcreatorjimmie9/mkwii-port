// Function at 0x80057f70
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80057f70: stwu     r1, -0x10(r1)
//   0x80057f74: mflr     r0
//   0x80057f78: stw      r0, 0x14(r1)
//   0x80057f7c: slwi     r0, r5, 1
//   0x80057f80: stw      r31, 0xc(r1)
//   0x80057f84: mr       r31, r4
//   0x80057f88: lwz      r6, 0x14(r3)
//   0x80057f8c: lhzx     r5, r6, r0
//   0x80057f90: rlwinm.  r0, r5, 0, 0x10, 0x11
//   0x80057f94: beq      0x80057fa8
//   0x80057f98: li       r0, 0
//   0x80057f9c: stw      r0, 0(r4)
//   0x80057fa0: mr       r3, r31
//   0x80057fa4: b        0x80057fd0
//   0x80057fa8: lwz      r6, 0x30(r3)
//   0x80057fac: cmpwi    r6, 0
//   0x80057fb0: beq      0x80057fc0
//   0x80057fb4: mulli    r0, r5, 0x5c
//   0x80057fb8: add      r3, r6, r0
//   0x80057fbc: b        0x80057fd0
//

// TODO: Full decompilation requires Ghidra
