// Function at 0x8004c970
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c970: stwu     r1, -0x10(r1)
//   0x8004c974: mflr     r0
//   0x8004c978: lwz      r4, 0(r3)
//   0x8004c97c: lis      r3, -0x7fd9
//   0x8004c980: stw      r0, 0x14(r1)
//   0x8004c984: addi     r3, r3, -0x1c00
//   0x8004c988: addi     r0, r4, 0x18
//   0x8004c98c: addi     r4, r1, 8
//   0x8004c990: stw      r3, 8(r1)
//   0x8004c994: addi     r3, r1, 0xc
//   0x8004c998: stw      r0, 0xc(r1)
//   0x8004c99c: bl       0x8004c030
//   0x8004c9a0: cmpwi    r3, 0
//   0x8004c9a4: beq      0x8004c9c8
//   0x8004c9a8: neg      r0, r3
//   0x8004c9ac: or       r0, r0, r3
//   0x8004c9b0: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004c9b4: beq      0x8004c9c0
//   0x8004c9b8: lwz      r3, 4(r3)
//   0x8004c9bc: b        0x8004c9cc
//

// TODO: Full decompilation requires Ghidra
