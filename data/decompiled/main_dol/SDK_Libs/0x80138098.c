// Function at 0x80138098
// Size: 540 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80138098: stwu     r1, -0x30(r1)
//   0x8013809c: mflr     r0
//   0x801380a0: stw      r0, 0x34(r1)
//   0x801380a4: addi     r11, r1, 0x30
//   0x801380a8: bl       0x80020a40
//   0x801380ac: lis      r6, -0x7fcd
//   0x801380b0: mr       r28, r3
//   0x801380b4: addi     r6, r6, 0x1ef8
//   0x801380b8: mr       r29, r4
//   0x801380bc: lbz      r0, 0x640(r6)
//   0x801380c0: mr       r30, r5
//   0x801380c4: rlwinm.  r0, r0, 0, 0x1a, 0x1a
//   0x801380c8: bne      0x801380d4
//   0x801380cc: li       r3, 4
//   0x801380d0: b        0x8013829c
//   0x801380d4: addi     r31, r6, 0x34
//   0x801380d8: li       r27, 0
//   0x801380dc: lbz      r0, 0x119(r31)
//   0x801380e0: cmpwi    r0, 0
//   0x801380e4: beq      0x80138104
//

// TODO: Full decompilation requires Ghidra
