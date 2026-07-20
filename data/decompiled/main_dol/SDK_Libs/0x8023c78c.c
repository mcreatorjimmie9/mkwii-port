// Function at 0x8023c78c
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023c78c: stwu     r1, -0x10(r1)
//   0x8023c790: mflr     r0
//   0x8023c794: stw      r0, 0x14(r1)
//   0x8023c798: stw      r31, 0xc(r1)
//   0x8023c79c: mr       r31, r3
//   0x8023c7a0: lhz      r0, 0x10(r3)
//   0x8023c7a4: rlwinm.  r0, r0, 0, 0x13, 0x13
//   0x8023c7a8: beq      0x8023c7bc
//   0x8023c7ac: li       r4, 0
//   0x8023c7b0: bl       0x8023cb54
//   0x8023c7b4: lwz      r3, 0(r31)
//   0x8023c7b8: bl       0x8006fc00
//   0x8023c7bc: lwz      r12, 0xb4(r31)
//   0x8023c7c0: mr       r3, r31
//   0x8023c7c4: lwz      r12, 0x34(r12)
//   0x8023c7c8: mtctr    r12
//   0x8023c7cc: bctrl    
//   0x8023c7d0: lwz      r0, 0x14(r1)
//   0x8023c7d4: lwz      r31, 0xc(r1)
//   0x8023c7d8: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
