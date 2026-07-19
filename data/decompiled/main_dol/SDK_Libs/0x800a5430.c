// Function at 0x800a5430
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a5430: stwu     r1, -0x10(r1)
//   0x800a5434: mflr     r0
//   0x800a5438: stw      r0, 0x14(r1)
//   0x800a543c: lwz      r0, 4(r3)
//   0x800a5440: cmpwi    r0, 0
//   0x800a5444: bne      0x800a5450
//   0x800a5448: li       r3, 0
//   0x800a544c: b        0x800a545c
//   0x800a5450: addi     r3, r3, 4
//   0x800a5454: bl       0x800a4f10
//   0x800a5458: li       r3, 1
//   0x800a545c: lwz      r0, 0x14(r1)
//   0x800a5460: mtlr     r0
//   0x800a5464: addi     r1, r1, 0x10
//   0x800a5468: blr      
//

// TODO: Full decompilation requires Ghidra
