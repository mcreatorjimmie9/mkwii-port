// Function at 0x8005d920
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d920: stwu     r1, -0x20(r1)
//   0x8005d924: mflr     r0
//   0x8005d928: stw      r0, 0x24(r1)
//   0x8005d92c: stfd     f31, 0x18(r1)
//   0x8005d930: fmr      f31, f1
//   0x8005d934: stw      r31, 0x14(r1)
//   0x8005d938: li       r31, 0
//   0x8005d93c: stw      r30, 0x10(r1)
//   0x8005d940: li       r30, 0
//   0x8005d944: stw      r29, 0xc(r1)
//   0x8005d948: mr       r29, r3
//   0x8005d94c: b        0x8005d97c
//   0x8005d950: lwz      r3, 0x1c(r29)
//   0x8005d954: lwzx     r3, r3, r31
//   0x8005d958: cmpwi    r3, 0
//   0x8005d95c: beq      0x8005d974
//   0x8005d960: lwz      r12, 0(r3)
//   0x8005d964: fmr      f1, f31
//   0x8005d968: lwz      r12, 0x1c(r12)
//   0x8005d96c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
