// Function at 0x802356bc
// Size: 956 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x70 bytes
//
// Disassembly (first 20 instructions):
//   0x802356bc: stwu     r1, -0x70(r1)
//   0x802356c0: mflr     r0
//   0x802356c4: stw      r0, 0x74(r1)
//   0x802356c8: addi     r11, r1, 0x70
//   0x802356cc: bl       0x80020a3c
//   0x802356d0: lwz      r0, 4(r3)
//   0x802356d4: mr       r30, r3
//   0x802356d8: li       r29, 0
//   0x802356dc: cmpwi    r0, 0
//   0x802356e0: beq      0x802356f4
//   0x802356e4: lbz      r0, 0x29(r3)
//   0x802356e8: clrlwi.  r0, r0, 0x1f
//   0x802356ec: bne      0x802356f4
//   0x802356f0: li       r29, 1
//   0x802356f4: lbz      r4, 0x28(r3)
//   0x802356f8: rlwinm   r0, r29, 1, 0x17, 0x1e
//   0x802356fc: mr       r3, r30
//   0x80235700: add      r0, r4, r0
//   0x80235704: clrlwi   r31, r0, 0x18
//   0x80235708: bl       0x8023493c
//

// TODO: Full decompilation requires Ghidra
