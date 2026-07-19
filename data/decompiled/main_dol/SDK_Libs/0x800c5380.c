// Function at 0x800c5380
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x800c5380: stwu     r1, -0x60(r1)
//   0x800c5384: mflr     r0
//   0x800c5388: stw      r0, 0x64(r1)
//   0x800c538c: stw      r31, 0x5c(r1)
//   0x800c5390: stw      r30, 0x58(r1)
//   0x800c5394: bl       0x800bc360
//   0x800c5398: mr       r30, r3
//   0x800c539c: bl       0x800bc3e0
//   0x800c53a0: cmpwi    r3, 0
//   0x800c53a4: bne      0x800c541c
//   0x800c53a8: lwz      r31, 0x24(r30)
//   0x800c53ac: bl       0x800c7730
//   0x800c53b0: lhz      r0, 0x30(r30)
//   0x800c53b4: mulli    r0, r0, 0xc
//   0x800c53b8: add      r4, r3, r0
//   0x800c53bc: addi     r3, r31, 0x18
//   0x800c53c0: addi     r4, r4, 8
//   0x800c53c4: bl       0x800c7250
//   0x800c53c8: cmpwi    r3, 0
//   0x800c53cc: beq      0x800c541c
//

// TODO: Full decompilation requires Ghidra
