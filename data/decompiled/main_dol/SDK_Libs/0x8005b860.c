// Function at 0x8005b860
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b860: stwu     r1, -0x20(r1)
//   0x8005b864: mflr     r0
//   0x8005b868: stw      r0, 0x24(r1)
//   0x8005b86c: stw      r31, 0x1c(r1)
//   0x8005b870: li       r31, 0
//   0x8005b874: stw      r30, 0x18(r1)
//   0x8005b878: li       r30, 0
//   0x8005b87c: stw      r29, 0x14(r1)
//   0x8005b880: mr       r29, r3
//   0x8005b884: b        0x8005b8b0
//   0x8005b888: lwz      r3, 0x1c(r29)
//   0x8005b88c: lwzx     r3, r3, r31
//   0x8005b890: cmpwi    r3, 0
//   0x8005b894: beq      0x8005b8a8
//   0x8005b898: lwz      r12, 0(r3)
//   0x8005b89c: lwz      r12, 0x24(r12)
//   0x8005b8a0: mtctr    r12
//   0x8005b8a4: bctrl    
//   0x8005b8a8: addi     r31, r31, 4
//   0x8005b8ac: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
