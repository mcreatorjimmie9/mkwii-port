// Function at 0x801e74e8
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801e74e8: stwu     r1, -0x20(r1)
//   0x801e74ec: mflr     r0
//   0x801e74f0: stw      r0, 0x24(r1)
//   0x801e74f4: stw      r31, 0x1c(r1)
//   0x801e74f8: mr       r31, r3
//   0x801e74fc: bl       0x801dc71c
//   0x801e7500: lwz      r0, 0xc(r31)
//   0x801e7504: rlwinm   r3, r3, 0, 0, 0x17
//   0x801e7508: rlwinm   r0, r0, 0, 0, 0x17
//   0x801e750c: cmplw    r0, r3
//   0x801e7510: beq      0x801e751c
//   0x801e7514: li       r3, -7
//   0x801e7518: b        0x801e7538
//   0x801e751c: mr       r3, r31
//   0x801e7520: addi     r4, r1, 8
//   0x801e7524: bl       0x801e754c
//   0x801e7528: cmpwi    r3, 0
//   0x801e752c: bne      0x801e7538
//   0x801e7530: lwz      r3, 8(r1)
//   0x801e7534: bl       0x801e7e54
//

// TODO: Full decompilation requires Ghidra
