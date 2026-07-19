// Function at 0x801a6c9c
// Size: 704 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801a6c9c: stwu     r1, -0x30(r1)
//   0x801a6ca0: mflr     r0
//   0x801a6ca4: stw      r0, 0x34(r1)
//   0x801a6ca8: addi     r11, r1, 0x30
//   0x801a6cac: bl       0x80020a30
//   0x801a6cb0: cmpwi    r3, 0
//   0x801a6cb4: mr       r26, r3
//   0x801a6cb8: mr       r27, r4
//   0x801a6cbc: beq      0x801a6cc8
//   0x801a6cc0: lwz      r31, 0(r3)
//   0x801a6cc4: b        0x801a6ccc
//   0x801a6cc8: li       r31, 0
//   0x801a6ccc: lwz      r24, 0x28(r4)
//   0x801a6cd0: lwz      r0, 0x2c(r4)
//   0x801a6cd4: add      r3, r24, r0
//   0x801a6cd8: addi     r0, r3, 7
//   0x801a6cdc: subf     r0, r24, r0
//   0x801a6ce0: srwi     r0, r0, 3
//   0x801a6ce4: mtctr    r0
//   0x801a6ce8: cmplw    r24, r3
//

// TODO: Full decompilation requires Ghidra
