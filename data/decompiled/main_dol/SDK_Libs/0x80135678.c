// Function at 0x80135678
// Size: 300 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80135678: stwu     r1, -0x20(r1)
//   0x8013567c: mflr     r0
//   0x80135680: stw      r0, 0x24(r1)
//   0x80135684: addi     r11, r1, 0x20
//   0x80135688: bl       0x80020a40
//   0x8013568c: lis      r30, -0x7fcd
//   0x80135690: mr       r31, r3
//   0x80135694: addi     r30, r30, 0x1b94
//   0x80135698: li       r27, 0
//   0x8013569c: rlwinm   r28, r27, 5, 0x13, 0x1a
//   0x801356a0: add      r29, r30, r28
//   0x801356a4: lbz      r0, 0xb6(r29)
//   0x801356a8: cmpwi    r0, 0
//   0x801356ac: beq      0x801356dc
//   0x801356b0: addi     r3, r29, 0xb0
//   0x801356b4: addi     r4, r31, 8
//   0x801356b8: bl       0x80131d24
//   0x801356bc: cmpwi    r3, 0
//   0x801356c0: bne      0x801356dc
//   0x801356c4: mr       r3, r29
//

// TODO: Full decompilation requires Ghidra
