// Function at 0x801de1dc
// Size: 804 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801de1dc: stwu     r1, -0x10(r1)
//   0x801de1e0: mflr     r0
//   0x801de1e4: stw      r0, 0x14(r1)
//   0x801de1e8: stw      r31, 0xc(r1)
//   0x801de1ec: mr       r31, r4
//   0x801de1f0: stw      r30, 8(r1)
//   0x801de1f4: mr       r30, r3
//   0x801de1f8: lwz      r5, 4(r3)
//   0x801de1fc: rlwinm.  r0, r5, 0, 0x17, 0x17
//   0x801de200: beq      0x801de20c
//   0x801de204: rlwinm.  r0, r5, 0, 0x16, 0x16
//   0x801de208: beq      0x801de214
//   0x801de20c: li       r3, -7
//   0x801de210: b        0x801de290
//   0x801de214: cmpwi    r4, 0
//   0x801de218: bne      0x801de224
//   0x801de21c: li       r3, -3
//   0x801de220: b        0x801de290
//   0x801de224: clrlwi.  r0, r5, 0x1f
//   0x801de228: beq      0x801de234
//

// TODO: Full decompilation requires Ghidra
