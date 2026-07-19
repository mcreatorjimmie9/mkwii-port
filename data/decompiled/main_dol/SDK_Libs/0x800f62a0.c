// Function at 0x800f62a0
// Size: 280 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800f62a0: stwu     r1, -0x20(r1)
//   0x800f62a4: mflr     r0
//   0x800f62a8: stw      r0, 0x24(r1)
//   0x800f62ac: stw      r31, 0x1c(r1)
//   0x800f62b0: stw      r30, 0x18(r1)
//   0x800f62b4: lis      r30, -0x7fd9
//   0x800f62b8: addi     r30, r30, 0x6b68
//   0x800f62bc: stw      r29, 0x14(r1)
//   0x800f62c0: stw      r28, 0x10(r1)
//   0x800f62c4: mr       r28, r3
//   0x800f62c8: mr       r3, r30
//   0x800f62cc: bl       0x800206f4
//   0x800f62d0: cmpwi    r3, 0
//   0x800f62d4: mr       r31, r3
//   0x800f62d8: bne      0x800f6330
//   0x800f62dc: li       r3, 1
//   0x800f62e0: b        0x800f6364
//   0x800f62e4: b        0x800f6330
//   0x800f62e8: addi     r29, r3, 0x400
//   0x800f62ec: lwz      r3, 0(r28)
//

// TODO: Full decompilation requires Ghidra
