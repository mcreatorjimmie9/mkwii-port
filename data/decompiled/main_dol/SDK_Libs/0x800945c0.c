// Function at 0x800945c0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800945c0: stwu     r1, -0x20(r1)
//   0x800945c4: mflr     r0
//   0x800945c8: stw      r0, 0x24(r1)
//   0x800945cc: stw      r31, 0x1c(r1)
//   0x800945d0: mr       r31, r3
//   0x800945d4: lbz      r0, 0xc(r3)
//   0x800945d8: cmpwi    r0, 0
//   0x800945dc: beq      0x80094628
//   0x800945e0: li       r0, 0
//   0x800945e4: stb      r0, 0xc(r3)
//   0x800945e8: addi     r3, r3, 0x14
//   0x800945ec: addi     r4, r1, 0xc
//   0x800945f0: addi     r5, r1, 8
//   0x800945f4: bl       0x8008d140
//   0x800945f8: lwz      r0, 0x10(r31)
//   0x800945fc: cmpwi    r0, 1
//   0x80094600: bne      0x80094610
//   0x80094604: addi     r3, r31, 0x190
//   0x80094608: bl       0x801293d0
//   0x8009460c: b        0x80094618
//

// TODO: Full decompilation requires Ghidra
