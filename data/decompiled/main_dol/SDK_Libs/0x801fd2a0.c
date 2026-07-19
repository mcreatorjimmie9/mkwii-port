// Function at 0x801fd2a0
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801fd2a0: stwu     r1, -0x10(r1)
//   0x801fd2a4: mflr     r0
//   0x801fd2a8: li       r5, 0
//   0x801fd2ac: stw      r0, 0x14(r1)
//   0x801fd2b0: lwz      r0, 0x1c(r3)
//   0x801fd2b4: cmpwi    r0, 2
//   0x801fd2b8: beq      0x801fd2c4
//   0x801fd2bc: li       r3, 0xc
//   0x801fd2c0: b        0x801fd2ec
//   0x801fd2c4: lhz      r4, 0x1864(r3)
//   0x801fd2c8: rlwinm.  r0, r4, 0, 0x1e, 0x1e
//   0x801fd2cc: bne      0x801fd2d8
//   0x801fd2d0: li       r3, 0x24
//   0x801fd2d4: b        0x801fd2ec
//   0x801fd2d8: rlwinm.  r0, r4, 0, 0x1d, 0x1d
//   0x801fd2dc: beq      0x801fd2e8
//   0x801fd2e0: bl       0x801effc4
//   0x801fd2e4: mr       r5, r3
//   0x801fd2e8: mr       r3, r5
//   0x801fd2ec: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
