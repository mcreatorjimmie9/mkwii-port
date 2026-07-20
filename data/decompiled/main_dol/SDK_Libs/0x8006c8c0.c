// Function at 0x8006c8c0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006c8c0: stwu     r1, -0x10(r1)
//   0x8006c8c4: mflr     r0
//   0x8006c8c8: stw      r0, 0x14(r1)
//   0x8006c8cc: rlwinm   r0, r6, 0x1f, 0x1d, 0x1f
//   0x8006c8d0: cmplwi   r0, 7
//   0x8006c8d4: stw      r31, 0xc(r1)
//   0x8006c8d8: mr       r31, r3
//   0x8006c8dc: bne      0x8006c8e8
//   0x8006c8e0: li       r3, 0
//   0x8006c8e4: b        0x8006c948
//   0x8006c8e8: cmpwi    r4, 0
//   0x8006c8ec: beq      0x8006c910
//   0x8006c8f0: lis      r6, -0x7fdc
//   0x8006c8f4: slwi     r0, r0, 2
//   0x8006c8f8: addi     r6, r6, 0x7be8
//   0x8006c8fc: mr       r4, r5
//   0x8006c900: lwzx     r12, r6, r0
//   0x8006c904: mtctr    r12
//   0x8006c908: bctrl    
//   0x8006c90c: b        0x8006c92c
//

// TODO: Full decompilation requires Ghidra
