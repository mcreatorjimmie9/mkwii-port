// Function at 0x8010d780
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010d780: stwu     r1, -0x20(r1)
//   0x8010d784: mflr     r0
//   0x8010d788: li       r4, 7
//   0x8010d78c: stw      r0, 0x24(r1)
//   0x8010d790: addi     r6, r1, 8
//   0x8010d794: stw      r31, 0x1c(r1)
//   0x8010d798: mr       r31, r3
//   0x8010d79c: lwz      r5, 8(r3)
//   0x8010d7a0: lwz      r5, 0x44(r5)
//   0x8010d7a4: addi     r5, r5, 7
//   0x8010d7a8: bl       0x8010d084
//   0x8010d7ac: cmpwi    r3, 0
//   0x8010d7b0: bne      0x8010d7bc
//   0x8010d7b4: li       r3, 0
//   0x8010d7b8: b        0x8010d834
//   0x8010d7bc: lwz      r0, 8(r1)
//   0x8010d7c0: cmpwi    r0, 0
//   0x8010d7c4: beq      0x8010d7d0
//   0x8010d7c8: li       r3, 1
//   0x8010d7cc: b        0x8010d834
//

// TODO: Full decompilation requires Ghidra
