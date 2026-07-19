// Function at 0x801a699c
// Size: 768 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801a699c: stwu     r1, -0x20(r1)
//   0x801a69a0: mflr     r0
//   0x801a69a4: lis      r3, -0x3400
//   0x801a69a8: stw      r0, 0x24(r1)
//   0x801a69ac: stw      r31, 0x1c(r1)
//   0x801a69b0: stw      r30, 0x18(r1)
//   0x801a69b4: mr       r30, r4
//   0x801a69b8: stw      r29, 0x14(r1)
//   0x801a69bc: lwz      r31, 0x3000(r3)
//   0x801a69c0: lwz      r0, 0x3004(r3)
//   0x801a69c4: rlwinm.  r31, r31, 0, 0x10, 0xe
//   0x801a69c8: beq      0x801a69d4
//   0x801a69cc: and.     r0, r31, r0
//   0x801a69d0: bne      0x801a69dc
//   0x801a69d4: mr       r3, r30
//   0x801a69d8: bl       0x801a1eb8
//   0x801a69dc: rlwinm.  r0, r31, 0, 0x18, 0x18
//   0x801a69e0: li       r0, 0
//   0x801a69e4: beq      0x801a6a2c
//   0x801a69e8: lis      r3, -0x3400
//

// TODO: Full decompilation requires Ghidra
