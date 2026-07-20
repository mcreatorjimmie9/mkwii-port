// Function at 0x80050790
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80050790: stwu     r1, -0x10(r1)
//   0x80050794: mflr     r0
//   0x80050798: lwz      r5, 0(r3)
//   0x8005079c: stw      r0, 0x14(r1)
//   0x800507a0: stw      r31, 0xc(r1)
//   0x800507a4: mr       r31, r4
//   0x800507a8: lwz      r3, 0(r5)
//   0x800507ac: stw      r3, 0(r4)
//   0x800507b0: cmpwi    r3, 0
//   0x800507b4: beq      0x80050800
//   0x800507b8: rlwinm.  r0, r3, 0, 0x18, 0x1d
//   0x800507bc: bne      0x800507d4
//   0x800507c0: addi     r3, r4, 4
//   0x800507c4: addi     r4, r5, 4
//   0x800507c8: li       r5, 0x20
//   0x800507cc: bl       0x80060da0
//   0x800507d0: b        0x80050800
//   0x800507d4: rlwinm.  r0, r3, 0, 0x18, 0x1a
//   0x800507d8: bne      0x800507f0
//   0x800507dc: addi     r3, r4, 4
//

// TODO: Full decompilation requires Ghidra
