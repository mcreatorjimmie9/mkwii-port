// Function at 0x8023c83c
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023c83c: stwu     r1, -0x10(r1)
//   0x8023c840: mflr     r0
//   0x8023c844: stw      r0, 0x14(r1)
//   0x8023c848: stw      r31, 0xc(r1)
//   0x8023c84c: mr       r31, r3
//   0x8023c850: lhz      r0, 0x10(r3)
//   0x8023c854: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x8023c858: beq      0x8023c8b8
//   0x8023c85c: lwz      r3, 0xc(r3)
//   0x8023c860: bl       0x8023fc04
//   0x8023c864: lhz      r0, 0x10(r31)
//   0x8023c868: rlwinm.  r3, r0, 0, 0x1d, 0x1d
//   0x8023c86c: beq      0x8023c88c
//   0x8023c870: lhz      r0, 0x12(r31)
//   0x8023c874: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x8023c878: bne      0x8023c88c
//   0x8023c87c: lwz      r3, -0x5d18(r13)
//   0x8023c880: lwz      r4, 0xc(r31)
//   0x8023c884: bl       0x80238234
//   0x8023c888: b        0x8023c8b8
//

// TODO: Full decompilation requires Ghidra
