// Function at 0x800756e0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800756e0: stwu     r1, -0x10(r1)
//   0x800756e4: mflr     r0
//   0x800756e8: cmpwi    r3, 0
//   0x800756ec: stw      r0, 0x14(r1)
//   0x800756f0: stw      r31, 0xc(r1)
//   0x800756f4: mr       r31, r3
//   0x800756f8: beq      0x80075730
//   0x800756fc: lwz      r4, 0x138(r3)
//   0x80075700: lis      r5, -0x7fd9
//   0x80075704: addi     r5, r5, -0x10f8
//   0x80075708: stw      r5, 0(r3)
//   0x8007570c: cmpwi    r4, 0
//   0x80075710: beq      0x80075724
//   0x80075714: lwz      r12, 0(r3)
//   0x80075718: lwz      r12, 0x38(r12)
//   0x8007571c: mtctr    r12
//   0x80075720: bctrl    
//   0x80075724: mr       r3, r31
//   0x80075728: li       r4, 0
//   0x8007572c: bl       0x80072bf0
//

// TODO: Full decompilation requires Ghidra
