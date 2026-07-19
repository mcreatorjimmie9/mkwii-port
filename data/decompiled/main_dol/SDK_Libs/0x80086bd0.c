// Function at 0x80086bd0
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80086bd0: stwu     r1, -0x20(r1)
//   0x80086bd4: mflr     r0
//   0x80086bd8: stw      r0, 0x24(r1)
//   0x80086bdc: addi     r11, r1, 0x20
//   0x80086be0: bl       0x80020a40
//   0x80086be4: lbz      r0, 0x18(r3)
//   0x80086be8: mr       r27, r3
//   0x80086bec: mr       r28, r4
//   0x80086bf0: mr       r29, r5
//   0x80086bf4: cmpwi    r0, 0
//   0x80086bf8: beq      0x80086c58
//   0x80086bfc: li       r31, 0
//   0x80086c00: li       r30, 0
//   0x80086c04: b        0x80086c3c
//   0x80086c08: lwz      r0, 0x10(r27)
//   0x80086c0c: lwzx     r3, r30, r0
//   0x80086c10: add      r4, r0, r30
//   0x80086c14: cmpwi    cr1, r3, 0
//   0x80086c18: beq      cr1, 0x80086c34
//   0x80086c1c: lbz      r0, 8(r4)
//

// TODO: Full decompilation requires Ghidra
