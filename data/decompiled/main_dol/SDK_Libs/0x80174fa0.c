// Function at 0x80174fa0
// Size: 308 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x90 bytes
//
// Disassembly (first 20 instructions):
//   0x80174fa0: stwu     r1, -0x90(r1)
//   0x80174fa4: mflr     r0
//   0x80174fa8: stw      r0, 0x94(r1)
//   0x80174fac: stfd     f31, 0x80(r1)
//   0x80174fb0: xsmsubasp f31, f1, f0
//   0x80174fb4: stfd     f30, 0x70(r1)
//   0x80174fb8: xxsel    vs30, vs1, vs0, v1
//   0x80174fbc: fmr      f30, f1
//   0x80174fc0: fmr      f31, f2
//   0x80174fc4: stw      r31, 0x6c(r1)
//   0x80174fc8: stw      r30, 0x68(r1)
//   0x80174fcc: mr       r30, r3
//   0x80174fd0: lwz      r0, 0x28(r3)
//   0x80174fd4: cmpwi    r0, 0
//   0x80174fd8: bne      0x80174fe4
//   0x80174fdc: li       r3, 0
//   0x80174fe0: b        0x801750a4
//   0x80174fe4: mr       r3, r0
//   0x80174fe8: lwz      r12, 0(r3)
//   0x80174fec: lwz      r12, 0x44(r12)
//

// TODO: Full decompilation requires Ghidra
