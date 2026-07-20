// Function at 0x80230e68
// Size: 488 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80230e68: stwu     r1, -0x60(r1)
//   0x80230e6c: mflr     r0
//   0x80230e70: stw      r0, 0x64(r1)
//   0x80230e74: stfd     f31, 0x50(r1)
//   0x80230e78: xscmpgtdp vs31, f1, f0
//   0x80230e7c: stfd     f30, 0x40(r1)
//   0x80230e80: xsmaddmsp f30, f1, f0
//   0x80230e84: stfd     f29, 0x30(r1)
//   0x80230e88: xxsel    vs29, vs1, vs0, v0
//   0x80230e8c: fmr      f29, f1
//   0x80230e90: stw      r31, 0x2c(r1)
//   0x80230e94: stw      r30, 0x28(r1)
//   0x80230e98: stw      r29, 0x24(r1)
//   0x80230e9c: stw      r28, 0x20(r1)
//   0x80230ea0: mr       r28, r3
//   0x80230ea4: lhz      r0, 0x2e(r3)
//   0x80230ea8: cmpwi    r0, 0
//   0x80230eac: beq      0x80231004
//   0x80230eb0: lbz      r0, 0x30(r3)
//   0x80230eb4: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//

// TODO: Full decompilation requires Ghidra
