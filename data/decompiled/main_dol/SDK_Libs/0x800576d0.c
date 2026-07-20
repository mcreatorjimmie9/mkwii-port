// Function at 0x800576d0
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800576d0: stwu     r1, -0x20(r1)
//   0x800576d4: mflr     r0
//   0x800576d8: stw      r0, 0x24(r1)
//   0x800576dc: stw      r31, 0x1c(r1)
//   0x800576e0: li       r31, 0
//   0x800576e4: stw      r30, 0x18(r1)
//   0x800576e8: li       r30, 0
//   0x800576ec: stw      r29, 0x14(r1)
//   0x800576f0: mr       r29, r3
//   0x800576f4: b        0x80057720
//   0x800576f8: lwz      r3, 0x1c(r29)
//   0x800576fc: lwzx     r3, r3, r31
//   0x80057700: cmpwi    r3, 0
//   0x80057704: beq      0x80057718
//   0x80057708: lwz      r12, 0(r3)
//   0x8005770c: lwz      r12, 0x34(r12)
//   0x80057710: mtctr    r12
//   0x80057714: bctrl    
//   0x80057718: addi     r31, r31, 4
//   0x8005771c: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
