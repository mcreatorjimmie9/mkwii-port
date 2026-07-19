// Function at 0x8019f29c
// Size: 644 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8019f29c: stwu     r1, -0x10(r1)
//   0x8019f2a0: mflr     r0
//   0x8019f2a4: stw      r0, 0x14(r1)
//   0x8019f2a8: stw      r31, 0xc(r1)
//   0x8019f2ac: lwz      r3, -0x6370(r13)
//   0x8019f2b0: cmpwi    r3, 0
//   0x8019f2b4: beq      0x8019f2c4
//   0x8019f2b8: lwz      r0, 0x2c(r3)
//   0x8019f2bc: cmpwi    r0, 0
//   0x8019f2c0: bne      0x8019f2d0
//   0x8019f2c4: lis      r3, 0x1000
//   0x8019f2c8: addi     r3, r3, 2
//   0x8019f2cc: b        0x8019f50c
//   0x8019f2d0: lis      r3, -0x8000
//   0x8019f2d4: lhz      r0, 0x30e6(r3)
//   0x8019f2d8: lwz      r31, 0x3138(r3)
//   0x8019f2dc: rlwinm.  r0, r0, 0, 0x10, 0x10
//   0x8019f2e0: beq      0x8019f41c
//   0x8019f2e4: lhz      r0, 0x30e6(r3)
//   0x8019f2e8: rlwinm   r0, r0, 0, 0x11, 0xf
//

// TODO: Full decompilation requires Ghidra
