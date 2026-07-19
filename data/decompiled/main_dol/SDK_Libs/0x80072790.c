// Function at 0x80072790
// Size: 576 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80072790: stwu     r1, -0x10(r1)
//   0x80072794: mflr     r0
//   0x80072798: stw      r0, 0x14(r1)
//   0x8007279c: stw      r31, 0xc(r1)
//   0x800727a0: mr       r31, r3
//   0x800727a4: lwz      r0, 0x124(r3)
//   0x800727a8: cmpwi    r0, 0
//   0x800727ac: beq      0x800727c4
//   0x800727b0: mr       r3, r0
//   0x800727b4: lwz      r12, 0(r3)
//   0x800727b8: lwz      r12, 0x24(r12)
//   0x800727bc: mtctr    r12
//   0x800727c0: bctrl    
//   0x800727c4: lwz      r3, 0x128(r31)
//   0x800727c8: cmpwi    r3, 0
//   0x800727cc: beq      0x800727e0
//   0x800727d0: lwz      r12, 0(r3)
//   0x800727d4: lwz      r12, 0x24(r12)
//   0x800727d8: mtctr    r12
//   0x800727dc: bctrl    
//

// TODO: Full decompilation requires Ghidra
