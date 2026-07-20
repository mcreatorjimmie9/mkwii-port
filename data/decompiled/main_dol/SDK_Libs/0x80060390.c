// Function at 0x80060390
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80060390: stwu     r1, -0x10(r1)
//   0x80060394: mflr     r0
//   0x80060398: mr       r6, r3
//   0x8006039c: stw      r0, 0x14(r1)
//   0x800603a0: stw      r31, 0xc(r1)
//   0x800603a4: lwz      r31, 4(r3)
//   0x800603a8: cmpwi    r31, 0
//   0x800603ac: beq      0x800603d0
//   0x800603b0: lwz      r12, 0(r31)
//   0x800603b4: lis      r4, 1
//   0x800603b8: mr       r3, r31
//   0x800603bc: li       r5, 0
//   0x800603c0: lwz      r12, 0xc(r12)
//   0x800603c4: addi     r4, r4, 1
//   0x800603c8: mtctr    r12
//   0x800603cc: bctrl    
//   0x800603d0: mr       r3, r31
//   0x800603d4: lwz      r31, 0xc(r1)
//   0x800603d8: lwz      r0, 0x14(r1)
//   0x800603dc: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
