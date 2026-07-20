// Function at 0x80060310
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80060310: stwu     r1, -0x10(r1)
//   0x80060314: mflr     r0
//   0x80060318: stw      r0, 0x14(r1)
//   0x8006031c: stw      r31, 0xc(r1)
//   0x80060320: mr       r31, r3
//   0x80060324: lwz      r0, 4(r3)
//   0x80060328: cmpwi    r0, 0
//   0x8006032c: beq      0x80060354
//   0x80060330: mr       r3, r0
//   0x80060334: lis      r4, 1
//   0x80060338: lwz      r12, 0(r3)
//   0x8006033c: mr       r6, r31
//   0x80060340: addi     r4, r4, 1
//   0x80060344: li       r5, 0
//   0x80060348: lwz      r12, 0xc(r12)
//   0x8006034c: mtctr    r12
//   0x80060350: bctrl    
//   0x80060354: cmpwi    r31, 0
//   0x80060358: beq      0x80060374
//   0x8006035c: lwz      r12, 0(r31)
//

// TODO: Full decompilation requires Ghidra
