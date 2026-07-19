// Function at 0x80163718
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80163718: stwu     r1, -0x10(r1)
//   0x8016371c: mflr     r0
//   0x80163720: stw      r0, 0x14(r1)
//   0x80163724: stw      r31, 0xc(r1)
//   0x80163728: mr       r31, r3
//   0x8016372c: bl       0x801a650c
//   0x80163730: lwz      r4, 4(r31)
//   0x80163734: lwz      r5, 0(r31)
//   0x80163738: cmpwi    r4, 0
//   0x8016373c: beq      0x80163748
//   0x80163740: cmpwi    r5, 0
//   0x80163744: bne      0x80163754
//   0x80163748: bl       0x801a6534
//   0x8016374c: li       r3, 0
//   0x80163750: b        0x80163764
//   0x80163754: stw      r5, 0(r4)
//   0x80163758: stw      r4, 4(r5)
//   0x8016375c: bl       0x801a6534
//   0x80163760: li       r3, 1
//   0x80163764: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
