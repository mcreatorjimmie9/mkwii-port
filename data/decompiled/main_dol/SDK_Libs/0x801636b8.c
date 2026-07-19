// Function at 0x801636b8
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801636b8: stwu     r1, -0x10(r1)
//   0x801636bc: mflr     r0
//   0x801636c0: stw      r0, 0x14(r1)
//   0x801636c4: stw      r31, 0xc(r1)
//   0x801636c8: bl       0x801a650c
//   0x801636cc: lis      r4, -0x7fcc
//   0x801636d0: li       r0, 4
//   0x801636d4: addi     r4, r4, -0x1150
//   0x801636d8: mtctr    r0
//   0x801636dc: lwz      r31, 0(r4)
//   0x801636e0: cmplw    r31, r4
//   0x801636e4: beq      0x801636f4
//   0x801636e8: bl       0x801a6534
//   0x801636ec: mr       r3, r31
//   0x801636f0: b        0x80163704
//   0x801636f4: addi     r4, r4, 8
//   0x801636f8: bdnz     0x801636dc
//   0x801636fc: bl       0x801a6534
//   0x80163700: li       r3, 0
//   0x80163704: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
