// Function at 0x802145cc
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802145cc: stwu     r1, -0x10(r1)
//   0x802145d0: mflr     r0
//   0x802145d4: stw      r0, 0x14(r1)
//   0x802145d8: stw      r31, 0xc(r1)
//   0x802145dc: mr       r31, r3
//   0x802145e0: mr       r3, r4
//   0x802145e4: lwz      r12, 0(r4)
//   0x802145e8: lwz      r12, 8(r12)
//   0x802145ec: mtctr    r12
//   0x802145f0: bctrl    
//   0x802145f4: lfs      f2, 0x28(r3)
//   0x802145f8: lfs      f1, 0x24(r3)
//   0x802145fc: lfs      f0, 0x20(r3)
//   0x80214600: stfs     f0, 0(r31)
//   0x80214604: stfs     f1, 4(r31)
//   0x80214608: stfs     f2, 8(r31)
//   0x8021460c: lwz      r31, 0xc(r1)
//   0x80214610: lwz      r0, 0x14(r1)
//   0x80214614: mtlr     r0
//   0x80214618: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
