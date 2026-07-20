// Function at 0x800f4410
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800f4410: stwu     r1, -0x10(r1)
//   0x800f4414: mflr     r0
//   0x800f4418: stw      r0, 0x14(r1)
//   0x800f441c: stw      r31, 0xc(r1)
//   0x800f4420: mr       r31, r3
//   0x800f4424: lwz      r0, 0x30(r3)
//   0x800f4428: cmpwi    r0, 0
//   0x800f442c: bne      0x800f4450
//   0x800f4430: lwz      r3, 0x28(r3)
//   0x800f4434: cmpwi    r3, 0
//   0x800f4438: blt      0x800f4440
//   0x800f443c: bl       0x801137b8
//   0x800f4440: li       r3, 0x12
//   0x800f4444: li       r0, 1
//   0x800f4448: stw      r3, 0x2c(r31)
//   0x800f444c: stw      r0, 0x30(r31)
//   0x800f4450: lwz      r0, 0x14(r1)
//   0x800f4454: lwz      r31, 0xc(r1)
//   0x800f4458: mtlr     r0
//   0x800f445c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
