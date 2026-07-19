// Function at 0x800bd390
// Size: 368 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xb0 bytes
//
// Disassembly (first 20 instructions):
//   0x800bd390: stwu     r1, -0xb0(r1)
//   0x800bd394: mflr     r0
//   0x800bd398: lis      r5, -0x7fdb
//   0x800bd39c: stw      r0, 0xb4(r1)
//   0x800bd3a0: slwi     r0, r3, 2
//   0x800bd3a4: addi     r5, r5, -0x4af8
//   0x800bd3a8: stw      r31, 0xac(r1)
//   0x800bd3ac: mr       r31, r4
//   0x800bd3b0: stw      r30, 0xa8(r1)
//   0x800bd3b4: stw      r29, 0xa4(r1)
//   0x800bd3b8: lwzx     r29, r5, r0
//   0x800bd3bc: stw      r28, 0xa0(r1)
//   0x800bd3c0: bl       0x800bc380
//   0x800bd3c4: cmpwi    r3, 0
//   0x800bd3c8: mr       r30, r3
//   0x800bd3cc: bne      0x800bd3d8
//   0x800bd3d0: li       r30, 0
//   0x800bd3d4: b        0x800bd4d8
//   0x800bd3d8: slwi     r0, r29, 3
//   0x800bd3dc: add      r28, r3, r0
//

// TODO: Full decompilation requires Ghidra
