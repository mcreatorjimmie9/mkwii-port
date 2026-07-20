// Function at 0x8020f6c8
// Size: 360 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8020f6c8: stwu     r1, -0x20(r1)
//   0x8020f6cc: mflr     r0
//   0x8020f6d0: stw      r0, 0x24(r1)
//   0x8020f6d4: stmw     r27, 0xc(r1)
//   0x8020f6d8: mr       r27, r3
//   0x8020f6dc: mr       r28, r4
//   0x8020f6e0: mr       r29, r5
//   0x8020f6e4: li       r30, 0
//   0x8020f6e8: lbz      r0, -0x5e80(r13)
//   0x8020f6ec: cmpwi    r0, 0
//   0x8020f6f0: beq      0x8020f728
//   0x8020f6f4: li       r4, 0
//   0x8020f6f8: lis      r31, -0x7fc8
//   0x8020f6fc: b        0x8020f714
//   0x8020f700: lwz      r0, 0x18(r3)
//   0x8020f704: cmplw    r0, r27
//   0x8020f708: bne      0x8020f714
//   0x8020f70c: mr       r30, r4
//   0x8020f710: b        0x8020f728
//   0x8020f714: addi     r3, r31, -0x10a8
//

// TODO: Full decompilation requires Ghidra
