// Function at 0x80057090
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80057090: stwu     r1, -0x10(r1)
//   0x80057094: mflr     r0
//   0x80057098: cmpwi    r3, 0
//   0x8005709c: stw      r0, 0x14(r1)
//   0x800570a0: stw      r31, 0xc(r1)
//   0x800570a4: mr       r31, r3
//   0x800570a8: beq      0x800570dc
//   0x800570ac: lis      r12, -0x7fd9
//   0x800570b0: addi     r12, r12, -0x1990
//   0x800570b4: stw      r12, 0(r3)
//   0x800570b8: lwz      r12, 0x44(r12)
//   0x800570bc: mtctr    r12
//   0x800570c0: bctrl    
//   0x800570c4: cmpwi    r31, 0
//   0x800570c8: beq      0x800570dc
//   0x800570cc: beq      0x800570dc
//   0x800570d0: mr       r3, r31
//   0x800570d4: li       r4, 0
//   0x800570d8: bl       0x800602c0
//   0x800570dc: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
