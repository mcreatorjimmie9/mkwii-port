// Function at 0x800a2d10
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a2d10: stwu     r1, -0x10(r1)
//   0x800a2d14: mflr     r0
//   0x800a2d18: stw      r0, 0x14(r1)
//   0x800a2d1c: stw      r31, 0xc(r1)
//   0x800a2d20: mr       r31, r3
//   0x800a2d24: stw      r4, 0(r3)
//   0x800a2d28: mr       r3, r4
//   0x800a2d2c: bl       0x8008f7f0
//   0x800a2d30: cmpwi    r3, 0
//   0x800a2d34: beq      0x800a2d40
//   0x800a2d38: lwz      r3, 0(r31)
//   0x800a2d3c: bl       0x8008f820
//   0x800a2d40: lwz      r3, 0(r31)
//   0x800a2d44: lwz      r12, 0(r3)
//   0x800a2d48: lwz      r12, 0x18(r12)
//   0x800a2d4c: mtctr    r12
//   0x800a2d50: bctrl    
//   0x800a2d54: cmpwi    r3, 0
//   0x800a2d58: beq      0x800a2d70
//   0x800a2d5c: lwz      r3, 0(r31)
//

// TODO: Full decompilation requires Ghidra
