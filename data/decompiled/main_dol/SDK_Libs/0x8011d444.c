// Function at 0x8011d444
// Size: 460 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8011d444: stwu     r1, -0x30(r1)
//   0x8011d448: mflr     r0
//   0x8011d44c: stw      r0, 0x34(r1)
//   0x8011d450: addi     r11, r1, 0x30
//   0x8011d454: bl       0x80020a3c
//   0x8011d458: addic.   r0, r4, 1
//   0x8011d45c: mr       r30, r3
//   0x8011d460: beq      0x8011d468
//   0x8011d464: stw      r0, -0x67cc(r13)
//   0x8011d468: lwz      r31, -0x67cc(r13)
//   0x8011d46c: mr       r3, r31
//   0x8011d470: b        0x8011d47c
//   0x8011d474: addi     r3, r3, 1
//   0x8011d478: stw      r3, -0x67cc(r13)
//   0x8011d47c: lbz      r4, 0(r3)
//   0x8011d480: extsb.   r0, r4
//   0x8011d484: beq      0x8011d490
//   0x8011d488: cmpwi    r0, 0x5c
//   0x8011d48c: bne      0x8011d474
//   0x8011d490: cmplw    r3, r31
//

// TODO: Full decompilation requires Ghidra
