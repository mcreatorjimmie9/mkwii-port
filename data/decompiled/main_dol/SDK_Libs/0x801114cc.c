// Function at 0x801114cc
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801114cc: stwu     r1, -0x10(r1)
//   0x801114d0: mflr     r0
//   0x801114d4: stw      r0, 0x14(r1)
//   0x801114d8: stw      r31, 0xc(r1)
//   0x801114dc: lis      r31, -0x7fd8
//   0x801114e0: addi     r31, r31, -0x7040
//   0x801114e4: stw      r30, 8(r1)
//   0x801114e8: mr       r30, r3
//   0x801114ec: lwz      r4, 0x7c(r31)
//   0x801114f0: bl       0x8001273c
//   0x801114f4: cmpwi    r3, 0
//   0x801114f8: beq      0x80111510
//   0x801114fc: lwz      r4, 0x80(r31)
//   0x80111500: mr       r3, r30
//   0x80111504: bl       0x8001273c
//   0x80111508: cmpwi    r3, 0
//   0x8011150c: bne      0x80111518
//   0x80111510: li       r3, 1
//   0x80111514: b        0x8011151c
//   0x80111518: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
