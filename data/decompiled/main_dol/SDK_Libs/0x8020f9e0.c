// Function at 0x8020f9e0
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8020f9e0: stwu     r1, -0x20(r1)
//   0x8020f9e4: mflr     r0
//   0x8020f9e8: stw      r0, 0x24(r1)
//   0x8020f9ec: stw      r31, 0x1c(r1)
//   0x8020f9f0: li       r31, 0
//   0x8020f9f4: stw      r30, 0x18(r1)
//   0x8020f9f8: mr       r30, r5
//   0x8020f9fc: lwz      r0, 0x10(r3)
//   0x8020fa00: cmpwi    r0, 1
//   0x8020fa04: bne      0x8020fa58
//   0x8020fa08: addi     r3, r3, 0x18
//   0x8020fa0c: addi     r5, r1, 8
//   0x8020fa10: bl       0x801247a4
//   0x8020fa14: neg      r0, r3
//   0x8020fa18: or       r0, r0, r3
//   0x8020fa1c: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8020fa20: beq      0x8020fa50
//   0x8020fa24: addi     r3, r1, 8
//   0x8020fa28: bl       0x80124c20
//   0x8020fa2c: cmpwi    r30, 0
//

// TODO: Full decompilation requires Ghidra
