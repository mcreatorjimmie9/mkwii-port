// Function at 0x8011ece4
// Size: 152 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8011ece4: stwu     r1, -0x20(r1)
//   0x8011ece8: mflr     r0
//   0x8011ecec: stw      r0, 0x24(r1)
//   0x8011ecf0: stw      r31, 0x1c(r1)
//   0x8011ecf4: mr       r31, r3
//   0x8011ecf8: stw      r4, 8(r1)
//   0x8011ecfc: bl       0x8011d00c
//   0x8011ed00: addi     r4, r1, 8
//   0x8011ed04: bl       0x800f003c
//   0x8011ed08: cmpwi    r3, 0
//   0x8011ed0c: beq      0x8011ed30
//   0x8011ed10: lwz      r0, 4(r3)
//   0x8011ed14: addic.   r0, r0, -1
//   0x8011ed18: stw      r0, 4(r3)
//   0x8011ed1c: bne      0x8011ed30
//   0x8011ed20: mr       r3, r31
//   0x8011ed24: bl       0x8011d00c
//   0x8011ed28: addi     r4, r1, 8
//   0x8011ed2c: bl       0x800eff98
//   0x8011ed30: lwz      r0, 0x24(r1)
//

// TODO: Full decompilation requires Ghidra
