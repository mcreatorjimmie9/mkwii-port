// Function at 0x8023c734
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023c734: stwu     r1, -0x10(r1)
//   0x8023c738: mflr     r0
//   0x8023c73c: stw      r0, 0x14(r1)
//   0x8023c740: stw      r31, 0xc(r1)
//   0x8023c744: mr       r31, r3
//   0x8023c748: lhz      r0, 0x10(r3)
//   0x8023c74c: rlwinm.  r0, r0, 0, 0x14, 0x14
//   0x8023c750: beq      0x8023c764
//   0x8023c754: li       r4, 1
//   0x8023c758: bl       0x8023cb54
//   0x8023c75c: lwz      r3, 0(r31)
//   0x8023c760: bl       0x8006fb80
//   0x8023c764: lwz      r12, 0xb4(r31)
//   0x8023c768: mr       r3, r31
//   0x8023c76c: lwz      r12, 0x30(r12)
//   0x8023c770: mtctr    r12
//   0x8023c774: bctrl    
//   0x8023c778: lwz      r0, 0x14(r1)
//   0x8023c77c: lwz      r31, 0xc(r1)
//   0x8023c780: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
