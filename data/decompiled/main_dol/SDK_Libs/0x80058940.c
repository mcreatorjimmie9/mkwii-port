// Function at 0x80058940
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80058940: stwu     r1, -0x10(r1)
//   0x80058944: mflr     r0
//   0x80058948: cmpwi    r3, 0
//   0x8005894c: stw      r0, 0x14(r1)
//   0x80058950: stw      r31, 0xc(r1)
//   0x80058954: mr       r31, r3
//   0x80058958: beq      0x8005898c
//   0x8005895c: lis      r12, -0x7fd9
//   0x80058960: addi     r12, r12, -0x1870
//   0x80058964: stw      r12, 0(r3)
//   0x80058968: lwz      r12, 0x44(r12)
//   0x8005896c: mtctr    r12
//   0x80058970: bctrl    
//   0x80058974: cmpwi    r31, 0
//   0x80058978: beq      0x8005898c
//   0x8005897c: beq      0x8005898c
//   0x80058980: mr       r3, r31
//   0x80058984: li       r4, 0
//   0x80058988: bl       0x800602c0
//   0x8005898c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
