// Function at 0x800ad550
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800ad550: stwu     r1, -0x20(r1)
//   0x800ad554: mflr     r0
//   0x800ad558: stw      r0, 0x24(r1)
//   0x800ad55c: stw      r31, 0x1c(r1)
//   0x800ad560: stw      r30, 0x18(r1)
//   0x800ad564: stw      r29, 0x14(r1)
//   0x800ad568: mr       r29, r3
//   0x800ad56c: bl       0x8008f220
//   0x800ad570: lwz      r30, 0x238(r29)
//   0x800ad574: addi     r31, r30, 0x10
//   0x800ad578: mr       r3, r31
//   0x800ad57c: bl       0x801a7e44
//   0x800ad580: lwz      r0, 4(r30)
//   0x800ad584: cmpwi    r0, 0
//   0x800ad588: bne      0x800ad598
//   0x800ad58c: mr       r3, r31
//   0x800ad590: bl       0x801a7f20
//   0x800ad594: b        0x800ad5d0
//   0x800ad598: addi     r3, r30, 4
//   0x800ad59c: addi     r4, r29, 0xe0
//

// TODO: Full decompilation requires Ghidra
