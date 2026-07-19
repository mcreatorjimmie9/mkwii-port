// Function at 0x80037590
// Size: 1472 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x110 bytes
//
// Disassembly (first 20 instructions):
//   0x80037590: stwu     r1, -0x110(r1)
//   0x80037594: mflr     r0
//   0x80037598: stw      r0, 0x114(r1)
//   0x8003759c: stfd     f31, 0x100(r1)
//   0x800375a0: xsmaddadp f31, f1, f0
//   0x800375a4: stfd     f30, 0xf0(r1)
//   0x800375a8: xxsel    vs30, vs1, vs0, v3
//   0x800375ac: lis      r0, 0x4330
//   0x800375b0: lfs      f1, -0x7820(r2)
//   0x800375b4: stw      r31, 0xec(r1)
//   0x800375b8: mr       r31, r7
//   0x800375bc: stw      r30, 0xe8(r1)
//   0x800375c0: mr       r30, r5
//   0x800375c4: stw      r29, 0xe4(r1)
//   0x800375c8: mr       r29, r4
//   0x800375cc: lfs      f0, 0x68(r5)
//   0x800375d0: stw      r0, 0xc8(r1)
//   0x800375d4: fcmpu    cr0, f1, f0
//   0x800375d8: stw      r0, 0xd0(r1)
//   0x800375dc: beq      0x800375fc
//

// TODO: Full decompilation requires Ghidra
