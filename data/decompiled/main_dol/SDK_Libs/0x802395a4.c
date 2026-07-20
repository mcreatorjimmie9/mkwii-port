// Function at 0x802395a4
// Size: 204 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x802395a4: stwu     r1, -0x60(r1)
//   0x802395a8: mflr     r0
//   0x802395ac: stw      r0, 0x64(r1)
//   0x802395b0: stfd     f31, 0x50(r1)
//   0x802395b4: xscmpgtdp vs31, f1, f0
//   0x802395b8: fmr      f31, f1
//   0x802395bc: stw      r31, 0x4c(r1)
//   0x802395c0: mr       r31, r5
//   0x802395c4: stw      r30, 0x48(r1)
//   0x802395c8: mr       r30, r3
//   0x802395cc: bl       0x8023933c
//   0x802395d0: lwz      r12, 0(r31)
//   0x802395d4: mr       r4, r31
//   0x802395d8: addi     r3, r1, 0x38
//   0x802395dc: lwz      r12, 0x20(r12)
//   0x802395e0: mtctr    r12
//   0x802395e4: bctrl    
//   0x802395e8: mr       r4, r30
//   0x802395ec: addi     r3, r1, 0x2c
//   0x802395f0: addi     r5, r1, 0x38
//

// TODO: Full decompilation requires Ghidra
