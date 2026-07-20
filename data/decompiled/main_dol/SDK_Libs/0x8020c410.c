// Function at 0x8020c410
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c410: stwu     r1, -0x10(r1)
//   0x8020c414: mflr     r0
//   0x8020c418: stw      r0, 0x14(r1)
//   0x8020c41c: stw      r31, 0xc(r1)
//   0x8020c420: mr       r31, r4
//   0x8020c424: bl       0x80208f38
//   0x8020c428: cmplwi   r3, 0x1a
//   0x8020c42c: bge      0x8020c444
//   0x8020c430: mulli    r0, r3, 0x14
//   0x8020c434: lis      r3, -0x7fc8
//   0x8020c438: addi     r3, r3, -0x1450
//   0x8020c43c: add      r3, r3, r0
//   0x8020c440: b        0x8020c448
//   0x8020c444: li       r3, 0
//   0x8020c448: cmpwi    r3, 0
//   0x8020c44c: beq      0x8020c454
//   0x8020c450: stw      r31, 0xc(r3)
//   0x8020c454: lwz      r0, 0x14(r1)
//   0x8020c458: lwz      r31, 0xc(r1)
//   0x8020c45c: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
