// Function at 0x8022450c
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8022450c: stwu     r1, -0x20(r1)
//   0x80224510: mflr     r0
//   0x80224514: stw      r0, 0x24(r1)
//   0x80224518: stw      r31, 0x1c(r1)
//   0x8022451c: mr       r31, r3
//   0x80224520: stw      r30, 0x18(r1)
//   0x80224524: mr       r30, r4
//   0x80224528: bl       0x800358a0
//   0x8022452c: mr       r4, r3
//   0x80224530: mr       r5, r30
//   0x80224534: addi     r3, r1, 8
//   0x80224538: li       r6, 0
//   0x8022453c: bl       0x80035d50
//   0x80224540: lwz      r3, 8(r1)
//   0x80224544: lwz      r31, 0x14(r31)
//   0x80224548: lbz      r0, 0x96(r3)
//   0x8022454c: lbz      r3, 0x97(r3)
//   0x80224550: rlwimi   r3, r0, 8, 0x10, 0x17
//   0x80224554: rlwinm.  r0, r3, 0, 0x10, 0x10
//   0x80224558: beq      0x80224574
//

// TODO: Full decompilation requires Ghidra
