// Function at 0x8004c210
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c210: stwu     r1, -0x20(r1)
//   0x8004c214: mflr     r0
//   0x8004c218: lwz      r5, 0(r3)
//   0x8004c21c: lis      r3, -0x7fd9
//   0x8004c220: stw      r0, 0x24(r1)
//   0x8004c224: addi     r3, r3, -0x1ca0
//   0x8004c228: addi     r0, r5, 0x18
//   0x8004c22c: stw      r31, 0x1c(r1)
//   0x8004c230: mr       r31, r4
//   0x8004c234: addi     r4, r1, 8
//   0x8004c238: stw      r3, 8(r1)
//   0x8004c23c: addi     r3, r1, 0xc
//   0x8004c240: stw      r0, 0xc(r1)
//   0x8004c244: bl       0x8004c030
//   0x8004c248: cmpwi    r3, 0
//   0x8004c24c: beq      0x8004c290
//   0x8004c250: neg      r0, r3
//   0x8004c254: or       r0, r0, r3
//   0x8004c258: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004c25c: beq      0x8004c288
//

// TODO: Full decompilation requires Ghidra
