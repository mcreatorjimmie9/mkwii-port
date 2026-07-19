// Function at 0x8005dc00
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005dc00: stwu     r1, -0x20(r1)
//   0x8005dc04: mflr     r0
//   0x8005dc08: stw      r0, 0x24(r1)
//   0x8005dc0c: stw      r31, 0x1c(r1)
//   0x8005dc10: li       r31, 0
//   0x8005dc14: stw      r30, 0x18(r1)
//   0x8005dc18: li       r30, 0
//   0x8005dc1c: stw      r29, 0x14(r1)
//   0x8005dc20: mr       r29, r3
//   0x8005dc24: b        0x8005dc50
//   0x8005dc28: lwz      r3, 0x1c(r29)
//   0x8005dc2c: lwzx     r3, r3, r31
//   0x8005dc30: cmpwi    r3, 0
//   0x8005dc34: beq      0x8005dc48
//   0x8005dc38: lwz      r12, 0(r3)
//   0x8005dc3c: lwz      r12, 0x34(r12)
//   0x8005dc40: mtctr    r12
//   0x8005dc44: bctrl    
//   0x8005dc48: addi     r31, r31, 4
//   0x8005dc4c: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
