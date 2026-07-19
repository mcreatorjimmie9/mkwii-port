// Function at 0x8023c694
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023c694: stwu     r1, -0x10(r1)
//   0x8023c698: mflr     r0
//   0x8023c69c: stw      r0, 0x14(r1)
//   0x8023c6a0: stw      r31, 0xc(r1)
//   0x8023c6a4: mr       r31, r3
//   0x8023c6a8: lwz      r12, 0xb4(r3)
//   0x8023c6ac: lwz      r12, 0x2c(r12)
//   0x8023c6b0: mtctr    r12
//   0x8023c6b4: bctrl    
//   0x8023c6b8: lhz      r4, 0x10(r31)
//   0x8023c6bc: li       r3, 0
//   0x8023c6c0: rlwinm.  r0, r4, 0, 0x17, 0x17
//   0x8023c6c4: beq      0x8023c6d8
//   0x8023c6c8: lhz      r0, 0x12(r31)
//   0x8023c6cc: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x8023c6d0: beq      0x8023c6d8
//   0x8023c6d4: li       r3, 1
//   0x8023c6d8: cmpwi    r3, 0
//   0x8023c6dc: beq      0x8023c6f0
//   0x8023c6e0: rlwinm.  r0, r4, 0, 0x10, 0x10
//

// TODO: Full decompilation requires Ghidra
