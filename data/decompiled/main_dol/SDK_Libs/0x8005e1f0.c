// Function at 0x8005e1f0
// Size: 576 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8005e1f0: stwu     r1, -0x40(r1)
//   0x8005e1f4: mflr     r0
//   0x8005e1f8: stw      r0, 0x44(r1)
//   0x8005e1fc: stfd     f31, 0x30(r1)
//   0x8005e200: xxsel    vs31, vs1, vs0, v0
//   0x8005e204: addi     r11, r1, 0x30
//   0x8005e208: bl       0x80020a34
//   0x8005e20c: lwz      r8, 0(r5)
//   0x8005e210: mr       r27, r3
//   0x8005e214: mr       r29, r4
//   0x8005e218: mr       r28, r5
//   0x8005e21c: cmpwi    r8, 0
//   0x8005e220: mr       r24, r7
//   0x8005e224: beq      0x8005e234
//   0x8005e228: lwz      r0, 0(r6)
//   0x8005e22c: cmpwi    r0, 0
//   0x8005e230: bne      0x8005e23c
//   0x8005e234: li       r3, 0
//   0x8005e238: b        0x8005e410
//   0x8005e23c: lwz      r0, 0x10(r8)
//

// TODO: Full decompilation requires Ghidra
