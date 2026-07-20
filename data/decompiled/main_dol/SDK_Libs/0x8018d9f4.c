// Function at 0x8018d9f4
// Size: 568 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8018d9f4: stwu     r1, -0x60(r1)
//   0x8018d9f8: mflr     r0
//   0x8018d9fc: stw      r0, 0x64(r1)
//   0x8018da00: stfd     f31, 0x50(r1)
//   0x8018da04: xscmpgtdp vs31, f1, f0
//   0x8018da08: stfd     f30, 0x40(r1)
//   0x8018da0c: xsmaddmsp f30, f1, f0
//   0x8018da10: addi     r11, r1, 0x40
//   0x8018da14: bl       0x80020a40
//   0x8018da18: cmpwi    r5, 0xa
//   0x8018da1c: mr       r27, r4
//   0x8018da20: mr       r28, r6
//   0x8018da24: beq      0x8018da38
//   0x8018da28: bge      0x8018dc00
//   0x8018da2c: cmpwi    r5, 9
//   0x8018da30: bge      0x8018dae0
//   0x8018da34: b        0x8018dc00
//   0x8018da38: lwz      r30, 0(r6)
//   0x8018da3c: mr       r3, r30
//   0x8018da40: bl       0x8018c294
//

// TODO: Full decompilation requires Ghidra
