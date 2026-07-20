// Function at 0x800295b0
// Size: 480 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xe0 bytes
//
// Disassembly (first 20 instructions):
//   0x800295b0: stwu     r1, -0xe0(r1)
//   0x800295b4: mflr     r0
//   0x800295b8: stw      r0, 0xe4(r1)
//   0x800295bc: stw      r31, 0xdc(r1)
//   0x800295c0: mr       r31, r3
//   0x800295c4: stw      r30, 0xd8(r1)
//   0x800295c8: stw      r29, 0xd4(r1)
//   0x800295cc: stw      r28, 0xd0(r1)
//   0x800295d0: lwz      r0, 0xc(r3)
//   0x800295d4: cmpwi    r0, 1
//   0x800295d8: beq      0x800295e4
//   0x800295dc: cmpwi    r0, 2
//   0x800295e0: bne      0x80029768
//   0x800295e4: lwz      r4, 0x24(r3)
//   0x800295e8: rlwinm.  r0, r4, 0, 0xf, 0xf
//   0x800295ec: bne      0x800295f8
//   0x800295f0: rlwinm.  r0, r4, 0, 0x10, 0x10
//   0x800295f4: beq      0x80029768
//   0x800295f8: lfs      f0, -0x799c(r2)
//   0x800295fc: li       r0, 1
//

// TODO: Full decompilation requires Ghidra
