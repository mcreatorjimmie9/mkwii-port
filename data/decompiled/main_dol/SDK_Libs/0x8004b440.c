// Function at 0x8004b440
// Size: 624 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8004b440: stwu     r1, -0x50(r1)
//   0x8004b444: mflr     r0
//   0x8004b448: stw      r0, 0x54(r1)
//   0x8004b44c: addi     r11, r1, 0x50
//   0x8004b450: bl       0x80020a40
//   0x8004b454: lwz      r6, 0(r4)
//   0x8004b458: mr       r31, r4
//   0x8004b45c: mr       r30, r3
//   0x8004b460: mr       r27, r5
//   0x8004b464: lhz      r6, 0x42(r6)
//   0x8004b468: lwzx     r4, r5, r6
//   0x8004b46c: b        0x8004b474
//   0x8004b470: lwzx     r4, r4, r6
//   0x8004b474: cmpwi    r4, 0
//   0x8004b478: beq      0x8004b488
//   0x8004b47c: lwz      r0, 0xc(r4)
//   0x8004b480: cmpwi    r0, 1
//   0x8004b484: bne      0x8004b470
//   0x8004b488: add      r3, r5, r6
//   0x8004b48c: lwz      r29, 4(r3)
//

// TODO: Full decompilation requires Ghidra
