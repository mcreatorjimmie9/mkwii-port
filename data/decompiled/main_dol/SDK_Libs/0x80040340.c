// Function at 0x80040340
// Size: 624 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80040340: stwu     r1, -0x50(r1)
//   0x80040344: mflr     r0
//   0x80040348: stw      r0, 0x54(r1)
//   0x8004034c: addi     r11, r1, 0x50
//   0x80040350: bl       0x80020a40
//   0x80040354: lwz      r6, 0(r4)
//   0x80040358: mr       r31, r4
//   0x8004035c: mr       r30, r3
//   0x80040360: mr       r27, r5
//   0x80040364: lhz      r6, 0x42(r6)
//   0x80040368: lwzx     r4, r5, r6
//   0x8004036c: b        0x80040374
//   0x80040370: lwzx     r4, r4, r6
//   0x80040374: cmpwi    r4, 0
//   0x80040378: beq      0x80040388
//   0x8004037c: lwz      r0, 0xc(r4)
//   0x80040380: cmpwi    r0, 1
//   0x80040384: bne      0x80040370
//   0x80040388: add      r3, r5, r6
//   0x8004038c: lwz      r29, 4(r3)
//

// TODO: Full decompilation requires Ghidra
