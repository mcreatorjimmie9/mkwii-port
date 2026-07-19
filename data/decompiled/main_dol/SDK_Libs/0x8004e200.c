// Function at 0x8004e200
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004e200: stwu     r1, -0x10(r1)
//   0x8004e204: mflr     r0
//   0x8004e208: lwz      r3, 0(r3)
//   0x8004e20c: stw      r0, 0x14(r1)
//   0x8004e210: lwz      r0, 0x14(r3)
//   0x8004e214: cmpwi    r0, 0
//   0x8004e218: beq      0x8004e224
//   0x8004e21c: add      r0, r3, r0
//   0x8004e220: b        0x8004e228
//   0x8004e224: li       r0, 0
//   0x8004e228: stw      r0, 8(r1)
//   0x8004e22c: addi     r3, r1, 8
//   0x8004e230: bl       0x8004bfb0
//   0x8004e234: lwz      r0, 0x14(r1)
//   0x8004e238: mtlr     r0
//   0x8004e23c: addi     r1, r1, 0x10
//   0x8004e240: blr      
//

// TODO: Full decompilation requires Ghidra
