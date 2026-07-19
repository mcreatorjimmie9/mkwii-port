// Function at 0x80209b8c
// Size: 704 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80209b8c: stwu     r1, -0x20(r1)
//   0x80209b90: mflr     r0
//   0x80209b94: stw      r0, 0x24(r1)
//   0x80209b98: stw      r31, 0x1c(r1)
//   0x80209b9c: stw      r30, 0x18(r1)
//   0x80209ba0: mr       r30, r5
//   0x80209ba4: stw      r29, 0x14(r1)
//   0x80209ba8: mr       r29, r4
//   0x80209bac: stw      r28, 0x10(r1)
//   0x80209bb0: mr       r28, r3
//   0x80209bb4: lwz      r0, -0x5ea0(r13)
//   0x80209bb8: cmplw    r3, r0
//   0x80209bbc: bge      0x80209bd8
//   0x80209bc0: lwz      r4, -0x5e90(r13)
//   0x80209bc4: cmpwi    r4, 0
//   0x80209bc8: beq      0x80209bd8
//   0x80209bcc: mulli    r0, r3, 0x140
//   0x80209bd0: add      r31, r4, r0
//   0x80209bd4: b        0x80209bdc
//   0x80209bd8: li       r31, 0
//

// TODO: Full decompilation requires Ghidra
