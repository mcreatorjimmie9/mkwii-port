// Function at 0x800ab0b0
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x800ab0b0: stwu     r1, -0x40(r1)
//   0x800ab0b4: mflr     r0
//   0x800ab0b8: stw      r0, 0x44(r1)
//   0x800ab0bc: stfd     f31, 0x30(r1)
//   0x800ab0c0: xxsel    vs31, vs1, vs0, v0
//   0x800ab0c4: addi     r11, r1, 0x30
//   0x800ab0c8: bl       0x80020a38
//   0x800ab0cc: mr       r25, r3
//   0x800ab0d0: mr       r26, r4
//   0x800ab0d4: mr       r31, r25
//   0x800ab0d8: li       r28, 0
//   0x800ab0dc: li       r30, 0
//   0x800ab0e0: b        0x800ab140
//   0x800ab0e4: lbz      r0, 0xa1(r25)
//   0x800ab0e8: lfs      f31, 0xfc(r25)
//   0x800ab0ec: cmpwi    r0, 0
//   0x800ab0f0: bne      0x800ab0fc
//   0x800ab0f4: lfs      f0, 0x30(r31)
//   0x800ab0f8: fmuls    f31, f31, f0
//   0x800ab0fc: add      r29, r25, r30
//

// TODO: Full decompilation requires Ghidra
