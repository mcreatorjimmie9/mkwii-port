// Function at 0x8005bcd0
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005bcd0: stwu     r1, -0x20(r1)
//   0x8005bcd4: mflr     r0
//   0x8005bcd8: stw      r0, 0x24(r1)
//   0x8005bcdc: stw      r31, 0x1c(r1)
//   0x8005bce0: li       r31, 0
//   0x8005bce4: stw      r30, 0x18(r1)
//   0x8005bce8: li       r30, 0
//   0x8005bcec: stw      r29, 0x14(r1)
//   0x8005bcf0: mr       r29, r3
//   0x8005bcf4: b        0x8005bd20
//   0x8005bcf8: lwz      r3, 0x1c(r29)
//   0x8005bcfc: lwzx     r3, r3, r31
//   0x8005bd00: cmpwi    r3, 0
//   0x8005bd04: beq      0x8005bd18
//   0x8005bd08: lwz      r12, 0(r3)
//   0x8005bd0c: lwz      r12, 0x34(r12)
//   0x8005bd10: mtctr    r12
//   0x8005bd14: bctrl    
//   0x8005bd18: addi     r31, r31, 4
//   0x8005bd1c: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
