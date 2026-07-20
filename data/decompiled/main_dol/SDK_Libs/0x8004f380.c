// Function at 0x8004f380
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004f380: stwu     r1, -0x10(r1)
//   0x8004f384: mflr     r0
//   0x8004f388: lwz      r4, 0(r3)
//   0x8004f38c: stw      r0, 0x14(r1)
//   0x8004f390: lha      r0, 0x4a(r4)
//   0x8004f394: cmpwi    r0, -1
//   0x8004f398: beq      0x8004f3c8
//   0x8004f39c: lwz      r0, 4(r4)
//   0x8004f3a0: cmpwi    r0, 0
//   0x8004f3a4: beq      0x8004f3b0
//   0x8004f3a8: add      r0, r4, r0
//   0x8004f3ac: b        0x8004f3b4
//   0x8004f3b0: li       r0, 0
//   0x8004f3b4: stw      r0, 8(r1)
//   0x8004f3b8: addi     r3, r1, 8
//   0x8004f3bc: lha      r4, 0x4a(r4)
//   0x8004f3c0: bl       0x8004e540
//   0x8004f3c4: b        0x8004f3cc
//   0x8004f3c8: li       r3, 0
//   0x8004f3cc: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
