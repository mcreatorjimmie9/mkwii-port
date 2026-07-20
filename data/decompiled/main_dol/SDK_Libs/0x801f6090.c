// Function at 0x801f6090
// Size: 624 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f6090: stwu     r1, -0x10(r1)
//   0x801f6094: mflr     r0
//   0x801f6098: stw      r0, 0x14(r1)
//   0x801f609c: stw      r31, 0xc(r1)
//   0x801f60a0: mr       r31, r3
//   0x801f60a4: lwz      r4, 0x15dc(r3)
//   0x801f60a8: bl       0x801f5944
//   0x801f60ac: cmpwi    r3, 0
//   0x801f60b0: beq      0x801f60b8
//   0x801f60b4: b        0x801f60d4
//   0x801f60b8: lwz      r4, 0x15e0(r31)
//   0x801f60bc: mr       r3, r31
//   0x801f60c0: bl       0x801f5944
//   0x801f60c4: neg      r0, r3
//   0x801f60c8: or       r0, r0, r3
//   0x801f60cc: srawi    r0, r0, 0x1f
//   0x801f60d0: and      r3, r3, r0
//   0x801f60d4: lwz      r0, 0x14(r1)
//   0x801f60d8: lwz      r31, 0xc(r1)
//   0x801f60dc: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
