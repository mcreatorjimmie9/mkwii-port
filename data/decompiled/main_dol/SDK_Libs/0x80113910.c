// Function at 0x80113910
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80113910: stwu     r1, -0x10(r1)
//   0x80113914: mflr     r0
//   0x80113918: stw      r0, 0x14(r1)
//   0x8011391c: stw      r31, 0xc(r1)
//   0x80113920: mr       r31, r3
//   0x80113924: lwz      r0, 0(r3)
//   0x80113928: cmpwi    r0, 3
//   0x8011392c: beq      0x80113938
//   0x80113930: lwz      r3, 4(r3)
//   0x80113934: bl       0x800f37e4
//   0x80113938: lwz      r0, 0(r31)
//   0x8011393c: cmpwi    r0, 0
//   0x80113940: bne      0x80113950
//   0x80113944: lwz      r3, 8(r31)
//   0x80113948: bl       0x800f37e4
//   0x8011394c: b        0x801139a0
//   0x80113950: cmpwi    r0, 1
//   0x80113954: bne      0x80113974
//   0x80113958: lwz      r3, 8(r31)
//   0x8011395c: bl       0x800f37e4
//

// TODO: Full decompilation requires Ghidra
