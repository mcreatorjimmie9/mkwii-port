// Function at 0x8018669c
// Size: 544 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8018669c: stwu     r1, -0x40(r1)
//   0x801866a0: mflr     r0
//   0x801866a4: mr       r5, r3
//   0x801866a8: stw      r0, 0x44(r1)
//   0x801866ac: lbz      r0, 0x50(r4)
//   0x801866b0: stw      r31, 0x3c(r1)
//   0x801866b4: mr       r31, r4
//   0x801866b8: rlwinm.  r0, r0, 0x19, 0x1f, 0x1f
//   0x801866bc: beq      0x80186720
//   0x801866c0: addi     r3, r4, 4
//   0x801866c4: addi     r4, r5, 0x84
//   0x801866c8: addi     r5, r1, 8
//   0x801866cc: bl       0x80199cc4
//   0x801866d0: lfs      f2, 0x40(r31)
//   0x801866d4: lis      r3, -0x7fdb
//   0x801866d8: lfs      f1, 0x38(r31)
//   0x801866dc: lfs      f0, 0x2840(r3)
//   0x801866e0: fsubs    f1, f2, f1
//

// TODO: Full decompilation requires Ghidra
