// Function at 0x800ff7a4
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800ff7a4: stwu     r1, -0x10(r1)
//   0x800ff7a8: mflr     r0
//   0x800ff7ac: cmpwi    r4, 0
//   0x800ff7b0: stw      r0, 0x14(r1)
//   0x800ff7b4: stw      r31, 0xc(r1)
//   0x800ff7b8: mr       r31, r4
//   0x800ff7bc: beq      0x800ff7d8
//   0x800ff7c0: lwz      r3, 0(r4)
//   0x800ff7c4: cmpwi    r3, 0
//   0x800ff7c8: beq      0x800ff7d8
//   0x800ff7cc: lwz      r6, 0xc(r4)
//   0x800ff7d0: cmpwi    r6, 0
//   0x800ff7d4: bne      0x800ff7e0
//   0x800ff7d8: li       r3, 0
//   0x800ff7dc: b        0x800ff810
//   0x800ff7e0: lwz      r0, 8(r4)
//   0x800ff7e4: subf.    r5, r6, r0
//   0x800ff7e8: stw      r5, 8(r4)
//   0x800ff7ec: beq      0x800ff7f8
//   0x800ff7f0: add      r4, r3, r6
//

// TODO: Full decompilation requires Ghidra
