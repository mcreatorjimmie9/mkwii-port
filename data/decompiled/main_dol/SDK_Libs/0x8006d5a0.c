// Function at 0x8006d5a0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006d5a0: stwu     r1, -0x10(r1)
//   0x8006d5a4: mflr     r0
//   0x8006d5a8: stw      r0, 0x14(r1)
//   0x8006d5ac: rlwinm   r0, r6, 0x1f, 0x1d, 0x1f
//   0x8006d5b0: cmplwi   r0, 7
//   0x8006d5b4: stw      r31, 0xc(r1)
//   0x8006d5b8: mr       r31, r3
//   0x8006d5bc: bne      0x8006d5c8
//   0x8006d5c0: li       r3, 0
//   0x8006d5c4: b        0x8006d628
//   0x8006d5c8: cmpwi    r4, 0
//   0x8006d5cc: beq      0x8006d5f0
//   0x8006d5d0: lis      r6, -0x7fdc
//   0x8006d5d4: slwi     r0, r0, 2
//   0x8006d5d8: addi     r6, r6, 0x7c20
//   0x8006d5dc: mr       r4, r5
//   0x8006d5e0: lwzx     r12, r6, r0
//   0x8006d5e4: mtctr    r12
//   0x8006d5e8: bctrl    
//   0x8006d5ec: b        0x8006d60c
//

// TODO: Full decompilation requires Ghidra
