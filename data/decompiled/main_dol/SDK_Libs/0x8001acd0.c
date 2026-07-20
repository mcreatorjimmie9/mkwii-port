// Function at 0x8001acd0
// Size: 616 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001acd0: stwu     r1, -0x20(r1)
//   0x8001acd4: mflr     r0
//   0x8001acd8: stw      r0, 0x24(r1)
//   0x8001acdc: stfd     f31, 0x18(r1)
//   0x8001ace0: fmr      f31, f1
//   0x8001ace4: stw      r31, 0x14(r1)
//   0x8001ace8: mr       r31, r3
//   0x8001acec: stfd     f1, 8(r1)
//   0x8001acf0: bl       0x8000e41c
//   0x8001acf4: cmpwi    r3, 2
//   0x8001acf8: ble      0x8001ad08
//   0x8001acfc: lfd      f0, -0x7a10(r2)
//   0x8001ad00: fcmpu    cr0, f0, f31
//   0x8001ad04: bne      0x8001ad10
//   0x8001ad08: fmr      f1, f31
//   0x8001ad0c: b        0x8001ae24
//   0x8001ad10: lwz      r5, 8(r1)
//   0x8001ad14: lwz      r3, 0xc(r1)
//   0x8001ad18: rlwinm.  r4, r5, 0xc, 0x15, 0x1f
//   0x8001ad1c: bne      0x8001ad68
//

// TODO: Full decompilation requires Ghidra
