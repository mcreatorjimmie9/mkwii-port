// Function at 0x8018059c
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8018059c: stwu     r1, -0x20(r1)
//   0x801805a0: mflr     r0
//   0x801805a4: stw      r0, 0x24(r1)
//   0x801805a8: lbz      r0, 0x50(r4)
//   0x801805ac: stw      r31, 0x1c(r1)
//   0x801805b0: mr       r31, r3
//   0x801805b4: rlwinm.  r0, r0, 0x1d, 0x1f, 0x1f
//   0x801805b8: beq      0x801805f8
//   0x801805bc: lwz      r12, 0(r3)
//   0x801805c0: lwz      r12, 0x60(r12)
//   0x801805c4: mtctr    r12
//   0x801805c8: bctrl    
//   0x801805cc: lis      r4, 0xff
//   0x801805d0: mr       r3, r31
//   0x801805d4: addi     r0, r4, 0xff
//   0x801805d8: stw      r0, 8(r1)
//   0x801805dc: bl       0x801867a4
//   0x801805e0: stw      r4, 0x14(r1)
//   0x801805e4: addi     r4, r31, 0x4c
//   0x801805e8: addi     r5, r1, 8
//

// TODO: Full decompilation requires Ghidra
