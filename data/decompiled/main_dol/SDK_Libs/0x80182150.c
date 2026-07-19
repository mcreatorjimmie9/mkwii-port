// Function at 0x80182150
// Size: 420 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80182150: stwu     r1, -0x30(r1)
//   0x80182154: mflr     r0
//   0x80182158: stw      r0, 0x34(r1)
//   0x8018215c: addi     r11, r1, 0x30
//   0x80182160: bl       0x80020a34
//   0x80182164: lwz      r25, 0x10(r3)
//   0x80182168: lis      r24, -0x7fcc
//   0x8018216c: mr       r31, r4
//   0x80182170: lwz      r12, 0(r25)
//   0x80182174: mr       r3, r25
//   0x80182178: addi     r24, r24, 0x638
//   0x8018217c: lwz      r12, 0xc(r12)
//   0x80182180: mtctr    r12
//   0x80182184: bctrl    
//   0x80182188: b        0x801821a0
//   0x8018218c: cmplw    r3, r24
//   0x80182190: bne      0x8018219c
//   0x80182194: li       r0, 1
//   0x80182198: b        0x801821ac
//   0x8018219c: lwz      r3, 0(r3)
//

// TODO: Full decompilation requires Ghidra
