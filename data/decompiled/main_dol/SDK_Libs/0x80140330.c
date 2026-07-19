// Function at 0x80140330
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80140330: stwu     r1, -0x10(r1)
//   0x80140334: mflr     r0
//   0x80140338: stw      r0, 0x14(r1)
//   0x8014033c: stw      r31, 0xc(r1)
//   0x80140340: stw      r30, 8(r1)
//   0x80140344: mr       r30, r3
//   0x80140348: bl       0x80139dac
//   0x8014034c: cmpwi    r3, 0
//   0x80140350: mr       r31, r3
//   0x80140354: beq      0x801403cc
//   0x80140358: lis      r3, -0x7fcd
//   0x8014035c: addi     r3, r3, 0x1ef8
//   0x80140360: lwz      r12, 0x1920(r3)
//   0x80140364: cmpwi    r12, 0
//   0x80140368: beq      0x80140380
//   0x8014036c: mr       r3, r30
//   0x80140370: addi     r4, r31, 0x22
//   0x80140374: addi     r5, r31, 0x35
//   0x80140378: mtctr    r12
//   0x8014037c: bctrl    
//

// TODO: Full decompilation requires Ghidra
