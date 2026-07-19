// Function at 0x801e81f0
// Size: 236 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801e81f0: stwu     r1, -0x30(r1)
//   0x801e81f4: mflr     r0
//   0x801e81f8: stw      r0, 0x34(r1)
//   0x801e81fc: addi     r11, r1, 0x30
//   0x801e8200: bl       0x80020a40
//   0x801e8204: mr       r28, r3
//   0x801e8208: mr       r27, r4
//   0x801e820c: addi     r3, r1, 8
//   0x801e8210: bl       0x801dc24c
//   0x801e8214: lwz      r3, 8(r1)
//   0x801e8218: lwz      r4, 0xc(r1)
//   0x801e821c: xor      r0, r3, r28
//   0x801e8220: xor      r5, r4, r27
//   0x801e8224: or.      r0, r5, r0
//   0x801e8228: bne      0x801e8234
//   0x801e822c: li       r3, -0x23
//   0x801e8230: b        0x801e82c4
//   0x801e8234: bl       0x801e8374
//   0x801e8238: mr       r4, r27
//   0x801e823c: rlwinm   r27, r3, 0x11, 0x1d, 0x1f
//

// TODO: Full decompilation requires Ghidra
