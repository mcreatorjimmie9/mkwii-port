// Function at 0x8000980c
// Size: 384 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000980c: stwu     r1, -0x10(r1)
//   0x80009810: mflr     r0
//   0x80009814: stw      r0, 0x14(r1)
//   0x80009818: stw      r31, 0xc(r1)
//   0x8000981c: stw      r30, 8(r1)
//   0x80009820: mr       r30, r3
//   0x80009824: lwz      r0, 0x24(r3)
//   0x80009828: cmpwi    r0, 0
//   0x8000982c: beq      0x8000992c
//   0x80009830: mr       r3, r0
//   0x80009834: lwz      r12, 0(r3)
//   0x80009838: lwz      r12, 0x18(r12)
//   0x8000983c: mtctr    r12
//   0x80009840: bctrl    
//   0x80009844: cmpwi    r3, 0
//   0x80009848: beq      0x8000992c
//   0x8000984c: lwz      r0, 0x20(r30)
//   0x80009850: cmpwi    r0, 0
//   0x80009854: beq      0x8000987c
//   0x80009858: cmpwi    r0, 1
//

// TODO: Full decompilation requires Ghidra
