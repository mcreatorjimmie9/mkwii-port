// Function at 0x800d3138
// Size: 1136 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800d3138: stwu     r1, -0x20(r1)
//   0x800d313c: mflr     r0
//   0x800d3140: stw      r0, 0x24(r1)
//   0x800d3144: stw      r31, 0x1c(r1)
//   0x800d3148: lis      r31, -0x7fd9
//   0x800d314c: addi     r31, r31, 0x2118
//   0x800d3150: stw      r30, 0x18(r1)
//   0x800d3154: stw      r29, 0x14(r1)
//   0x800d3158: stw      r28, 0x10(r1)
//   0x800d315c: mr       r28, r4
//   0x800d3160: lwz      r5, 4(r4)
//   0x800d3164: cmpwi    r5, 0x603
//   0x800d3168: beq      0x800d317c
//   0x800d316c: cmpwi    r5, 0x901
//   0x800d3170: beq      0x800d317c
//   0x800d3174: cmpwi    r5, 0xb01
//   0x800d3178: bne      0x800d3190
//   0x800d317c: addi     r4, r31, 0x594
//   0x800d3180: li       r3, 4
//   0x800d3184: crclr    cr1eq
//

// TODO: Full decompilation requires Ghidra
