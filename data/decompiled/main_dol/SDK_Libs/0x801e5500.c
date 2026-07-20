// Function at 0x801e5500
// Size: 436 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801e5500: stwu     r1, -0x10(r1)
//   0x801e5504: mflr     r0
//   0x801e5508: stw      r0, 0x14(r1)
//   0x801e550c: stw      r31, 0xc(r1)
//   0x801e5510: mr       r31, r4
//   0x801e5514: stw      r30, 8(r1)
//   0x801e5518: mr       r30, r3
//   0x801e551c: mr       r3, r31
//   0x801e5520: bl       0x801de8d4
//   0x801e5524: cmpwi    r3, 0
//   0x801e5528: bne      0x801e5534
//   0x801e552c: li       r3, 0
//   0x801e5530: b        0x801e569c
//   0x801e5534: lwz      r6, 0x10(r30)
//   0x801e5538: clrlwi.  r0, r6, 0x1f
//   0x801e553c: beq      0x801e5554
//   0x801e5540: lwz      r0, 4(r31)
//   0x801e5544: rlwinm.  r0, r0, 0, 0x1c, 0x1c
//   0x801e5548: bne      0x801e5554
//   0x801e554c: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
