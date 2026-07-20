// Function at 0x8004f3e0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004f3e0: stwu     r1, -0x10(r1)
//   0x8004f3e4: mflr     r0
//   0x8004f3e8: lwz      r3, 0(r3)
//   0x8004f3ec: stw      r0, 0x14(r1)
//   0x8004f3f0: slwi     r0, r4, 1
//   0x8004f3f4: add      r4, r3, r0
//   0x8004f3f8: lha      r0, 0x4c(r4)
//   0x8004f3fc: cmpwi    r0, -1
//   0x8004f400: beq      0x8004f430
//   0x8004f404: lwz      r0, 4(r3)
//   0x8004f408: cmpwi    r0, 0
//   0x8004f40c: beq      0x8004f418
//   0x8004f410: add      r0, r3, r0
//   0x8004f414: b        0x8004f41c
//   0x8004f418: li       r0, 0
//   0x8004f41c: stw      r0, 8(r1)
//   0x8004f420: addi     r3, r1, 8
//   0x8004f424: lha      r4, 0x4c(r4)
//   0x8004f428: bl       0x8004e690
//   0x8004f42c: b        0x8004f434
//

// TODO: Full decompilation requires Ghidra
