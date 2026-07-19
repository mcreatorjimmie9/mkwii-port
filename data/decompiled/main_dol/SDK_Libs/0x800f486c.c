// Function at 0x800f486c
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800f486c: stwu     r1, -0x20(r1)
//   0x800f4870: mflr     r0
//   0x800f4874: stw      r0, 0x24(r1)
//   0x800f4878: stw      r31, 0x1c(r1)
//   0x800f487c: stw      r30, 0x18(r1)
//   0x800f4880: stw      r29, 0x14(r1)
//   0x800f4884: lis      r29, -0x7fd1
//   0x800f4888: addi     r29, r29, -0x1f40
//   0x800f488c: lwz      r12, 0x24(r29)
//   0x800f4890: cmpwi    r12, 0
//   0x800f4894: beq      0x800f48a8
//   0x800f4898: lwz      r4, 0x2c(r29)
//   0x800f489c: li       r3, 3
//   0x800f48a0: mtctr    r12
//   0x800f48a4: bctrl    
//   0x800f48a8: lwz      r3, 8(r29)
//   0x800f48ac: bl       0x800ef408
//   0x800f48b0: mr       r31, r3
//   0x800f48b4: li       r30, 0
//   0x800f48b8: b        0x800f48e8
//

// TODO: Full decompilation requires Ghidra
