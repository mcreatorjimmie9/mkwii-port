// Function at 0x8001b6cc
// Size: 696 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8001b6cc: stwu     r1, -0x10(r1)
//   0x8001b6d0: mflr     r0
//   0x8001b6d4: li       r4, 0
//   0x8001b6d8: stw      r0, 0x14(r1)
//   0x8001b6dc: stw      r31, 0xc(r1)
//   0x8001b6e0: li       r31, 0x500
//   0x8001b6e4: stw      r30, 8(r1)
//   0x8001b6e8: mr       r30, r3
//   0x8001b6ec: bl       0x8001c72c
//   0x8001b6f0: lbz      r0, 0x10(r30)
//   0x8001b6f4: cmplwi   r0, 0x1a
//   0x8001b6f8: bgt      0x8001b7d0
//   0x8001b6fc: lis      r3, -0x7fd9
//   0x8001b700: slwi     r0, r0, 2
//   0x8001b704: addi     r3, r3, -0x2a70
//   0x8001b708: lwzx     r3, r3, r0
//   0x8001b70c: mtctr    r3
//   0x8001b710: bctr     
//   0x8001b714: mr       r3, r30
//   0x8001b718: bl       0x8001ce10
//

// TODO: Full decompilation requires Ghidra
