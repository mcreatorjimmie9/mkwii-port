// Function at 0x80052a50
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80052a50: stwu     r1, -0x30(r1)
//   0x80052a54: mflr     r0
//   0x80052a58: stw      r0, 0x34(r1)
//   0x80052a5c: stw      r31, 0x2c(r1)
//   0x80052a60: stw      r30, 0x28(r1)
//   0x80052a64: mr       r30, r4
//   0x80052a68: stw      r29, 0x24(r1)
//   0x80052a6c: lwz      r29, 0(r3)
//   0x80052a70: cmpwi    r29, 0
//   0x80052a74: beq      0x80052bd0
//   0x80052a78: lwz      r31, 0(r4)
//   0x80052a7c: rlwinm.  r0, r31, 0, 0x18, 0x18
//   0x80052a80: beq      0x80052ad8
//   0x80052a84: lwz      r3, 0x14(r29)
//   0x80052a88: rlwinm.  r0, r3, 0, 0x1c, 0x1c
//   0x80052a8c: beq      0x80052aa8
//   0x80052a90: lfs      f0, -0x74a0(r2)
//   0x80052a94: ori      r31, r31, 0x18
//   0x80052a98: stfs     f0, 0xc(r4)
//   0x80052a9c: stfs     f0, 8(r4)
//

// TODO: Full decompilation requires Ghidra
