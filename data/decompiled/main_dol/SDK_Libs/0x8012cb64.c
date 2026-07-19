// Function at 0x8012cb64
// Size: 700 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8012cb64: stwu     r1, -0x60(r1)
//   0x8012cb68: mflr     r0
//   0x8012cb6c: stw      r0, 0x64(r1)
//   0x8012cb70: stfd     f31, 0x50(r1)
//   0x8012cb74: xscmpgtdp vs31, f1, f0
//   0x8012cb78: stfd     f30, 0x40(r1)
//   0x8012cb7c: xsmaddmsp f30, f1, f0
//   0x8012cb80: stfd     f29, 0x30(r1)
//   0x8012cb84: xxsel    vs29, vs1, vs0, v0
//   0x8012cb88: addi     r11, r1, 0x30
//   0x8012cb8c: bl       0x80020a38
//   0x8012cb90: lwz      r5, 0xd0(r3)
//   0x8012cb94: mr       r31, r3
//   0x8012cb98: cmplwi   r5, 8
//   0x8012cb9c: blt      0x8012cba8
//   0x8012cba0: li       r3, 0
//   0x8012cba4: b        0x8012cde4
//   0x8012cba8: lfs      f1, 0xd8(r3)
//   0x8012cbac: lfs      f2, -0x69dc(r2)
//

// TODO: Full decompilation requires Ghidra
