// Function at 0x80163660
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80163660: stwu     r1, -0x10(r1)
//   0x80163664: mflr     r0
//   0x80163668: stw      r0, 0x14(r1)
//   0x8016366c: bl       0x801a650c
//   0x80163670: lis      r4, -0x7fcc
//   0x80163674: li       r0, 4
//   0x80163678: addi     r4, r4, -0x1150
//   0x8016367c: mtctr    r0
//   0x80163680: lwz      r0, 0(r4)
//   0x80163684: cmplw    r0, r4
//   0x80163688: beq      0x80163698
//   0x8016368c: bl       0x801a6534
//   0x80163690: li       r3, 1
//   0x80163694: b        0x801636a8
//   0x80163698: addi     r4, r4, 8
//   0x8016369c: bdnz     0x80163680
//   0x801636a0: bl       0x801a6534
//   0x801636a4: li       r3, 0
//   0x801636a8: lwz      r0, 0x14(r1)
//   0x801636ac: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
