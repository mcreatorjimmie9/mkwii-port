// Function at 0x801127f8
// Size: 372 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801127f8: stwu     r1, -0x10(r1)
//   0x801127fc: mflr     r0
//   0x80112800: cmpwi    r3, 0
//   0x80112804: stw      r0, 0x14(r1)
//   0x80112808: stw      r31, 0xc(r1)
//   0x8011280c: mr       r31, r3
//   0x80112810: bne      0x8011281c
//   0x80112814: li       r3, 0
//   0x80112818: b        0x80112958
//   0x8011281c: lwz      r0, 0(r3)
//   0x80112820: cmpwi    r0, 0
//   0x80112824: bne      0x80112830
//   0x80112828: li       r3, 0
//   0x8011282c: b        0x80112958
//   0x80112830: lwz      r3, 4(r3)
//   0x80112834: cmpwi    r3, 0
//   0x80112838: bge      0x80112844
//   0x8011283c: li       r3, 0
//   0x80112840: b        0x80112958
//   0x80112844: lwz      r0, -0x6880(r13)
//

// TODO: Full decompilation requires Ghidra
