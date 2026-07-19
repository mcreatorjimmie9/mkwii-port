// Function at 0x8000ce38
// Size: 356 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x90 bytes
//
// Disassembly (first 20 instructions):
//   0x8000ce38: stwu     r1, -0x90(r1)
//   0x8000ce3c: mflr     r0
//   0x8000ce40: stw      r0, 0x94(r1)
//   0x8000ce44: stfd     f31, 0x88(r1)
//   0x8000ce48: fmr      f31, f1
//   0x8000ce4c: stw      r31, 0x84(r1)
//   0x8000ce50: stw      r30, 0x80(r1)
//   0x8000ce54: mr       r30, r3
//   0x8000ce58: stw      r29, 0x7c(r1)
//   0x8000ce5c: bl       0x8000e404
//   0x8000ce60: lfd      f0, -0x7f70(r2)
//   0x8000ce64: neg      r0, r3
//   0x8000ce68: or       r0, r0, r3
//   0x8000ce6c: fcmpu    cr0, f0, f31
//   0x8000ce70: srwi     r0, r0, 0x1f
//   0x8000ce74: extsb    r31, r0
//   0x8000ce78: bne      0x8000ce98
//   0x8000ce7c: li       r3, 0
//   0x8000ce80: li       r0, 1
//   0x8000ce84: stb      r31, 0(r30)
//

// TODO: Full decompilation requires Ghidra
