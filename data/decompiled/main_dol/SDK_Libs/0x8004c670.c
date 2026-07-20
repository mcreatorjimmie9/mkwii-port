// Function at 0x8004c670
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c670: stwu     r1, -0x10(r1)
//   0x8004c674: mflr     r0
//   0x8004c678: lwz      r4, 0(r3)
//   0x8004c67c: lis      r3, -0x7fd9
//   0x8004c680: stw      r0, 0x14(r1)
//   0x8004c684: addi     r3, r3, -0x1c60
//   0x8004c688: addi     r0, r4, 0x18
//   0x8004c68c: addi     r4, r1, 8
//   0x8004c690: stw      r3, 8(r1)
//   0x8004c694: addi     r3, r1, 0xc
//   0x8004c698: stw      r0, 0xc(r1)
//   0x8004c69c: bl       0x8004c030
//   0x8004c6a0: cmpwi    r3, 0
//   0x8004c6a4: beq      0x8004c6c8
//   0x8004c6a8: neg      r0, r3
//   0x8004c6ac: or       r0, r0, r3
//   0x8004c6b0: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004c6b4: beq      0x8004c6c0
//   0x8004c6b8: lwz      r3, 4(r3)
//   0x8004c6bc: b        0x8004c6cc
//

// TODO: Full decompilation requires Ghidra
