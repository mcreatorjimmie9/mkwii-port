// Function at 0x800bd920
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800bd920: stwu     r1, -0x10(r1)
//   0x800bd924: mflr     r0
//   0x800bd928: stw      r0, 0x14(r1)
//   0x800bd92c: stw      r31, 0xc(r1)
//   0x800bd930: bl       0x801a0cf4
//   0x800bd934: mr       r31, r3
//   0x800bd938: bl       0x800bc2d0
//   0x800bd93c: cmpwi    r3, 0
//   0x800bd940: beq      0x800bd95c
//   0x800bd944: lwz      r3, 0(r31)
//   0x800bd948: bl       0x800bc540
//   0x800bd94c: lwz      r12, 0x1cc(r3)
//   0x800bd950: lwz      r3, 0(r31)
//   0x800bd954: mtctr    r12
//   0x800bd958: bctrl    
//   0x800bd95c: lwz      r0, 0x14(r1)
//   0x800bd960: lwz      r31, 0xc(r1)
//   0x800bd964: mtlr     r0
//   0x800bd968: addi     r1, r1, 0x10
//   0x800bd96c: blr      
//

// TODO: Full decompilation requires Ghidra
