// Function at 0x8005d8a0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d8a0: stwu     r1, -0x20(r1)
//   0x8005d8a4: mflr     r0
//   0x8005d8a8: stw      r0, 0x24(r1)
//   0x8005d8ac: stw      r31, 0x1c(r1)
//   0x8005d8b0: li       r31, 0
//   0x8005d8b4: stw      r30, 0x18(r1)
//   0x8005d8b8: li       r30, 0
//   0x8005d8bc: stw      r29, 0x14(r1)
//   0x8005d8c0: mr       r29, r3
//   0x8005d8c4: b        0x8005d8f0
//   0x8005d8c8: lwz      r3, 0x1c(r29)
//   0x8005d8cc: lwzx     r3, r3, r31
//   0x8005d8d0: cmpwi    r3, 0
//   0x8005d8d4: beq      0x8005d8e8
//   0x8005d8d8: lwz      r12, 0(r3)
//   0x8005d8dc: lwz      r12, 0x24(r12)
//   0x8005d8e0: mtctr    r12
//   0x8005d8e4: bctrl    
//   0x8005d8e8: addi     r31, r31, 4
//   0x8005d8ec: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
