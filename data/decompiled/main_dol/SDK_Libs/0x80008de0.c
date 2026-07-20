// Function at 0x80008de0
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80008de0: stwu     r1, -0x10(r1)
//   0x80008de4: mflr     r0
//   0x80008de8: stw      r0, 0x14(r1)
//   0x80008dec: stw      r31, 0xc(r1)
//   0x80008df0: mr       r31, r3
//   0x80008df4: bl       0x8000b5b4
//   0x80008df8: addi     r3, r31, 0x54
//   0x80008dfc: bl       0x800080b4
//   0x80008e00: lwz      r3, -0x6c38(r13)
//   0x80008e04: lwz      r3, 0x40(r3)
//   0x80008e08: cmpwi    r3, 0
//   0x80008e0c: beq      0x80008e20
//   0x80008e10: lwz      r12, 0(r3)
//   0x80008e14: lwz      r12, 0xc(r12)
//   0x80008e18: mtctr    r12
//   0x80008e1c: bctrl    
//   0x80008e20: lwz      r0, 0x14(r1)
//   0x80008e24: lwz      r31, 0xc(r1)
//   0x80008e28: mtlr     r0
//   0x80008e2c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
