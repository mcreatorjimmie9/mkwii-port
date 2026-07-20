// Function at 0x80153288
// Size: 412 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80153288: stwu     r1, -0x10(r1)
//   0x8015328c: mflr     r0
//   0x80153290: cmplwi   r4, 0xe
//   0x80153294: stw      r0, 0x14(r1)
//   0x80153298: stw      r31, 0xc(r1)
//   0x8015329c: mr       r31, r4
//   0x801532a0: stw      r30, 8(r1)
//   0x801532a4: mr       r30, r3
//   0x801532a8: bgt      0x801533e0
//   0x801532ac: lis      r6, -0x7fd8
//   0x801532b0: slwi     r0, r4, 2
//   0x801532b4: addi     r6, r6, 0x30b0
//   0x801532b8: lwzx     r6, r6, r0
//   0x801532bc: mtctr    r6
//   0x801532c0: bctr     
//   0x801532c4: lis      r3, -0x7fcd
//   0x801532c8: addi     r3, r3, 0x57a8
//   0x801532cc: lbz      r0, 0x414(r3)
//   0x801532d0: cmplwi   r0, 1
//   0x801532d4: blt      0x8015340c
//

// TODO: Full decompilation requires Ghidra
