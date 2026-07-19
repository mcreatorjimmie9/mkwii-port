// Function at 0x80057370
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80057370: stwu     r1, -0x20(r1)
//   0x80057374: mflr     r0
//   0x80057378: stw      r0, 0x24(r1)
//   0x8005737c: stw      r31, 0x1c(r1)
//   0x80057380: li       r31, 0
//   0x80057384: stw      r30, 0x18(r1)
//   0x80057388: li       r30, 0
//   0x8005738c: stw      r29, 0x14(r1)
//   0x80057390: mr       r29, r3
//   0x80057394: b        0x800573c0
//   0x80057398: lwz      r3, 0x1c(r29)
//   0x8005739c: lwzx     r3, r3, r31
//   0x800573a0: cmpwi    r3, 0
//   0x800573a4: beq      0x800573b8
//   0x800573a8: lwz      r12, 0(r3)
//   0x800573ac: lwz      r12, 0x24(r12)
//   0x800573b0: mtctr    r12
//   0x800573b4: bctrl    
//   0x800573b8: addi     r31, r31, 4
//   0x800573bc: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
