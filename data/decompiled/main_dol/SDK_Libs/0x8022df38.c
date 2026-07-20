// Function at 0x8022df38
// Size: 340 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8022df38: stwu     r1, -0x50(r1)
//   0x8022df3c: mflr     r0
//   0x8022df40: stw      r0, 0x54(r1)
//   0x8022df44: stfd     f31, 0x40(r1)
//   0x8022df48: xsmaddmsp f31, f1, f0
//   0x8022df4c: stfd     f30, 0x30(r1)
//   0x8022df50: xxsel    vs30, vs1, vs0, v0
//   0x8022df54: stw      r31, 0x2c(r1)
//   0x8022df58: stw      r30, 0x28(r1)
//   0x8022df5c: stw      r29, 0x24(r1)
//   0x8022df60: mr       r29, r3
//   0x8022df64: lhz      r4, 0x78(r3)
//   0x8022df68: lbz      r3, 0x75(r3)
//   0x8022df6c: divw     r0, r4, r3
//   0x8022df70: mullw    r0, r0, r3
//   0x8022df74: subf.    r30, r0, r4
//   0x8022df78: ble      0x8022e058
//   0x8022df7c: li       r3, 0
//   0x8022df80: li       r0, 0xff
//   0x8022df84: stb      r3, 0x12(r1)
//

// TODO: Full decompilation requires Ghidra
