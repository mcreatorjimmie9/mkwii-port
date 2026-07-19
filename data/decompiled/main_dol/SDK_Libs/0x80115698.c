// Function at 0x80115698
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80115698: stwu     r1, -0x10(r1)
//   0x8011569c: mflr     r0
//   0x801156a0: stw      r0, 0x14(r1)
//   0x801156a4: stw      r31, 0xc(r1)
//   0x801156a8: mr       r31, r3
//   0x801156ac: lwz      r3, 0x1c4(r3)
//   0x801156b0: bl       0x800f2260
//   0x801156b4: addis    r0, r3, 1
//   0x801156b8: stw      r3, 0x1c(r31)
//   0x801156bc: cmplwi   r0, 0xffff
//   0x801156c0: bne      0x801156e0
//   0x801156c4: li       r4, 0
//   0x801156c8: li       r3, 1
//   0x801156cc: li       r0, 4
//   0x801156d0: stw      r4, 0x1c4(r31)
//   0x801156d4: stw      r3, 0x120(r31)
//   0x801156d8: stw      r0, 0x3c(r31)
//   0x801156dc: b        0x80115724
//   0x801156e0: cmpwi    r3, 0
//   0x801156e4: bne      0x80115704
//

// TODO: Full decompilation requires Ghidra
