// Function at 0x80058d90
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80058d90: stwu     r1, -0x20(r1)
//   0x80058d94: mflr     r0
//   0x80058d98: stw      r0, 0x24(r1)
//   0x80058d9c: stfd     f31, 0x18(r1)
//   0x80058da0: fmr      f31, f1
//   0x80058da4: stw      r31, 0x14(r1)
//   0x80058da8: li       r31, 0
//   0x80058dac: stw      r30, 0x10(r1)
//   0x80058db0: li       r30, 0
//   0x80058db4: stw      r29, 0xc(r1)
//   0x80058db8: mr       r29, r3
//   0x80058dbc: b        0x80058dec
//   0x80058dc0: lwz      r3, 0x1c(r29)
//   0x80058dc4: lwzx     r3, r3, r31
//   0x80058dc8: cmpwi    r3, 0
//   0x80058dcc: beq      0x80058de4
//   0x80058dd0: lwz      r12, 0(r3)
//   0x80058dd4: fmr      f1, f31
//   0x80058dd8: lwz      r12, 0x28(r12)
//   0x80058ddc: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
