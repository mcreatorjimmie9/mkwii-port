// Function at 0x8011296c
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8011296c: stwu     r1, -0x10(r1)
//   0x80112970: mflr     r0
//   0x80112974: stw      r0, 0x14(r1)
//   0x80112978: stw      r31, 0xc(r1)
//   0x8011297c: mr       r31, r3
//   0x80112980: bl       0x80111f94
//   0x80112984: cmpwi    r31, 0
//   0x80112988: blt      0x80112998
//   0x8011298c: lwz      r0, -0x6880(r13)
//   0x80112990: cmpw     r31, r0
//   0x80112994: blt      0x801129a4
//   0x80112998: bl       0x80111f98
//   0x8011299c: li       r3, 0
//   0x801129a0: b        0x801129c8
//   0x801129a4: lwz      r3, -0x687c(r13)
//   0x801129a8: slwi     r0, r31, 2
//   0x801129ac: lwzx     r31, r3, r0
//   0x801129b0: lwz      r0, 0(r31)
//   0x801129b4: cmpwi    r0, 0
//   0x801129b8: bne      0x801129c0
//

// TODO: Full decompilation requires Ghidra
