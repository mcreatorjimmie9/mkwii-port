// Function at 0x8010982c
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010982c: stwu     r1, -0x20(r1)
//   0x80109830: mflr     r0
//   0x80109834: cmpwi    r4, 0
//   0x80109838: stw      r0, 0x24(r1)
//   0x8010983c: stw      r31, 0x1c(r1)
//   0x80109840: mr       r31, r5
//   0x80109844: stw      r30, 0x18(r1)
//   0x80109848: mr       r30, r4
//   0x8010984c: stw      r29, 0x14(r1)
//   0x80109850: mr       r29, r3
//   0x80109854: beq      0x8010989c
//   0x80109858: cmpwi    r5, 0
//   0x8010985c: bne      0x80109864
//   0x80109860: b        0x8010989c
//   0x80109864: cmpwi    r5, -1
//   0x80109868: bne      0x80109878
//   0x8010986c: mr       r3, r30
//   0x80109870: bl       0x800206f4
//   0x80109874: mr       r31, r3
//   0x80109878: lwz      r3, 0(r29)
//

// TODO: Full decompilation requires Ghidra
