// Function at 0x80079410
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80079410: stwu     r1, -0x10(r1)
//   0x80079414: mflr     r0
//   0x80079418: stw      r0, 0x14(r1)
//   0x8007941c: stw      r31, 0xc(r1)
//   0x80079420: mr       r31, r4
//   0x80079424: stw      r30, 8(r1)
//   0x80079428: mr       r30, r3
//   0x8007942c: lwz      r0, 0x28(r3)
//   0x80079430: cmpwi    r0, 0
//   0x80079434: beq      0x8007944c
//   0x80079438: mr       r3, r0
//   0x8007943c: lwz      r12, 0(r3)
//   0x80079440: lwz      r12, 0x14(r12)
//   0x80079444: mtctr    r12
//   0x80079448: bctrl    
//   0x8007944c: mr       r4, r31
//   0x80079450: addi     r3, r30, 0x1c
//   0x80079454: bl       0x80083b80
//   0x80079458: lwz      r0, 0x14(r1)
//   0x8007945c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
