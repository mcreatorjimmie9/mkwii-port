// Function at 0x80111750
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80111750: stwu     r1, -0x10(r1)
//   0x80111754: mflr     r0
//   0x80111758: cmpwi    r3, 0
//   0x8011175c: stw      r0, 0x14(r1)
//   0x80111760: stw      r31, 0xc(r1)
//   0x80111764: mr       r31, r3
//   0x80111768: beq      0x8011179c
//   0x8011176c: lwz      r4, 4(r3)
//   0x80111770: cmpwi    r4, 0
//   0x80111774: beq      0x8011179c
//   0x80111778: lwz      r0, 0x1c(r3)
//   0x8011177c: cmpwi    r0, 0
//   0x80111780: bne      0x8011178c
//   0x80111784: mr       r3, r4
//   0x80111788: bl       0x800f37e4
//   0x8011178c: mr       r3, r31
//   0x80111790: li       r4, 0
//   0x80111794: li       r5, 0x24
//   0x80111798: bl       0x80006038
//   0x8011179c: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
