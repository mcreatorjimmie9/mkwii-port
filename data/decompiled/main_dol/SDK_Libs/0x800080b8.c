// Function at 0x800080b8
// Size: 2776 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x150 bytes
//
// Disassembly (first 20 instructions):
//   0x800080b8: stwu     r1, -0x150(r1)
//   0x800080bc: mflr     r0
//   0x800080c0: stw      r0, 0x154(r1)
//   0x800080c4: stfd     f31, 0x140(r1)
//   0x800080c8: xsmaddmdp f31, f1, f0
//   0x800080cc: stfd     f30, 0x130(r1)
//   0x800080d0: xxsel    vs30, vs1, vs0, v4
//   0x800080d4: lis      r0, 0x4330
//   0x800080d8: stw      r31, 0x12c(r1)
//   0x800080dc: stw      r30, 0x128(r1)
//   0x800080e0: mr       r30, r3
//   0x800080e4: stw      r29, 0x124(r1)
//   0x800080e8: li       r29, 0
//   0x800080ec: lwz      r4, -0x6c40(r13)
//   0x800080f0: stw      r0, 0x110(r1)
//   0x800080f4: lwz      r4, 0x48(r4)
//   0x800080f8: stw      r0, 0x118(r1)
//   0x800080fc: cmpwi    r4, 1
//   0x80008100: blt      0x8000810c
//   0x80008104: cmpwi    r4, 3
//

// TODO: Full decompilation requires Ghidra
