// Function at 0x800ec73c
// Size: 104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800ec73c: stwu     r1, -0x10(r1)
//   0x800ec740: mflr     r0
//   0x800ec744: li       r5, 0xc
//   0x800ec748: stw      r0, 0x14(r1)
//   0x800ec74c: stw      r31, 0xc(r1)
//   0x800ec750: mr       r31, r4
//   0x800ec754: li       r4, 0
//   0x800ec758: stw      r30, 8(r1)
//   0x800ec75c: mr       r30, r3
//   0x800ec760: bl       0x80006038
//   0x800ec764: lwz      r0, 0(r30)
//   0x800ec768: stw      r31, 4(r30)
//   0x800ec76c: rlwinm   r0, r0, 0x15, 0xb, 0x1d
//   0x800ec770: ori      r4, r0, 3
//   0x800ec774: rlwinm.  r0, r4, 0, 0, 0xa
//   0x800ec778: bne      0x800ec78c
//   0x800ec77c: lwz      r3, 0(r30)
//   0x800ec780: slwi     r0, r4, 0xb
//   0x800ec784: rlwimi   r0, r3, 0, 0x15, 0x1f
//   0x800ec788: stw      r0, 0(r30)
//

// TODO: Full decompilation requires Ghidra
