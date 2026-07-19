// Function at 0x80053180
// Size: 560 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80053180: stwu     r1, -0x40(r1)
//   0x80053184: mflr     r0
//   0x80053188: stw      r0, 0x44(r1)
//   0x8005318c: stfd     f31, 0x30(r1)
//   0x80053190: xxsel    vs31, vs1, vs0, v0
//   0x80053194: addi     r11, r1, 0x30
//   0x80053198: bl       0x80020a3c
//   0x8005319c: lwz      r6, 0(r3)
//   0x800531a0: mr       r30, r4
//   0x800531a4: lwz      r0, 0x10(r6)
//   0x800531a8: cmpwi    r0, 0
//   0x800531ac: beq      0x800531b8
//   0x800531b0: add      r0, r6, r0
//   0x800531b4: b        0x800531bc
//   0x800531b8: li       r0, 0
//   0x800531bc: cmpwi    r0, 0
//   0x800531c0: beq      0x800531ec
//   0x800531c4: addi     r5, r5, 1
//   0x800531c8: slwi     r5, r5, 4
//   0x800531cc: add      r5, r0, r5
//

// TODO: Full decompilation requires Ghidra
