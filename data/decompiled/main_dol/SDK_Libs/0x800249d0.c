// Function at 0x800249d0
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xa0 bytes
//
// Disassembly (first 20 instructions):
//   0x800249d0: stwu     r1, -0xa0(r1)
//   0x800249d4: mflr     r0
//   0x800249d8: stw      r0, 0xa4(r1)
//   0x800249dc: stfd     f31, 0x90(r1)
//   0x800249e0: xscmpgedp vs31, f1, f0
//   0x800249e4: stw      r31, 0x8c(r1)
//   0x800249e8: stw      r30, 0x88(r1)
//   0x800249ec: stw      r29, 0x84(r1)
//   0x800249f0: stw      r28, 0x80(r1)
//   0x800249f4: mr       r28, r3
//   0x800249f8: addi     r3, r1, 0xc
//   0x800249fc: bl       0x800b42e0
//   0x80024a00: lwz      r0, 0(r28)
//   0x80024a04: cmpwi    r0, 0
//   0x80024a08: bne      0x80024a1c
//   0x80024a0c: addi     r3, r1, 0xc
//   0x80024a10: li       r4, -1
//   0x80024a14: bl       0x800b4340
//   0x80024a18: b        0x80024b3c
//   0x80024a1c: stw      r0, 0x54(r1)
//

// TODO: Full decompilation requires Ghidra
