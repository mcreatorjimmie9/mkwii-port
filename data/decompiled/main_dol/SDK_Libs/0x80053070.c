// Function at 0x80053070
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80053070: stwu     r1, -0x30(r1)
//   0x80053074: mflr     r0
//   0x80053078: stw      r0, 0x34(r1)
//   0x8005307c: stw      r31, 0x2c(r1)
//   0x80053080: mr       r31, r3
//   0x80053084: addi     r3, r1, 0x18
//   0x80053088: bl       0x8001ae3c
//   0x8005308c: lfd      f2, 0x18(r1)
//   0x80053090: frsp     f1, f1
//   0x80053094: lfs      f0, -0x7484(r2)
//   0x80053098: frsp     f2, f2
//   0x8005309c: fcmpu    cr0, f0, f1
//   0x800530a0: fctiwz   f0, f2
//   0x800530a4: stfd     f0, 0x20(r1)
//   0x800530a8: lwz      r3, 0x24(r1)
//   0x800530ac: bne      0x800530bc
//   0x800530b0: slwi     r0, r3, 2
//   0x800530b4: lwzx     r3, r31, r0
//   0x800530b8: b        0x80053160
//   0x800530bc: addi     r0, r3, 1
//

// TODO: Full decompilation requires Ghidra
