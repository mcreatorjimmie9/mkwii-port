// Function at 0x800b16f0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b16f0: stwu     r1, -0x10(r1)
//   0x800b16f4: mflr     r0
//   0x800b16f8: stw      r0, 0x14(r1)
//   0x800b16fc: stw      r31, 0xc(r1)
//   0x800b1700: stw      r30, 8(r1)
//   0x800b1704: lis      r30, -0x7fd1
//   0x800b1708: addi     r3, r30, -0x3080
//   0x800b170c: addi     r31, r3, 4
//   0x800b1710: mr       r3, r31
//   0x800b1714: bl       0x801a7e44
//   0x800b1718: lbz      r0, -0x3080(r30)
//   0x800b171c: cmpwi    r0, 0
//   0x800b1720: bne      0x800b1730
//   0x800b1724: bl       0x801a1794
//   0x800b1728: li       r0, 1
//   0x800b172c: stb      r0, -0x3080(r30)
//   0x800b1730: mr       r3, r31
//   0x800b1734: bl       0x801a7f20
//   0x800b1738: lwz      r0, 0x14(r1)
//   0x800b173c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
