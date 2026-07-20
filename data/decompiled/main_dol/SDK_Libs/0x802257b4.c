// Function at 0x802257b4
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802257b4: stwu     r1, -0x10(r1)
//   0x802257b8: mflr     r0
//   0x802257bc: stw      r0, 0x14(r1)
//   0x802257c0: stw      r31, 0xc(r1)
//   0x802257c4: stw      r30, 8(r1)
//   0x802257c8: lwz      r30, 0x24(r3)
//   0x802257cc: cmpwi    r30, 0
//   0x802257d0: bne      0x802257dc
//   0x802257d4: li       r3, 0
//   0x802257d8: b        0x80225830
//   0x802257dc: addi     r3, r30, 4
//   0x802257e0: li       r4, 0
//   0x802257e4: bl       0x800af0e0
//   0x802257e8: cmpwi    r3, 0
//   0x802257ec: mr       r31, r3
//   0x802257f0: bne      0x802257fc
//   0x802257f4: li       r31, 0
//   0x802257f8: b        0x8022582c
//   0x802257fc: lwz      r12, 0x20(r30)
//   0x80225800: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
