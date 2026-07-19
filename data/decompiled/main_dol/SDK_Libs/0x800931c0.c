// Function at 0x800931c0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800931c0: stwu     r1, -0x10(r1)
//   0x800931c4: mflr     r0
//   0x800931c8: stw      r0, 0x14(r1)
//   0x800931cc: stw      r31, 0xc(r1)
//   0x800931d0: mr       r31, r3
//   0x800931d4: bl       0x80088750
//   0x800931d8: bl       0x80089000
//   0x800931dc: addi     r3, r3, -2
//   0x800931e0: lwz      r0, 0x10(r31)
//   0x800931e4: cntlzw   r3, r3
//   0x800931e8: srwi     r3, r3, 5
//   0x800931ec: cmpw     r0, r3
//   0x800931f0: beq      0x8009321c
//   0x800931f4: lwz      r12, 0(r31)
//   0x800931f8: mr       r3, r31
//   0x800931fc: lwz      r12, 0x10(r12)
//   0x80093200: mtctr    r12
//   0x80093204: bctrl    
//   0x80093208: lwz      r12, 0(r31)
//   0x8009320c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
