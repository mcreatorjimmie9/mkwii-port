// Function at 0x8008c770
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8008c770: stwu     r1, -0x20(r1)
//   0x8008c774: mflr     r0
//   0x8008c778: stw      r0, 0x24(r1)
//   0x8008c77c: stw      r31, 0x1c(r1)
//   0x8008c780: stw      r30, 0x18(r1)
//   0x8008c784: stw      r29, 0x14(r1)
//   0x8008c788: stw      r28, 0x10(r1)
//   0x8008c78c: mr       r28, r3
//   0x8008c790: lbz      r0, 0x24(r3)
//   0x8008c794: cmpwi    r0, 0
//   0x8008c798: bne      0x8008c7f4
//   0x8008c79c: lis      r6, 0x38e4
//   0x8008c7a0: mr       r30, r4
//   0x8008c7a4: addi     r0, r6, -0x71c7
//   0x8008c7a8: li       r29, 0
//   0x8008c7ac: mulhwu   r0, r0, r5
//   0x8008c7b0: rlwinm.  r0, r0, 0x1c, 4, 0x1f
//   0x8008c7b4: stw      r0, 0x28(r3)
//   0x8008c7b8: beq      0x8008c7ec
//   0x8008c7bc: addi     r31, r3, 0x10
//

// TODO: Full decompilation requires Ghidra
