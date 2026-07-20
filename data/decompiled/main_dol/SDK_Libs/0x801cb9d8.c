// Function at 0x801cb9d8
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801cb9d8: stwu     r1, -0x10(r1)
//   0x801cb9dc: mflr     r0
//   0x801cb9e0: stw      r0, 0x14(r1)
//   0x801cb9e4: stw      r31, 0xc(r1)
//   0x801cb9e8: lis      r31, -0x7fcb
//   0x801cb9ec: addi     r31, r31, -0x2a0
//   0x801cb9f0: stw      r30, 8(r1)
//   0x801cb9f4: mr       r30, r3
//   0x801cb9f8: lis      r3, -0x7fd6
//   0x801cb9fc: lbz      r5, 0xc(r31)
//   0x801cba00: mr       r4, r30
//   0x801cba04: addi     r3, r3, -0x43f4
//   0x801cba08: crclr    cr1eq
//   0x801cba0c: bl       0x801d092c
//   0x801cba10: lbz      r0, 0xc(r31)
//   0x801cba14: cmpwi    r0, 0
//   0x801cba18: beq      0x801cba38
//   0x801cba1c: cmpwi    r30, 0
//   0x801cba20: bne      0x801cba30
//   0x801cba24: li       r0, 0x17
//

// TODO: Full decompilation requires Ghidra
