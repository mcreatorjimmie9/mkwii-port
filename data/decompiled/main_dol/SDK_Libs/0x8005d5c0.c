// Function at 0x8005d5c0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d5c0: stwu     r1, -0x10(r1)
//   0x8005d5c4: mflr     r0
//   0x8005d5c8: cmpwi    r3, 0
//   0x8005d5cc: stw      r0, 0x14(r1)
//   0x8005d5d0: stw      r31, 0xc(r1)
//   0x8005d5d4: mr       r31, r3
//   0x8005d5d8: beq      0x8005d60c
//   0x8005d5dc: lis      r12, -0x7fd9
//   0x8005d5e0: addi     r12, r12, -0x14c0
//   0x8005d5e4: stw      r12, 0(r3)
//   0x8005d5e8: lwz      r12, 0x44(r12)
//   0x8005d5ec: mtctr    r12
//   0x8005d5f0: bctrl    
//   0x8005d5f4: cmpwi    r31, 0
//   0x8005d5f8: beq      0x8005d60c
//   0x8005d5fc: beq      0x8005d60c
//   0x8005d600: mr       r3, r31
//   0x8005d604: li       r4, 0
//   0x8005d608: bl       0x800602c0
//   0x8005d60c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
