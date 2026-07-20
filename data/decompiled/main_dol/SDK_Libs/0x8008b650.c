// Function at 0x8008b650
// Size: 464 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8008b650: stwu     r1, -0x40(r1)
//   0x8008b654: mflr     r0
//   0x8008b658: stw      r0, 0x44(r1)
//   0x8008b65c: stfd     f31, 0x30(r1)
//   0x8008b660: xxsel    vs31, vs1, vs0, v0
//   0x8008b664: fmr      f31, f1
//   0x8008b668: stw      r31, 0x2c(r1)
//   0x8008b66c: mr       r31, r3
//   0x8008b670: stw      r30, 0x28(r1)
//   0x8008b674: stw      r29, 0x24(r1)
//   0x8008b678: stw      r28, 0x20(r1)
//   0x8008b67c: mr       r28, r4
//   0x8008b680: bl       0x801a650c
//   0x8008b684: lwz      r0, 0(r31)
//   0x8008b688: mr       r30, r3
//   0x8008b68c: cmpwi    r0, 0
//   0x8008b690: bne      0x8008b69c
//   0x8008b694: bl       0x801a6534
//   0x8008b698: b        0x8008b7f4
//   0x8008b69c: cmpwi    r28, 0
//

// TODO: Full decompilation requires Ghidra
