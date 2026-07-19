// Function at 0x8016189c
// Size: 1456 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8016189c: stwu     r1, -0x30(r1)
//   0x801618a0: mflr     r0
//   0x801618a4: stw      r0, 0x34(r1)
//   0x801618a8: addi     r11, r1, 0x30
//   0x801618ac: bl       0x80020a3c
//   0x801618b0: lis      r4, -0x7fea
//   0x801618b4: mr       r29, r3
//   0x801618b8: addi     r4, r4, 0x189c
//   0x801618bc: stw      r4, -0x650c(r13)
//   0x801618c0: lwz      r30, 8(r3)
//   0x801618c4: cmplwi   r30, 0x2a
//   0x801618c8: bgt      0x80161968
//   0x801618cc: lis      r4, -0x7fd8
//   0x801618d0: slwi     r0, r30, 2
//   0x801618d4: addi     r4, r4, 0x421c
//   0x801618d8: lwzx     r4, r4, r0
//   0x801618dc: mtctr    r4
//   0x801618e0: bctr     
//   0x801618e4: lwz      r26, 0x14(r3)
//   0x801618e8: lwz      r27, 0x10(r3)
//

// TODO: Full decompilation requires Ghidra
