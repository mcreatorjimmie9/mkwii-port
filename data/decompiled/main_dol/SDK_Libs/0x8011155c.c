// Function at 0x8011155c
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8011155c: stwu     r1, -0x10(r1)
//   0x80111560: mflr     r0
//   0x80111564: cmpwi    r3, 0
//   0x80111568: stw      r0, 0x14(r1)
//   0x8011156c: stw      r31, 0xc(r1)
//   0x80111570: stw      r30, 8(r1)
//   0x80111574: mr       r30, r3
//   0x80111578: bne      0x80111584
//   0x8011157c: li       r3, 0
//   0x80111580: b        0x801115c4
//   0x80111584: cmpwi    r4, 0
//   0x80111588: bgt      0x80111594
//   0x8011158c: li       r3, 0
//   0x80111590: b        0x801115c4
//   0x80111594: lwz      r0, 8(r3)
//   0x80111598: lwz      r3, 4(r3)
//   0x8011159c: add      r31, r0, r4
//   0x801115a0: mr       r4, r31
//   0x801115a4: bl       0x800f37d0
//   0x801115a8: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
