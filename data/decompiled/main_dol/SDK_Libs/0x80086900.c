// Function at 0x80086900
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80086900: stwu     r1, -0x10(r1)
//   0x80086904: mflr     r0
//   0x80086908: cmpwi    r3, 0
//   0x8008690c: stw      r0, 0x14(r1)
//   0x80086910: stw      r31, 0xc(r1)
//   0x80086914: mr       r31, r4
//   0x80086918: stw      r30, 8(r1)
//   0x8008691c: mr       r30, r3
//   0x80086920: beq      0x80086960
//   0x80086924: lis      r12, -0x7fd9
//   0x80086928: addi     r12, r12, 0x110
//   0x8008692c: stw      r12, 0(r3)
//   0x80086930: lwz      r12, 0x10(r12)
//   0x80086934: mtctr    r12
//   0x80086938: bctrl    
//   0x8008693c: lwz      r12, 0(r30)
//   0x80086940: mr       r3, r30
//   0x80086944: lwz      r12, 0x20(r12)
//   0x80086948: mtctr    r12
//   0x8008694c: bctrl    
//

// TODO: Full decompilation requires Ghidra
