// Function at 0x800573f0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800573f0: stwu     r1, -0x20(r1)
//   0x800573f4: mflr     r0
//   0x800573f8: stw      r0, 0x24(r1)
//   0x800573fc: stfd     f31, 0x18(r1)
//   0x80057400: fmr      f31, f1
//   0x80057404: stw      r31, 0x14(r1)
//   0x80057408: li       r31, 0
//   0x8005740c: stw      r30, 0x10(r1)
//   0x80057410: li       r30, 0
//   0x80057414: stw      r29, 0xc(r1)
//   0x80057418: mr       r29, r3
//   0x8005741c: b        0x8005744c
//   0x80057420: lwz      r3, 0x1c(r29)
//   0x80057424: lwzx     r3, r3, r31
//   0x80057428: cmpwi    r3, 0
//   0x8005742c: beq      0x80057444
//   0x80057430: lwz      r12, 0(r3)
//   0x80057434: fmr      f1, f31
//   0x80057438: lwz      r12, 0x1c(r12)
//   0x8005743c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
