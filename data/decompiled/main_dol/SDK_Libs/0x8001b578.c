// Function at 0x8001b578
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8001b578: stwu     r1, -0x10(r1)
//   0x8001b57c: mflr     r0
//   0x8001b580: stw      r0, 0x14(r1)
//   0x8001b584: stw      r31, 0xc(r1)
//   0x8001b588: mr       r31, r4
//   0x8001b58c: stw      r30, 8(r1)
//   0x8001b590: mr       r30, r3
//   0x8001b594: lwz      r0, -0x6bc0(r13)
//   0x8001b598: cmpwi    r0, 0
//   0x8001b59c: bne      0x8001b5c8
//   0x8001b5a0: li       r3, -0x2711
//   0x8001b5a4: b        0x8001b5d4
//   0x8001b5a8: b        0x8001b5c8
//   0x8001b5ac: mr       r3, r30
//   0x8001b5b0: mr       r4, r31
//   0x8001b5b4: bl       0x80021264
//   0x8001b5b8: cmpwi    r3, 0
//   0x8001b5bc: beq      0x8001b5d0
//   0x8001b5c0: add      r30, r30, r3
//   0x8001b5c4: subf     r31, r3, r31
//

// TODO: Full decompilation requires Ghidra
