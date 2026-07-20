// Function at 0x801228a4
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801228a4: stwu     r1, -0x20(r1)
//   0x801228a8: mflr     r0
//   0x801228ac: stw      r0, 0x24(r1)
//   0x801228b0: stw      r31, 0x1c(r1)
//   0x801228b4: stw      r30, 0x18(r1)
//   0x801228b8: stw      r29, 0x14(r1)
//   0x801228bc: mr       r29, r3
//   0x801228c0: lwz      r30, 0x20(r3)
//   0x801228c4: lwz      r12, 0x14(r30)
//   0x801228c8: mtctr    r12
//   0x801228cc: bctrl    
//   0x801228d0: cmpwi    r3, 0
//   0x801228d4: beq      0x801228dc
//   0x801228d8: b        0x801229c8
//   0x801228dc: addi     r3, r13, -0x74b8
//   0x801228e0: li       r4, 1
//   0x801228e4: bl       0x800f59cc
//   0x801228e8: cmpwi    r3, 0
//   0x801228ec: stw      r3, 0x18(r29)
//   0x801228f0: bne      0x801228fc
//

// TODO: Full decompilation requires Ghidra
