// Function at 0x8004c530
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c530: stwu     r1, -0x20(r1)
//   0x8004c534: mflr     r0
//   0x8004c538: lwz      r5, 0(r3)
//   0x8004c53c: lis      r3, -0x7fd9
//   0x8004c540: stw      r0, 0x24(r1)
//   0x8004c544: addi     r3, r3, -0x1c60
//   0x8004c548: addi     r0, r5, 0x18
//   0x8004c54c: stw      r31, 0x1c(r1)
//   0x8004c550: mr       r31, r4
//   0x8004c554: addi     r4, r1, 8
//   0x8004c558: stw      r3, 8(r1)
//   0x8004c55c: addi     r3, r1, 0xc
//   0x8004c560: stw      r0, 0xc(r1)
//   0x8004c564: bl       0x8004c030
//   0x8004c568: cmpwi    r3, 0
//   0x8004c56c: beq      0x8004c5b0
//   0x8004c570: neg      r0, r3
//   0x8004c574: or       r0, r0, r3
//   0x8004c578: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004c57c: beq      0x8004c5a8
//

// TODO: Full decompilation requires Ghidra
