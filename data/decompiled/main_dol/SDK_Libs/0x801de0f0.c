// Function at 0x801de0f0
// Size: 236 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801de0f0: stwu     r1, -0x20(r1)
//   0x801de0f4: mflr     r0
//   0x801de0f8: stw      r0, 0x24(r1)
//   0x801de0fc: stw      r31, 0x1c(r1)
//   0x801de100: mr       r31, r4
//   0x801de104: stw      r30, 0x18(r1)
//   0x801de108: mr       r30, r3
//   0x801de10c: lwz      r5, 4(r3)
//   0x801de110: rlwinm.  r0, r5, 0, 0x17, 0x17
//   0x801de114: beq      0x801de120
//   0x801de118: rlwinm.  r0, r5, 0, 0x16, 0x16
//   0x801de11c: beq      0x801de128
//   0x801de120: li       r3, -7
//   0x801de124: b        0x801de194
//   0x801de128: rlwinm.  r0, r5, 0, 0x1c, 0x1c
//   0x801de12c: bne      0x801de138
//   0x801de130: li       r3, -4
//   0x801de134: b        0x801de194
//   0x801de138: addi     r3, r1, 8
//   0x801de13c: bl       0x801dc24c
//

// TODO: Full decompilation requires Ghidra
