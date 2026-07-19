// Function at 0x8011c9ac
// Size: 1004 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8011c9ac: stwu     r1, -0x30(r1)
//   0x8011c9b0: mflr     r0
//   0x8011c9b4: stw      r0, 0x34(r1)
//   0x8011c9b8: addi     r11, r1, 0x30
//   0x8011c9bc: bl       0x80020a34
//   0x8011c9c0: lbz      r0, 0(r5)
//   0x8011c9c4: mr       r28, r3
//   0x8011c9c8: mr       r29, r4
//   0x8011c9cc: extsb.   r0, r0
//   0x8011c9d0: beq      0x8011c9dc
//   0x8011c9d4: cmpwi    r0, 9
//   0x8011c9d8: bne      0x8011cb84
//   0x8011c9dc: lbz      r3, 0x14(r4)
//   0x8011c9e0: addi     r30, r5, 5
//   0x8011c9e4: addi     r31, r6, -5
//   0x8011c9e8: rlwinm.  r0, r3, 0, 0x18, 0x18
//   0x8011c9ec: beq      0x8011ca44
//   0x8011c9f0: clrlwi   r0, r3, 0x19
//   0x8011c9f4: cmpwi    r31, 0
//   0x8011c9f8: stb      r0, 0x14(r4)
//

// TODO: Full decompilation requires Ghidra
