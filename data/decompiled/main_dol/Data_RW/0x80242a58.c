// Function at 0x80242a58
// Size: 192 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242a58: stwu     r1, -0x10(r1)
//   0x80242a5c: mflr     r0
//   0x80242a60: stw      r0, 0x14(r1)
//   0x80242a64: stw      r31, 0xc(r1)
//   0x80242a68: stw      r30, 8(r1)
//   0x80242a6c: mr       r30, r3
//   0x80242a70: bl       0x80229750
//   0x80242a74: lwz      r12, 0(r30)
//   0x80242a78: mr       r31, r3
//   0x80242a7c: mr       r3, r30
//   0x80242a80: li       r4, -1
//   0x80242a84: lwz      r12, 8(r12)
//   0x80242a88: mtctr    r12
//   0x80242a8c: bctrl    
//   0x80242a90: cmpwi    r31, 0
//   0x80242a94: beq      0x80242ab0
//   0x80242a98: lwz      r12, 0(r31)
//   0x80242a9c: mr       r3, r31
//   0x80242aa0: mr       r4, r30
//   0x80242aa4: lwz      r12, 0x18(r12)
//

// TODO: Full decompilation requires Ghidra
