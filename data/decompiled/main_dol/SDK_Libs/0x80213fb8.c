// Function at 0x80213fb8
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80213fb8: stwu     r1, -0x20(r1)
//   0x80213fbc: mflr     r0
//   0x80213fc0: stw      r0, 0x24(r1)
//   0x80213fc4: stw      r31, 0x1c(r1)
//   0x80213fc8: mr       r31, r5
//   0x80213fcc: stw      r30, 0x18(r1)
//   0x80213fd0: mr       r30, r3
//   0x80213fd4: lfs      f0, 0x14(r3)
//   0x80213fd8: stw      r4, 0x24(r3)
//   0x80213fdc: fcmpu    cr0, f0, f1
//   0x80213fe0: beq      0x8021403c
//   0x80213fe4: cmpwi    r5, 0
//   0x80213fe8: stfs     f1, 0x10(r3)
//   0x80213fec: stw      r5, 0xc(r3)
//   0x80213ff0: bne      0x80214018
//   0x80213ff4: lwz      r12, 0(r3)
//   0x80213ff8: stfs     f1, 0x14(r3)
//   0x80213ffc: cmpwi    r12, 0
//   0x80214000: beq      0x8021403c
//   0x80214004: frsp     f1, f1
//

// TODO: Full decompilation requires Ghidra
