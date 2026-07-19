// Function at 0x801060b8
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801060b8: stwu     r1, -0x30(r1)
//   0x801060bc: mflr     r0
//   0x801060c0: stw      r0, 0x34(r1)
//   0x801060c4: stw      r31, 0x2c(r1)
//   0x801060c8: mr       r31, r5
//   0x801060cc: lwz      r3, 0(r3)
//   0x801060d0: stw      r4, 8(r1)
//   0x801060d4: addi     r4, r1, 8
//   0x801060d8: lwz      r3, 0x5c8(r3)
//   0x801060dc: bl       0x800f003c
//   0x801060e0: cmpwi    r31, 0
//   0x801060e4: beq      0x801060ec
//   0x801060e8: stw      r3, 0(r31)
//   0x801060ec: neg      r0, r3
//   0x801060f0: lwz      r31, 0x2c(r1)
//   0x801060f4: or       r0, r0, r3
//   0x801060f8: srwi     r3, r0, 0x1f
//   0x801060fc: lwz      r0, 0x34(r1)
//   0x80106100: mtlr     r0
//   0x80106104: addi     r1, r1, 0x30
//

// TODO: Full decompilation requires Ghidra
