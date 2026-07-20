// Function at 0x8005b580
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b580: stwu     r1, -0x10(r1)
//   0x8005b584: mflr     r0
//   0x8005b588: cmpwi    r3, 0
//   0x8005b58c: stw      r0, 0x14(r1)
//   0x8005b590: stw      r31, 0xc(r1)
//   0x8005b594: mr       r31, r3
//   0x8005b598: beq      0x8005b5cc
//   0x8005b59c: lis      r12, -0x7fd9
//   0x8005b5a0: addi     r12, r12, -0x1610
//   0x8005b5a4: stw      r12, 0(r3)
//   0x8005b5a8: lwz      r12, 0x44(r12)
//   0x8005b5ac: mtctr    r12
//   0x8005b5b0: bctrl    
//   0x8005b5b4: cmpwi    r31, 0
//   0x8005b5b8: beq      0x8005b5cc
//   0x8005b5bc: beq      0x8005b5cc
//   0x8005b5c0: mr       r3, r31
//   0x8005b5c4: li       r4, 0
//   0x8005b5c8: bl       0x800602c0
//   0x8005b5cc: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
