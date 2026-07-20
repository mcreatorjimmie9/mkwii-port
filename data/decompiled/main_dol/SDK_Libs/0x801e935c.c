// Function at 0x801e935c
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801e935c: stwu     r1, -0x10(r1)
//   0x801e9360: mflr     r0
//   0x801e9364: stw      r0, 0x14(r1)
//   0x801e9368: stw      r31, 0xc(r1)
//   0x801e936c: mr       r31, r4
//   0x801e9370: li       r4, 1
//   0x801e9374: stw      r30, 8(r1)
//   0x801e9378: mr       r30, r3
//   0x801e937c: bl       0x801e8c54
//   0x801e9380: cmpwi    r3, 0
//   0x801e9384: beq      0x801e938c
//   0x801e9388: b        0x801e93f8
//   0x801e938c: lwz      r0, -0x5ee8(r13)
//   0x801e9390: cmpwi    r0, 0
//   0x801e9394: bne      0x801e93c0
//   0x801e9398: rlwinm.  r0, r31, 0, 0x1d, 0x1d
//   0x801e939c: beq      0x801e93c0
//   0x801e93a0: addi     r3, r30, 0xb4
//   0x801e93a4: addi     r4, r13, -0x6d40
//   0x801e93a8: li       r5, 7
//

// TODO: Full decompilation requires Ghidra
