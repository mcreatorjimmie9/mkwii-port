// Function at 0x8018d09c
// Size: 76 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8018d09c: stwu     r1, -0x10(r1)
//   0x8018d0a0: mflr     r0
//   0x8018d0a4: stw      r0, 0x14(r1)
//   0x8018d0a8: lwz      r12, 0(r3)
//   0x8018d0ac: lwz      r12, 0x4c(r12)
//   0x8018d0b0: mtctr    r12
//   0x8018d0b4: bctrl    
//   0x8018d0b8: srwi     r0, r3, 0x18
//   0x8018d0bc: stb      r0, 8(r1)
//   0x8018d0c0: rlwinm   r0, r3, 0x10, 0x18, 0x1f
//   0x8018d0c4: stb      r0, 9(r1)
//   0x8018d0c8: rlwinm   r0, r3, 0x18, 0x18, 0x1f
//   0x8018d0cc: mr       r3, r0
//   0x8018d0d0: stb      r0, 0xa(r1)
//   0x8018d0d4: extsb    r3, r3
//   0x8018d0d8: lwz      r0, 0x14(r1)
//   0x8018d0dc: mtlr     r0
//   0x8018d0e0: addi     r1, r1, 0x10
//   0x8018d0e4: blr      
//

// TODO: Full decompilation requires Ghidra
