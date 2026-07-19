// Function at 0x80173f6c
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80173f6c: stwu     r1, -0x20(r1)
//   0x80173f70: mflr     r0
//   0x80173f74: stw      r0, 0x24(r1)
//   0x80173f78: stw      r31, 0x1c(r1)
//   0x80173f7c: stw      r30, 0x18(r1)
//   0x80173f80: stw      r29, 0x14(r1)
//   0x80173f84: stw      r28, 0x10(r1)
//   0x80173f88: mr       r28, r3
//   0x80173f8c: lwz      r0, 0x14(r3)
//   0x80173f90: cmpwi    r0, 1
//   0x80173f94: bne      0x80173fbc
//   0x80173f98: lwz      r12, 0(r3)
//   0x80173f9c: lwz      r12, 0xc(r12)
//   0x80173fa0: mtctr    r12
//   0x80173fa4: bctrl    
//   0x80173fa8: lfs      f0, 0xc(r28)
//   0x80173fac: li       r29, 1
//   0x80173fb0: lwz      r3, 0x24(r28)
//   0x80173fb4: stfs     f0, 0x10(r3)
//   0x80173fb8: b        0x80173fc0
//

// TODO: Full decompilation requires Ghidra
