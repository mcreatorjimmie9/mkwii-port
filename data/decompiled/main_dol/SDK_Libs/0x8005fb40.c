// Function at 0x8005fb40
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8005fb40: stwu     r1, -0x30(r1)
//   0x8005fb44: mflr     r0
//   0x8005fb48: stw      r0, 0x34(r1)
//   0x8005fb4c: li       r0, -1
//   0x8005fb50: stw      r31, 0x2c(r1)
//   0x8005fb54: mr       r31, r4
//   0x8005fb58: addi     r4, r1, 0x10
//   0x8005fb5c: stw      r0, 0x1c(r1)
//   0x8005fb60: lwz      r12, 0(r3)
//   0x8005fb64: lwz      r12, 0x88(r12)
//   0x8005fb68: mtctr    r12
//   0x8005fb6c: bctrl    
//   0x8005fb70: lwz      r4, 0(r31)
//   0x8005fb74: lwz      r0, 0(r3)
//   0x8005fb78: cmpwi    r4, 0
//   0x8005fb7c: beq      0x8005fb84
//   0x8005fb80: stw      r0, 0(r4)
//   0x8005fb84: lwz      r4, 0(r31)
//   0x8005fb88: lfs      f1, 8(r3)
//   0x8005fb8c: cmpwi    r4, 0
//

// TODO: Full decompilation requires Ghidra
