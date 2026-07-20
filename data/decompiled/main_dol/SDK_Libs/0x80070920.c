// Function at 0x80070920
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80070920: stwu     r1, -0x20(r1)
//   0x80070924: mflr     r0
//   0x80070928: stw      r0, 0x24(r1)
//   0x8007092c: stfd     f31, 0x18(r1)
//   0x80070930: stw      r31, 0x14(r1)
//   0x80070934: mr       r31, r3
//   0x80070938: lbz      r0, 0xd1(r3)
//   0x8007093c: lbz      r5, 0xd1(r4)
//   0x80070940: cmpw     r0, r5
//   0x80070944: bne      0x80070984
//   0x80070948: lwz      r12, 0(r4)
//   0x8007094c: mr       r3, r4
//   0x80070950: lwz      r12, 0x2c(r12)
//   0x80070954: mtctr    r12
//   0x80070958: bctrl    
//   0x8007095c: lwz      r12, 0(r31)
//   0x80070960: fmr      f31, f1
//   0x80070964: mr       r3, r31
//   0x80070968: lwz      r12, 0x2c(r12)
//   0x8007096c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
