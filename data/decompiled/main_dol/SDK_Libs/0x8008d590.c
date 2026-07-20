// Function at 0x8008d590
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008d590: stwu     r1, -0x10(r1)
//   0x8008d594: mflr     r0
//   0x8008d598: stw      r0, 0x14(r1)
//   0x8008d59c: stw      r31, 0xc(r1)
//   0x8008d5a0: mr       r31, r6
//   0x8008d5a4: stw      r30, 8(r1)
//   0x8008d5a8: mr       r30, r3
//   0x8008d5ac: lwz      r0, 0(r3)
//   0x8008d5b0: cmpwi    r0, 0
//   0x8008d5b4: bne      0x8008d5c0
//   0x8008d5b8: li       r3, 0
//   0x8008d5bc: b        0x8008d684
//   0x8008d5c0: cmpwi    r4, 0
//   0x8008d5c4: blt      0x8008d5d8
//   0x8008d5c8: lwz      r6, 4(r3)
//   0x8008d5cc: lwz      r0, 8(r6)
//   0x8008d5d0: cmpw     r4, r0
//   0x8008d5d4: blt      0x8008d5e0
//   0x8008d5d8: li       r3, 0
//   0x8008d5dc: b        0x8008d684
//

// TODO: Full decompilation requires Ghidra
