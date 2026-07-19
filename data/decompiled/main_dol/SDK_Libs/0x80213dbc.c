// Function at 0x80213dbc
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80213dbc: stwu     r1, -0x10(r1)
//   0x80213dc0: mflr     r0
//   0x80213dc4: stw      r0, 0x14(r1)
//   0x80213dc8: lfs      f0, 0x14(r3)
//   0x80213dcc: fcmpu    cr0, f0, f1
//   0x80213dd0: beq      0x80213e2c
//   0x80213dd4: cmpwi    r4, 0
//   0x80213dd8: stfs     f1, 0x10(r3)
//   0x80213ddc: stw      r4, 0xc(r3)
//   0x80213de0: bne      0x80213e08
//   0x80213de4: lwz      r12, 0(r3)
//   0x80213de8: stfs     f1, 0x14(r3)
//   0x80213dec: cmpwi    r12, 0
//   0x80213df0: beq      0x80213e2c
//   0x80213df4: frsp     f1, f1
//   0x80213df8: lwz      r3, 4(r3)
//   0x80213dfc: mtctr    r12
//   0x80213e00: bctrl    
//   0x80213e04: b        0x80213e2c
//   0x80213e08: lis      r0, 0x4330
//

// TODO: Full decompilation requires Ghidra
