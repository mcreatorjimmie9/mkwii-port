// Function at 0x800761b0
// Size: 816 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800761b0: stwu     r1, -0x30(r1)
//   0x800761b4: mflr     r0
//   0x800761b8: stw      r0, 0x34(r1)
//   0x800761bc: addi     r11, r1, 0x30
//   0x800761c0: bl       0x80020a3c
//   0x800761c4: cmplwi   r4, 9
//   0x800761c8: mr       r28, r3
//   0x800761cc: mr       r29, r4
//   0x800761d0: mr       r30, r5
//   0x800761d4: mr       r31, r6
//   0x800761d8: bge      0x800761fc
//   0x800761dc: addi     r7, r4, -1
//   0x800761e0: li       r8, 1
//   0x800761e4: lwz      r0, 0xcc(r3)
//   0x800761e8: slw      r7, r8, r7
//   0x800761ec: and.     r0, r7, r0
//   0x800761f0: beq      0x800761fc
//   0x800761f4: li       r0, 1
//   0x800761f8: b        0x80076200
//   0x800761fc: li       r0, 0
//

// TODO: Full decompilation requires Ghidra
