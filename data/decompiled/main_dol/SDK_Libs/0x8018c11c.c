// Function at 0x8018c11c
// Size: 392 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8018c11c: stwu     r1, -0x50(r1)
//   0x8018c120: mflr     r0
//   0x8018c124: stw      r0, 0x54(r1)
//   0x8018c128: stfd     f31, 0x40(r1)
//   0x8018c12c: xsmaddmsp f31, f1, f0
//   0x8018c130: lis      r0, 0x4330
//   0x8018c134: mr       r5, r4
//   0x8018c138: addi     r4, r1, 8
//   0x8018c13c: stw      r31, 0x3c(r1)
//   0x8018c140: mr       r31, r3
//   0x8018c144: lwz      r3, 0x48(r3)
//   0x8018c148: stw      r0, 0x20(r1)
//   0x8018c14c: lwz      r12, 0(r3)
//   0x8018c150: stw      r0, 0x28(r1)
//   0x8018c154: lwz      r12, 0x50(r12)
//   0x8018c158: mtctr    r12
//   0x8018c15c: bctrl    
//   0x8018c160: lbz      r0, 0x43(r31)
//   0x8018c164: cmpwi    r0, 0
//   0x8018c168: beq      0x8018c1cc
//

// TODO: Full decompilation requires Ghidra
