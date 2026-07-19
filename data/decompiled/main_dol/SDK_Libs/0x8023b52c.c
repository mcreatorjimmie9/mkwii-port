// Function at 0x8023b52c
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8023b52c: stwu     r1, -0x20(r1)
//   0x8023b530: mflr     r0
//   0x8023b534: stw      r0, 0x24(r1)
//   0x8023b538: stw      r31, 0x1c(r1)
//   0x8023b53c: mr       r31, r3
//   0x8023b540: li       r3, 0x24
//   0x8023b544: bl       0x80229a48
//   0x8023b548: cmpwi    r3, 0
//   0x8023b54c: beq      0x8023b574
//   0x8023b550: lfs      f1, -0x5fa0(r2)
//   0x8023b554: li       r0, 0
//   0x8023b558: stw      r0, 8(r1)
//   0x8023b55c: addi     r4, r1, 8
//   0x8023b560: fmr      f2, f1
//   0x8023b564: lfs      f3, -0x5f9c(r2)
//   0x8023b568: lfs      f4, -0x5f98(r2)
//   0x8023b56c: li       r5, 0
//   0x8023b570: bl       0x802150c8
//   0x8023b574: stw      r3, 0x24(r31)
//   0x8023b578: lwz      r31, 0x1c(r1)
//

// TODO: Full decompilation requires Ghidra
