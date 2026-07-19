// Function at 0x8023c518
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023c518: stwu     r1, -0x10(r1)
//   0x8023c51c: mflr     r0
//   0x8023c520: stw      r0, 0x14(r1)
//   0x8023c524: stw      r31, 0xc(r1)
//   0x8023c528: mr       r31, r3
//   0x8023c52c: lhz      r0, 0x10(r3)
//   0x8023c530: rlwinm.  r0, r0, 0, 0x1b, 0x1b
//   0x8023c534: beq      0x8023c540
//   0x8023c538: lwz      r3, 0(r3)
//   0x8023c53c: bl       0x8006f4f0
//   0x8023c540: lwz      r12, 0xb4(r31)
//   0x8023c544: mr       r3, r31
//   0x8023c548: lwz      r12, 0x1c(r12)
//   0x8023c54c: mtctr    r12
//   0x8023c550: bctrl    
//   0x8023c554: lwz      r0, 0x14(r1)
//   0x8023c558: lwz      r31, 0xc(r1)
//   0x8023c55c: mtlr     r0
//   0x8023c560: addi     r1, r1, 0x10
//   0x8023c564: blr      
//

// TODO: Full decompilation requires Ghidra
