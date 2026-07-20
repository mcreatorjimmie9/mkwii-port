// Function at 0x800b4430
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800b4430: stwu     r1, -0x20(r1)
//   0x800b4434: mflr     r0
//   0x800b4438: stw      r0, 0x24(r1)
//   0x800b443c: lwz      r0, 0x48(r3)
//   0x800b4440: stw      r31, 0x1c(r1)
//   0x800b4444: mr       r31, r3
//   0x800b4448: cmpwi    r0, 0
//   0x800b444c: beq      0x800b4468
//   0x800b4450: mr       r3, r0
//   0x800b4454: lwz      r12, 0(r3)
//   0x800b4458: lwz      r12, 0x34(r12)
//   0x800b445c: mtctr    r12
//   0x800b4460: bctrl    
//   0x800b4464: b        0x800b446c
//   0x800b4468: li       r3, 0
//   0x800b446c: xoris    r3, r3, 0x8000
//   0x800b4470: lis      r0, 0x4330
//   0x800b4474: stw      r3, 0xc(r1)
//   0x800b4478: lfd      f2, -0x6c98(r2)
//   0x800b447c: stw      r0, 8(r1)
//

// TODO: Full decompilation requires Ghidra
