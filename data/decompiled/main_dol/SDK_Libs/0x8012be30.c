// Function at 0x8012be30
// Size: 780 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8012be30: stwu     r1, -0x60(r1)
//   0x8012be34: mflr     r0
//   0x8012be38: stw      r0, 0x64(r1)
//   0x8012be3c: stfd     f31, 0x50(r1)
//   0x8012be40: xscmpgtdp vs31, f1, f0
//   0x8012be44: stfd     f30, 0x40(r1)
//   0x8012be48: xsmaddmsp f30, f1, f0
//   0x8012be4c: stfd     f29, 0x30(r1)
//   0x8012be50: xxsel    vs29, vs1, vs0, v0
//   0x8012be54: addi     r11, r1, 0x30
//   0x8012be58: bl       0x80020a38
//   0x8012be5c: lwz      r5, 0xb4(r3)
//   0x8012be60: mr       r31, r3
//   0x8012be64: cmplwi   r5, 8
//   0x8012be68: blt      0x8012be74
//   0x8012be6c: li       r3, 0
//   0x8012be70: b        0x8012c0ac
//   0x8012be74: lfs      f1, 0xbc(r3)
//   0x8012be78: lfs      f2, -0x6a1c(r2)
//

// TODO: Full decompilation requires Ghidra
