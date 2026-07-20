// Function at 0x800cb740
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x800cb740: stwu     r1, -0x60(r1)
//   0x800cb744: mflr     r0
//   0x800cb748: stw      r0, 0x64(r1)
//   0x800cb74c: stw      r31, 0x5c(r1)
//   0x800cb750: stw      r30, 0x58(r1)
//   0x800cb754: mr       r30, r3
//   0x800cb758: addi     r3, r1, 8
//   0x800cb75c: bl       0x800cb600
//   0x800cb760: cmpwi    r3, 0
//   0x800cb764: mr       r31, r3
//   0x800cb768: bne      0x800cb778
//   0x800cb76c: mr       r3, r30
//   0x800cb770: addi     r4, r1, 8
//   0x800cb774: bl       0x800cadd0
//   0x800cb778: mr       r3, r31
//   0x800cb77c: lwz      r31, 0x5c(r1)
//   0x800cb780: lwz      r30, 0x58(r1)
//   0x800cb784: lwz      r0, 0x64(r1)
//   0x800cb788: mtlr     r0
//   0x800cb78c: addi     r1, r1, 0x60
//

// TODO: Full decompilation requires Ghidra
