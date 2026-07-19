// Function at 0x801aea44
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801aea44: stwu     r1, -0x20(r1)
//   0x801aea48: mflr     r0
//   0x801aea4c: lis      r5, -0x8000
//   0x801aea50: stw      r0, 0x24(r1)
//   0x801aea54: stw      r31, 0x1c(r1)
//   0x801aea58: mr       r31, r4
//   0x801aea5c: stw      r30, 0x18(r1)
//   0x801aea60: srw      r30, r5, r3
//   0x801aea64: stw      r29, 0x14(r1)
//   0x801aea68: mr       r29, r3
//   0x801aea6c: lwz      r0, -0x6244(r13)
//   0x801aea70: and.     r0, r0, r30
//   0x801aea74: beq      0x801aeaf0
//   0x801aea78: clrlwi.  r0, r4, 0x1c
//   0x801aea7c: bne      0x801aea84
//   0x801aea80: bl       0x801ae7e0
//   0x801aea84: rlwinm.  r0, r31, 0, 0x1c, 0x1c
//   0x801aea88: beq      0x801aeaf0
//   0x801aea8c: bl       0x801a650c
//   0x801aea90: mr       r31, r3
//

// TODO: Full decompilation requires Ghidra
