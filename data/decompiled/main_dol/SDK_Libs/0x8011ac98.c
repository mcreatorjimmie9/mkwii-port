// Function at 0x8011ac98
// Size: 260 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xf0 bytes
//
// Disassembly (first 20 instructions):
//   0x8011ac98: stwu     r1, -0xf0(r1)
//   0x8011ac9c: mflr     r0
//   0x8011aca0: cmpwi    r3, -1
//   0x8011aca4: stw      r0, 0xf4(r1)
//   0x8011aca8: stw      r31, 0xec(r1)
//   0x8011acac: mr       r31, r3
//   0x8011acb0: stw      r30, 0xe8(r1)
//   0x8011acb4: li       r30, 1
//   0x8011acb8: beq      0x8011ad80
//   0x8011acbc: bl       0x800f2428
//   0x8011acc0: lwz      r0, -0x67e8(r13)
//   0x8011acc4: subf     r0, r0, r3
//   0x8011acc8: cmplwi   r0, 0x2710
//   0x8011accc: bge      0x8011ace4
//   0x8011acd0: lis      r4, -0x7fd1
//   0x8011acd4: mr       r3, r31
//   0x8011acd8: addi     r4, r4, -0x720
//   0x8011acdc: bl       0x8011a460
//   0x8011ace0: b        0x8011ace8
//   0x8011ace4: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
