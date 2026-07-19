// Function at 0x80095300
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80095300: stwu     r1, -0x20(r1)
//   0x80095304: mflr     r0
//   0x80095308: stw      r0, 0x24(r1)
//   0x8009530c: stw      r31, 0x1c(r1)
//   0x80095310: mr       r31, r3
//   0x80095314: lbz      r0, 0xc(r3)
//   0x80095318: cmpwi    r0, 0
//   0x8009531c: beq      0x80095368
//   0x80095320: li       r0, 0
//   0x80095324: stb      r0, 0xc(r3)
//   0x80095328: addi     r3, r3, 0x14
//   0x8009532c: addi     r4, r1, 0xc
//   0x80095330: addi     r5, r1, 8
//   0x80095334: bl       0x8008d140
//   0x80095338: lwz      r0, 0x10(r31)
//   0x8009533c: cmpwi    r0, 1
//   0x80095340: bne      0x80095350
//   0x80095344: addi     r3, r31, 0x12c
//   0x80095348: bl       0x8012c458
//   0x8009534c: b        0x80095358
//

// TODO: Full decompilation requires Ghidra
