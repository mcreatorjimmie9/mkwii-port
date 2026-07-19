// Function at 0x801dd9cc
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801dd9cc: stwu     r1, -0x10(r1)
//   0x801dd9d0: mflr     r0
//   0x801dd9d4: stw      r0, 0x14(r1)
//   0x801dd9d8: stw      r31, 0xc(r1)
//   0x801dd9dc: mr       r31, r3
//   0x801dd9e0: lwz      r6, 4(r3)
//   0x801dd9e4: rlwinm.  r0, r6, 0, 0x17, 0x17
//   0x801dd9e8: beq      0x801dd9f4
//   0x801dd9ec: rlwinm.  r0, r6, 0, 0x16, 0x16
//   0x801dd9f0: beq      0x801dd9fc
//   0x801dd9f4: li       r3, -7
//   0x801dd9f8: b        0x801dda80
//   0x801dd9fc: cmpwi    r4, 0
//   0x801dda00: beq      0x801dda10
//   0x801dda04: lbz      r0, 0(r4)
//   0x801dda08: extsb.   r0, r0
//   0x801dda0c: bne      0x801dda18
//   0x801dda10: li       r3, -5
//   0x801dda14: b        0x801dda80
//   0x801dda18: rlwinm.  r0, r6, 0, 0x1e, 0x1e
//

// TODO: Full decompilation requires Ghidra
