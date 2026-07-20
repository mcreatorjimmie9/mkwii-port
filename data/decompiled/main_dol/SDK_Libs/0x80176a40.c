// Function at 0x80176a40
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80176a40: stwu     r1, -0x10(r1)
//   0x80176a44: mflr     r0
//   0x80176a48: stw      r0, 0x14(r1)
//   0x80176a4c: stw      r31, 0xc(r1)
//   0x80176a50: lis      r31, -0x7fcc
//   0x80176a54: lwz      r3, 0x5b8(r31)
//   0x80176a58: cmpwi    r3, 0
//   0x80176a5c: beq      0x80176a90
//   0x80176a60: addis    r3, r3, 1
//   0x80176a64: li       r4, 1
//   0x80176a68: li       r5, 0
//   0x80176a6c: addi     r3, r3, 0x4680
//   0x80176a70: bl       0x801a72bc
//   0x80176a74: lwz      r3, 0x5b8(r31)
//   0x80176a78: addis    r3, r3, 1
//   0x80176a7c: lwz      r12, 0x4348(r3)
//   0x80176a80: cmpwi    r12, 0
//   0x80176a84: beq      0x80176a90
//   0x80176a88: mtctr    r12
//   0x80176a8c: bctrl    
//

// TODO: Full decompilation requires Ghidra
