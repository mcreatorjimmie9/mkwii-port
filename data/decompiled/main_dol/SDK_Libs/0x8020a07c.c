// Function at 0x8020a07c
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020a07c: stwu     r1, -0x10(r1)
//   0x8020a080: mflr     r0
//   0x8020a084: stw      r0, 0x14(r1)
//   0x8020a088: stw      r31, 0xc(r1)
//   0x8020a08c: mr       r31, r4
//   0x8020a090: stw      r30, 8(r1)
//   0x8020a094: mr       r30, r3
//   0x8020a098: lwz      r0, -0x5ea0(r13)
//   0x8020a09c: cmplw    r3, r0
//   0x8020a0a0: bge      0x8020a0bc
//   0x8020a0a4: lwz      r4, -0x5e90(r13)
//   0x8020a0a8: cmpwi    r4, 0
//   0x8020a0ac: beq      0x8020a0bc
//   0x8020a0b0: mulli    r0, r3, 0x140
//   0x8020a0b4: add      r3, r4, r0
//   0x8020a0b8: b        0x8020a0c0
//   0x8020a0bc: li       r3, 0
//   0x8020a0c0: cmpwi    r3, 0
//   0x8020a0c4: beq      0x8020a100
//   0x8020a0c8: lbz      r0, 0x14(r3)
//

// TODO: Full decompilation requires Ghidra
