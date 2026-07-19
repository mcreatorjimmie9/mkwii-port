// Function at 0x8005d840
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d840: stwu     r1, -0x10(r1)
//   0x8005d844: mflr     r0
//   0x8005d848: stw      r0, 0x14(r1)
//   0x8005d84c: stw      r31, 0xc(r1)
//   0x8005d850: li       r31, 0
//   0x8005d854: stw      r30, 8(r1)
//   0x8005d858: mr       r30, r3
//   0x8005d85c: b        0x8005d87c
//   0x8005d860: lwz      r12, 0(r30)
//   0x8005d864: mr       r3, r30
//   0x8005d868: mr       r4, r31
//   0x8005d86c: lwz      r12, 0x40(r12)
//   0x8005d870: mtctr    r12
//   0x8005d874: bctrl    
//   0x8005d878: addi     r31, r31, 1
//   0x8005d87c: lwz      r0, 0x18(r30)
//   0x8005d880: cmpw     r31, r0
//   0x8005d884: blt      0x8005d860
//   0x8005d888: lwz      r0, 0x14(r1)
//   0x8005d88c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
