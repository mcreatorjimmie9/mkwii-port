// Function at 0x80128cdc
// Size: 944 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80128cdc: stwu     r1, -0x60(r1)
//   0x80128ce0: mflr     r0
//   0x80128ce4: stw      r0, 0x64(r1)
//   0x80128ce8: stfd     f31, 0x50(r1)
//   0x80128cec: xscmpgtdp vs31, f1, f0
//   0x80128cf0: stfd     f30, 0x40(r1)
//   0x80128cf4: xsmaddmsp f30, f1, f0
//   0x80128cf8: stfd     f29, 0x30(r1)
//   0x80128cfc: xxsel    vs29, vs1, vs0, v0
//   0x80128d00: addi     r11, r1, 0x30
//   0x80128d04: bl       0x80020a34
//   0x80128d08: lwz      r4, 0x110(r3)
//   0x80128d0c: lis      r31, -0x7fd8
//   0x80128d10: mr       r30, r3
//   0x80128d14: cmplwi   r4, 8
//   0x80128d18: addi     r31, r31, -0x2b20
//   0x80128d1c: blt      0x80128d28
//   0x80128d20: li       r3, 0
//   0x80128d24: b        0x80128fd0
//   0x80128d28: lfs      f4, 0x118(r3)
//

// TODO: Full decompilation requires Ghidra
