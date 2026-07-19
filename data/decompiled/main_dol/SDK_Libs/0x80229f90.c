// Function at 0x80229f90
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80229f90: stwu     r1, -0x10(r1)
//   0x80229f94: mflr     r0
//   0x80229f98: stw      r0, 0x14(r1)
//   0x80229f9c: stw      r31, 0xc(r1)
//   0x80229fa0: stw      r30, 8(r1)
//   0x80229fa4: mr       r30, r4
//   0x80229fa8: li       r4, 0
//   0x80229fac: lwz      r31, 0xf0(r3)
//   0x80229fb0: mr       r3, r30
//   0x80229fb4: bl       0x802290f8
//   0x80229fb8: lhz      r0, -0x6c50(r13)
//   0x80229fbc: rlwinm   r0, r0, 0, 0x1a, 0x18
//   0x80229fc0: sth      r0, -0x6c50(r13)
//   0x80229fc4: lwz      r3, 0(r31)
//   0x80229fc8: lhz      r4, 8(r31)
//   0x80229fcc: lwz      r12, 8(r3)
//   0x80229fd0: lwz      r12, 8(r12)
//   0x80229fd4: mtctr    r12
//   0x80229fd8: bctrl    
//   0x80229fdc: bl       0x8024072c
//

// TODO: Full decompilation requires Ghidra
