// Function at 0x800a7ca0
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a7ca0: stwu     r1, -0x20(r1)
//   0x800a7ca4: mflr     r0
//   0x800a7ca8: stw      r0, 0x24(r1)
//   0x800a7cac: addi     r11, r1, 0x20
//   0x800a7cb0: bl       0x80020a40
//   0x800a7cb4: mr       r27, r3
//   0x800a7cb8: bl       0x801a650c
//   0x800a7cbc: lbz      r0, 0x123(r27)
//   0x800a7cc0: mr       r31, r3
//   0x800a7cc4: li       r29, 0
//   0x800a7cc8: cmpwi    r0, 0
//   0x800a7ccc: beq      0x800a7cd4
//   0x800a7cd0: li       r29, 1
//   0x800a7cd4: lbz      r0, 0x125(r27)
//   0x800a7cd8: cmpwi    r0, 0
//   0x800a7cdc: beq      0x800a7ce4
//   0x800a7ce0: li       r29, 1
//   0x800a7ce4: lbz      r0, 0x124(r27)
//   0x800a7ce8: cmplw    r29, r0
//   0x800a7cec: beq      0x800a7d34
//

// TODO: Full decompilation requires Ghidra
