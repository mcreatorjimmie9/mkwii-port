// Function at 0x8020c590
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c590: stwu     r1, -0x10(r1)
//   0x8020c594: mflr     r0
//   0x8020c598: stw      r0, 0x14(r1)
//   0x8020c59c: stw      r31, 0xc(r1)
//   0x8020c5a0: stw      r30, 8(r1)
//   0x8020c5a4: mr       r30, r4
//   0x8020c5a8: bl       0x80208e38
//   0x8020c5ac: cmpwi    r3, 0
//   0x8020c5b0: li       r31, -1
//   0x8020c5b4: beq      0x8020c5f0
//   0x8020c5b8: lwz      r4, 0(r3)
//   0x8020c5bc: cmpwi    r4, 0
//   0x8020c5c0: beq      0x8020c5f0
//   0x8020c5c4: lwz      r0, 8(r4)
//   0x8020c5c8: cmpwi    r0, 0
//   0x8020c5cc: bne      0x8020c5ec
//   0x8020c5d0: bl       0x80208e64
//   0x8020c5d4: cmpwi    r3, -1
//   0x8020c5d8: beq      0x8020c5f0
//   0x8020c5dc: mr       r4, r30
//

// TODO: Full decompilation requires Ghidra
