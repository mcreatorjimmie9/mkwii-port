// Function at 0x800a3de0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a3de0: stwu     r1, -0x10(r1)
//   0x800a3de4: mflr     r0
//   0x800a3de8: mr       r7, r6
//   0x800a3dec: li       r6, 0
//   0x800a3df0: stw      r0, 0x14(r1)
//   0x800a3df4: stw      r31, 0xc(r1)
//   0x800a3df8: mr       r31, r4
//   0x800a3dfc: lwz      r12, 0(r3)
//   0x800a3e00: lwz      r12, 0xc(r12)
//   0x800a3e04: mtctr    r12
//   0x800a3e08: bctrl    
//   0x800a3e0c: cmpwi    r3, 0
//   0x800a3e10: beq      0x800a3e18
//   0x800a3e14: b        0x800a3e2c
//   0x800a3e18: lwz      r3, 0(r31)
//   0x800a3e1c: cmpwi    r3, 0
//   0x800a3e20: beq      0x800a3e28
//   0x800a3e24: bl       0x8008e270
//   0x800a3e28: li       r3, 0
//   0x800a3e2c: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
