// Function at 0x80128414
// Size: 1308 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x70 bytes
//
// Disassembly (first 20 instructions):
//   0x80128414: stwu     r1, -0x70(r1)
//   0x80128418: mflr     r0
//   0x8012841c: stw      r0, 0x74(r1)
//   0x80128420: addi     r11, r1, 0x70
//   0x80128424: bl       0x80020a38
//   0x80128428: lwz      r0, 0x10c(r4)
//   0x8012842c: cmpwi    r0, 0
//   0x80128430: beq      0x80128440
//   0x80128434: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x80128438: stw      r0, 0x10c(r4)
//   0x8012843c: b        0x80128918
//   0x80128440: lwz      r7, 0x138(r4)
//   0x80128444: lwz      r6, 0(r3)
//   0x80128448: lwz      r5, 4(r3)
//   0x8012844c: cmpwi    r7, 0
//   0x80128450: lwz      r0, 8(r3)
//   0x80128454: stw      r6, 0x2c(r1)
//   0x80128458: stw      r5, 0x30(r1)
//   0x8012845c: stw      r0, 0x34(r1)
//   0x80128460: beq      0x8012847c
//

// TODO: Full decompilation requires Ghidra
