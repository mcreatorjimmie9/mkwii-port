// Function at 0x80086980
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80086980: stwu     r1, -0x10(r1)
//   0x80086984: mflr     r0
//   0x80086988: cmpwi    r3, 0
//   0x8008698c: stw      r0, 0x14(r1)
//   0x80086990: stw      r31, 0xc(r1)
//   0x80086994: mr       r31, r4
//   0x80086998: stw      r30, 8(r1)
//   0x8008699c: mr       r30, r3
//   0x800869a0: beq      0x800869e0
//   0x800869a4: lis      r12, -0x7fd9
//   0x800869a8: addi     r12, r12, 0x20
//   0x800869ac: stw      r12, 0(r3)
//   0x800869b0: lwz      r12, 0x10(r12)
//   0x800869b4: mtctr    r12
//   0x800869b8: bctrl    
//   0x800869bc: lwz      r12, 0(r30)
//   0x800869c0: mr       r3, r30
//   0x800869c4: lwz      r12, 0x20(r12)
//   0x800869c8: mtctr    r12
//   0x800869cc: bctrl    
//

// TODO: Full decompilation requires Ghidra
