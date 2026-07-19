// Function at 0x80112c74
// Size: 300 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80112c74: stwu     r1, -0x10(r1)
//   0x80112c78: mflr     r0
//   0x80112c7c: stw      r0, 0x14(r1)
//   0x80112c80: stw      r31, 0xc(r1)
//   0x80112c84: stw      r30, 8(r1)
//   0x80112c88: mr       r30, r4
//   0x80112c8c: bl       0x8011296c
//   0x80112c90: cmpwi    r3, 0
//   0x80112c94: mr       r31, r3
//   0x80112c98: bne      0x80112ca4
//   0x80112c9c: li       r3, 0
//   0x80112ca0: b        0x80112d88
//   0x80112ca4: cmpwi    r30, 4
//   0x80112ca8: bne      0x80112cb0
//   0x80112cac: li       r30, 3
//   0x80112cb0: lwz      r0, 0x194(r3)
//   0x80112cb4: cmpw     cr1, r0, r30
//   0x80112cb8: bne      cr1, 0x80112cc4
//   0x80112cbc: li       r3, 1
//   0x80112cc0: b        0x80112d88
//

// TODO: Full decompilation requires Ghidra
