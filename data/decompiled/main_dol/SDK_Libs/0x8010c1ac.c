// Function at 0x8010c1ac
// Size: 488 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010c1ac: stwu     r1, -0x20(r1)
//   0x8010c1b0: mflr     r0
//   0x8010c1b4: stw      r0, 0x24(r1)
//   0x8010c1b8: addi     r11, r1, 0x20
//   0x8010c1bc: bl       0x80020a3c
//   0x8010c1c0: cmpwi    r5, 2
//   0x8010c1c4: lbz      r0, 0(r4)
//   0x8010c1c8: lbz      r29, 1(r4)
//   0x8010c1cc: mr       r26, r3
//   0x8010c1d0: rlwimi   r29, r0, 8, 0x10, 0x17
//   0x8010c1d4: bne      0x8010c1e0
//   0x8010c1d8: mr       r28, r29
//   0x8010c1dc: b        0x8010c290
//   0x8010c1e0: cmpwi    r5, 4
//   0x8010c1e4: bne      0x8010c1f8
//   0x8010c1e8: lbz      r0, 2(r4)
//   0x8010c1ec: lbz      r28, 3(r4)
//   0x8010c1f0: rlwimi   r28, r0, 8, 0x10, 0x17
//   0x8010c1f4: b        0x8010c290
//   0x8010c1f8: lwz      r4, 0xc(r3)
//

// TODO: Full decompilation requires Ghidra
