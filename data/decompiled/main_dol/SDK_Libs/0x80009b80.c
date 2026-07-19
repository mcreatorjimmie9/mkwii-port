// Function at 0x80009b80
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80009b80: stwu     r1, -0x20(r1)
//   0x80009b84: mflr     r0
//   0x80009b88: stw      r0, 0x24(r1)
//   0x80009b8c: stw      r31, 0x1c(r1)
//   0x80009b90: mr       r31, r3
//   0x80009b94: stw      r30, 0x18(r1)
//   0x80009b98: li       r30, 0
//   0x80009b9c: stw      r29, 0x14(r1)
//   0x80009ba0: mr       r29, r4
//   0x80009ba4: lwz      r3, 0(r31)
//   0x80009ba8: cmpwi    r3, 0
//   0x80009bac: beq      0x80009bb8
//   0x80009bb0: clrlwi   r4, r29, 0x10
//   0x80009bb4: bl       0x80226914
//   0x80009bb8: addi     r30, r30, 1
//   0x80009bbc: addi     r31, r31, 4
//   0x80009bc0: cmpwi    r30, 3
//   0x80009bc4: blt      0x80009ba4
//   0x80009bc8: lwz      r0, 0x24(r1)
//   0x80009bcc: lwz      r31, 0x1c(r1)
//

// TODO: Full decompilation requires Ghidra
