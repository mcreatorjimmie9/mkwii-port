// Function at 0x80057950
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80057950: stwu     r1, -0x20(r1)
//   0x80057954: mflr     r0
//   0x80057958: stw      r0, 0x24(r1)
//   0x8005795c: addi     r11, r1, 0x20
//   0x80057960: bl       0x80020a3c
//   0x80057964: lwz      r6, 0x18(r3)
//   0x80057968: mr       r26, r3
//   0x8005796c: mr       r27, r4
//   0x80057970: mr       r28, r5
//   0x80057974: addi     r29, r6, -1
//   0x80057978: slwi     r30, r5, 1
//   0x8005797c: slwi     r31, r29, 2
//   0x80057980: b        0x800579d4
//   0x80057984: lwz      r3, 0x1c(r26)
//   0x80057988: lwzx     r3, r3, r31
//   0x8005798c: cmpwi    r3, 0
//   0x80057990: beq      0x800579cc
//   0x80057994: lwz      r0, 0x14(r3)
//   0x80057998: lhzx     r0, r30, r0
//   0x8005799c: rlwinm.  r0, r0, 0, 0x10, 0x11
//

// TODO: Full decompilation requires Ghidra
