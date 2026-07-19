// Function at 0x800592c0
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x800592c0: stwu     r1, -0x40(r1)
//   0x800592c4: mflr     r0
//   0x800592c8: stw      r0, 0x44(r1)
//   0x800592cc: stfd     f31, 0x30(r1)
//   0x800592d0: xxsel    vs31, vs1, vs0, v0
//   0x800592d4: addi     r11, r1, 0x30
//   0x800592d8: bl       0x80020a38
//   0x800592dc: lwz      r8, 0(r5)
//   0x800592e0: mr       r29, r3
//   0x800592e4: mr       r25, r4
//   0x800592e8: mr       r30, r5
//   0x800592ec: cmpwi    r8, 0
//   0x800592f0: mr       r27, r7
//   0x800592f4: beq      0x80059304
//   0x800592f8: lwz      r0, 0(r6)
//   0x800592fc: cmpwi    r0, 0
//   0x80059300: bne      0x8005930c
//   0x80059304: li       r3, 0
//   0x80059308: b        0x80059490
//   0x8005930c: lhz      r31, 0x32(r8)
//

// TODO: Full decompilation requires Ghidra
