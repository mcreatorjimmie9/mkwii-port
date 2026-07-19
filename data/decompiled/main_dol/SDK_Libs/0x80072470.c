// Function at 0x80072470
// Size: 384 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80072470: stwu     r1, -0x10(r1)
//   0x80072474: mflr     r0
//   0x80072478: cmpwi    r4, 0
//   0x8007247c: stw      r0, 0x14(r1)
//   0x80072480: stw      r31, 0xc(r1)
//   0x80072484: mr       r31, r3
//   0x80072488: bne      0x80072494
//   0x8007248c: li       r3, 0
//   0x80072490: b        0x800725d4
//   0x80072494: lwz      r0, 0x124(r3)
//   0x80072498: cmplw    r4, r0
//   0x8007249c: bne      0x800724d4
//   0x800724a0: mr       r3, r0
//   0x800724a4: lis      r4, 1
//   0x800724a8: lwz      r12, 0(r3)
//   0x800724ac: mr       r6, r31
//   0x800724b0: addi     r4, r4, 3
//   0x800724b4: li       r5, 0
//   0x800724b8: lwz      r12, 0xc(r12)
//   0x800724bc: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
