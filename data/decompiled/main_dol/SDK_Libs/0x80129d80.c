// Function at 0x80129d80
// Size: 860 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80129d80: stwu     r1, -0x60(r1)
//   0x80129d84: mflr     r0
//   0x80129d88: stw      r0, 0x64(r1)
//   0x80129d8c: stfd     f31, 0x50(r1)
//   0x80129d90: xscmpgtdp vs31, f1, f0
//   0x80129d94: stfd     f30, 0x40(r1)
//   0x80129d98: xsmaddmsp f30, f1, f0
//   0x80129d9c: stfd     f29, 0x30(r1)
//   0x80129da0: xxsel    vs29, vs1, vs0, v0
//   0x80129da4: addi     r11, r1, 0x30
//   0x80129da8: bl       0x80020a34
//   0x80129dac: lwz      r4, 0x140(r3)
//   0x80129db0: lis      r31, -0x7fd8
//   0x80129db4: mr       r30, r3
//   0x80129db8: cmplwi   r4, 8
//   0x80129dbc: addi     r31, r31, -0x2980
//   0x80129dc0: blt      0x80129dcc
//   0x80129dc4: li       r3, 0
//   0x80129dc8: b        0x8012a084
//   0x80129dcc: lfs      f4, 0x148(r3)
//

// TODO: Full decompilation requires Ghidra
