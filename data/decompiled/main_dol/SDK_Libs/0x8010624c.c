// Function at 0x8010624c
// Size: 88 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8010624c: stwu     r1, -0x30(r1)
//   0x80106250: mflr     r0
//   0x80106254: stw      r0, 0x34(r1)
//   0x80106258: stw      r31, 0x2c(r1)
//   0x8010625c: lwz      r31, 0(r3)
//   0x80106260: stw      r4, 8(r1)
//   0x80106264: addi     r4, r1, 8
//   0x80106268: lwz      r3, 0x5c8(r31)
//   0x8010626c: bl       0x800f003c
//   0x80106270: cmpwi    r3, 0
//   0x80106274: mr       r4, r3
//   0x80106278: beq      0x80106284
//   0x8010627c: lwz      r3, 0x5c8(r31)
//   0x80106280: bl       0x800eff98
//   0x80106284: lwz      r0, 0x34(r1)
//   0x80106288: lwz      r31, 0x2c(r1)
//   0x8010628c: mtlr     r0
//   0x80106290: addi     r1, r1, 0x30
//   0x80106294: blr      
//   0x80106298: lwz      r3, 0(r3)
//

// TODO: Full decompilation requires Ghidra
