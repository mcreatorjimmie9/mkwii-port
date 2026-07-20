// Function at 0x8011b678
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8011b678: stwu     r1, -0x10(r1)
//   0x8011b67c: mflr     r0
//   0x8011b680: stw      r0, 0x14(r1)
//   0x8011b684: stw      r31, 0xc(r1)
//   0x8011b688: lwz      r3, -0x6800(r13)
//   0x8011b68c: cmpwi    r3, 0
//   0x8011b690: beq      0x8011b6a0
//   0x8011b694: bl       0x800ef408
//   0x8011b698: cmpwi    r3, 0
//   0x8011b69c: bne      0x8011b6ac
//   0x8011b6a0: li       r3, 0
//   0x8011b6a4: bl       0x8011b164
//   0x8011b6a8: b        0x8011b6d8
//   0x8011b6ac: lwz      r3, -0x6800(r13)
//   0x8011b6b0: bl       0x800ef408
//   0x8011b6b4: addi     r31, r3, -1
//   0x8011b6b8: b        0x8011b6d0
//   0x8011b6bc: lwz      r3, -0x6800(r13)
//   0x8011b6c0: mr       r4, r31
//   0x8011b6c4: bl       0x800ef410
//

// TODO: Full decompilation requires Ghidra
