// Function at 0x802407ac
// Size: 148 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x802407ac: stwu     r1, -0x20(r1)
//   0x802407b0: mflr     r0
//   0x802407b4: stw      r0, 0x24(r1)
//   0x802407b8: stw      r31, 0x1c(r1)
//   0x802407bc: stw      r30, 0x18(r1)
//   0x802407c0: mr       r30, r4
//   0x802407c4: stw      r29, 0x14(r1)
//   0x802407c8: mr       r29, r3
//   0x802407cc: lhz      r0, -0x6c50(r13)
//   0x802407d0: rlwinm.  r5, r0, 0, 0x1a, 0x1a
//   0x802407d4: beq      0x802407f0
//   0x802407d8: lwz      r0, -0x5cb4(r13)
//   0x802407dc: cmpw     r0, r3
//   0x802407e0: bne      0x802407f8
//   0x802407e4: lwz      r0, -0x5cb0(r13)
//   0x802407e8: cmpw     r0, r4
//   0x802407ec: bne      0x802407f8
//   0x802407f0: cmpwi    r5, 0
//   0x802407f4: bne      0x8024081c
//   0x802407f8: mr       r3, r29
//

// TODO: Full decompilation requires Ghidra
