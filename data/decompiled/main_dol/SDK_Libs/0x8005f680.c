// Function at 0x8005f680
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005f680: stwu     r1, -0x10(r1)
//   0x8005f684: mflr     r0
//   0x8005f688: fmr      f3, f1
//   0x8005f68c: stw      r0, 0x14(r1)
//   0x8005f690: stw      r31, 0xc(r1)
//   0x8005f694: mr       r31, r3
//   0x8005f698: lwz      r12, 0x1c(r3)
//   0x8005f69c: lfs      f1, 0x14(r3)
//   0x8005f6a0: lfs      f2, 0x18(r3)
//   0x8005f6a4: mtctr    r12
//   0x8005f6a8: bctrl    
//   0x8005f6ac: lwz      r0, 0x24(r31)
//   0x8005f6b0: stfs     f1, 0xc(r31)
//   0x8005f6b4: clrlwi.  r0, r0, 0x1f
//   0x8005f6b8: beq      0x8005f6c4
//   0x8005f6bc: mr       r3, r31
//   0x8005f6c0: bl       0x80060030
//   0x8005f6c4: lwz      r0, 0x14(r1)
//   0x8005f6c8: lwz      r31, 0xc(r1)
//   0x8005f6cc: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
