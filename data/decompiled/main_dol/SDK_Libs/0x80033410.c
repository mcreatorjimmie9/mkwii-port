// Function at 0x80033410
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80033410: stwu     r1, -0x10(r1)
//   0x80033414: mflr     r0
//   0x80033418: stw      r0, 0x14(r1)
//   0x8003341c: stw      r31, 0xc(r1)
//   0x80033420: mr       r31, r4
//   0x80033424: stw      r30, 8(r1)
//   0x80033428: mr       r30, r3
//   0x8003342c: lwz      r5, 0xc8(r4)
//   0x80033430: lwz      r0, 0x10(r5)
//   0x80033434: addic.   r0, r0, -1
//   0x80033438: stw      r0, 0x10(r5)
//   0x8003343c: bne      0x80033460
//   0x80033440: lwz      r0, 0xc(r5)
//   0x80033444: cmpwi    r0, 2
//   0x80033448: bne      0x80033460
//   0x8003344c: lwz      r12, 0x1c(r5)
//   0x80033450: mr       r3, r5
//   0x80033454: lwz      r12, 8(r12)
//   0x80033458: mtctr    r12
//   0x8003345c: bctrl    
//

// TODO: Full decompilation requires Ghidra
