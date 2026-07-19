// Function at 0x800afad0
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x800afad0: stwu     r1, -0x60(r1)
//   0x800afad4: mflr     r0
//   0x800afad8: stw      r0, 0x64(r1)
//   0x800afadc: stfd     f31, 0x50(r1)
//   0x800afae0: xscmpgtdp vs31, f1, f0
//   0x800afae4: stfd     f30, 0x40(r1)
//   0x800afae8: xsmaddmsp f30, f1, f0
//   0x800afaec: addi     r11, r1, 0x40
//   0x800afaf0: bl       0x80020a40
//   0x800afaf4: cmpwi    r5, 0xa
//   0x800afaf8: mr       r27, r4
//   0x800afafc: mr       r28, r6
//   0x800afb00: beq      0x800afb10
//   0x800afb04: cmpwi    r5, 9
//   0x800afb08: beq      0x800afb98
//   0x800afb0c: b        0x800afc88
//   0x800afb10: lwz      r30, 0(r6)
//   0x800afb14: lfs      f0, 0x2c(r30)
//   0x800afb18: stfs     f0, 8(r4)
//   0x800afb1c: lfs      f0, 0x30(r30)
//

// TODO: Full decompilation requires Ghidra
