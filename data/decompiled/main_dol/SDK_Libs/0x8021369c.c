// Function at 0x8021369c
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8021369c: stwu     r1, -0x10(r1)
//   0x802136a0: mflr     r0
//   0x802136a4: stw      r0, 0x14(r1)
//   0x802136a8: addi     r0, r4, 1
//   0x802136ac: cmplwi   r0, 1
//   0x802136b0: bgt      0x802136e0
//   0x802136b4: lwz      r0, -0x5e5c(r13)
//   0x802136b8: lis      r5, -0x7fc8
//   0x802136bc: addi     r5, r5, -0xf80
//   0x802136c0: mulli    r0, r0, 0xc
//   0x802136c4: add      r5, r5, r0
//   0x802136c8: lwz      r12, 8(r5)
//   0x802136cc: cmpwi    r12, 0
//   0x802136d0: beq      0x802136fc
//   0x802136d4: mtctr    r12
//   0x802136d8: bctrl    
//   0x802136dc: b        0x802136fc
//   0x802136e0: lwz      r0, -0x5e5c(r13)
//   0x802136e4: lis      r4, -0x7fc8
//   0x802136e8: addi     r4, r4, -0xf80
//

// TODO: Full decompilation requires Ghidra
