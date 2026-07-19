// Function at 0x80243f68
// Size: 64 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243f68: stwu     r1, -0x10(r1)
//   0x80243f6c: mflr     r0
//   0x80243f70: cmpwi    r3, 0
//   0x80243f74: stw      r0, 0x14(r1)
//   0x80243f78: stw      r31, 0xc(r1)
//   0x80243f7c: mr       r31, r3
//   0x80243f80: beq      0x80243f90
//   0x80243f84: cmpwi    r4, 0
//   0x80243f88: ble      0x80243f90
//   0x80243f8c: bl       0x80229a90
//   0x80243f90: mr       r3, r31
//   0x80243f94: lwz      r31, 0xc(r1)
//   0x80243f98: lwz      r0, 0x14(r1)
//   0x80243f9c: mtlr     r0
//   0x80243fa0: addi     r1, r1, 0x10
//   0x80243fa4: blr      
//

// TODO: Full decompilation requires Ghidra
