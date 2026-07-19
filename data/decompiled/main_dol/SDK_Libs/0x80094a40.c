// Function at 0x80094a40
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80094a40: stwu     r1, -0x10(r1)
//   0x80094a44: mflr     r0
//   0x80094a48: stw      r0, 0x14(r1)
//   0x80094a4c: stw      r31, 0xc(r1)
//   0x80094a50: mr       r31, r3
//   0x80094a54: bl       0x80088750
//   0x80094a58: bl       0x80089000
//   0x80094a5c: addi     r3, r3, -2
//   0x80094a60: lwz      r0, 0x10(r31)
//   0x80094a64: cntlzw   r3, r3
//   0x80094a68: srwi     r3, r3, 5
//   0x80094a6c: cmpw     r0, r3
//   0x80094a70: beq      0x80094a9c
//   0x80094a74: lwz      r12, 0(r31)
//   0x80094a78: mr       r3, r31
//   0x80094a7c: lwz      r12, 0x10(r12)
//   0x80094a80: mtctr    r12
//   0x80094a84: bctrl    
//   0x80094a88: lwz      r12, 0(r31)
//   0x80094a8c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
