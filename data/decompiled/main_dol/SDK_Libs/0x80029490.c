// Function at 0x80029490
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x70 bytes
//
// Disassembly (first 20 instructions):
//   0x80029490: stwu     r1, -0x70(r1)
//   0x80029494: mflr     r0
//   0x80029498: stw      r0, 0x74(r1)
//   0x8002949c: stw      r31, 0x6c(r1)
//   0x800294a0: stw      r30, 0x68(r1)
//   0x800294a4: mr       r30, r3
//   0x800294a8: lwz      r0, 0x20(r3)
//   0x800294ac: rlwinm.  r0, r0, 0, 0x16, 0x16
//   0x800294b0: bne      0x8002958c
//   0x800294b4: lwz      r0, 0xb4(r3)
//   0x800294b8: cmpwi    r0, 0
//   0x800294bc: bne      0x8002958c
//   0x800294c0: lhz      r0, 0xe8(r3)
//   0x800294c4: li       r4, 1
//   0x800294c8: stw      r4, 0xb4(r3)
//   0x800294cc: cmpwi    r0, 0
//   0x800294d0: beq      0x800294e4
//   0x800294d4: lwz      r4, 0xbc(r3)
//   0x800294d8: lwz      r0, 0x50(r4)
//   0x800294dc: oris     r0, r0, 1
//

// TODO: Full decompilation requires Ghidra
