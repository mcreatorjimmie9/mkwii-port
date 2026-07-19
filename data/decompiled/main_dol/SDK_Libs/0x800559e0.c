// Function at 0x800559e0
// Size: 1008 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x800559e0: stwu     r1, -0x60(r1)
//   0x800559e4: mflr     r0
//   0x800559e8: stw      r0, 0x64(r1)
//   0x800559ec: stfd     f31, 0x50(r1)
//   0x800559f0: xscmpgtdp vs31, f1, f0
//   0x800559f4: stfd     f30, 0x40(r1)
//   0x800559f8: xsmaddmsp f30, f1, f0
//   0x800559fc: addi     r11, r1, 0x40
//   0x80055a00: bl       0x80020a30
//   0x80055a04: lwz      r31, 0(r3)
//   0x80055a08: fmr      f30, f1
//   0x80055a0c: mr       r27, r4
//   0x80055a10: lwz      r0, 4(r31)
//   0x80055a14: lwz      r30, 0x1c(r31)
//   0x80055a18: cmpwi    r0, 0
//   0x80055a1c: beq      0x80055a28
//   0x80055a20: add      r3, r31, r0
//   0x80055a24: b        0x80055a2c
//   0x80055a28: li       r3, 0
//   0x80055a2c: lfs      f31, -0x7430(r2)
//

// TODO: Full decompilation requires Ghidra
