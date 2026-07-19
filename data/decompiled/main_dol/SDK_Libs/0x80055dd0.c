// Function at 0x80055dd0
// Size: 352 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80055dd0: stwu     r1, -0x50(r1)
//   0x80055dd4: mflr     r0
//   0x80055dd8: stw      r0, 0x54(r1)
//   0x80055ddc: stfd     f31, 0x40(r1)
//   0x80055de0: xsmaddmsp f31, f1, f0
//   0x80055de4: stfd     f30, 0x30(r1)
//   0x80055de8: xxsel    vs30, vs1, vs0, v0
//   0x80055dec: fmr      f30, f1
//   0x80055df0: stw      r31, 0x2c(r1)
//   0x80055df4: lwz      r31, 0(r3)
//   0x80055df8: stw      r30, 0x28(r1)
//   0x80055dfc: stw      r29, 0x24(r1)
//   0x80055e00: stw      r28, 0x20(r1)
//   0x80055e04: mr       r28, r4
//   0x80055e08: lwz      r0, 4(r31)
//   0x80055e0c: lwz      r5, 0x14(r31)
//   0x80055e10: cmpwi    r0, 0
//   0x80055e14: beq      0x80055e20
//   0x80055e18: add      r3, r31, r0
//   0x80055e1c: b        0x80055e24
//

// TODO: Full decompilation requires Ghidra
