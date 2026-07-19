// Function at 0x800a8880
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x800a8880: stwu     r1, -0x40(r1)
//   0x800a8884: mflr     r0
//   0x800a8888: stw      r0, 0x44(r1)
//   0x800a888c: stfd     f31, 0x30(r1)
//   0x800a8890: xxsel    vs31, vs1, vs0, v0
//   0x800a8894: addi     r11, r1, 0x30
//   0x800a8898: bl       0x80020a40
//   0x800a889c: mr       r27, r3
//   0x800a88a0: bl       0x8008ee80
//   0x800a88a4: lfd      f31, -0x6d80(r2)
//   0x800a88a8: mr       r29, r27
//   0x800a88ac: li       r28, 0
//   0x800a88b0: li       r30, 1
//   0x800a88b4: lis      r31, 0x4330
//   0x800a88b8: mr       r4, r28
//   0x800a88bc: addi     r3, r27, 0x100
//   0x800a88c0: bl       0x800a7fb0
//   0x800a88c4: cmpwi    r3, 0
//   0x800a88c8: beq      0x800a8930
//   0x800a88cc: lwz      r5, 0xe44(r29)
//

// TODO: Full decompilation requires Ghidra
