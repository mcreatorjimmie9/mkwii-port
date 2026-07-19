// Function at 0x80034ee0
// Size: 736 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x190 bytes
//
// Disassembly (first 20 instructions):
//   0x80034ee0: stwu     r1, -0x190(r1)
//   0x80034ee4: mflr     r0
//   0x80034ee8: stw      r0, 0x194(r1)
//   0x80034eec: stfd     f31, 0x180(r1)
//   0x80034ef0: xsmsubadp f31, f1, f0
//   0x80034ef4: addi     r11, r1, 0x180
//   0x80034ef8: bl       0x80020a0c
//   0x80034efc: lwz      r16, 0x24(r3)
//   0x80034f00: mr       r31, r3
//   0x80034f04: lhz      r0, 0x9c(r16)
//   0x80034f08: rlwinm.  r0, r0, 0, 0x15, 0x15
//   0x80034f0c: bne      0x800351a0
//   0x80034f10: lwz      r3, 0x20(r3)
//   0x80034f14: lwz      r0, 0x20(r3)
//   0x80034f18: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x80034f1c: beq      0x80034f24
//   0x80034f20: b        0x800351a0
//   0x80034f24: lbz      r15, 0x60(r4)
//   0x80034f28: stw      r15, 0x130(r1)
//   0x80034f2c: lwz      r15, 0x64(r4)
//

// TODO: Full decompilation requires Ghidra
