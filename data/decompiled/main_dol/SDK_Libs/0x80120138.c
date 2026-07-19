// Function at 0x80120138
// Size: 444 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80120138: stwu     r1, -0x30(r1)
//   0x8012013c: mflr     r0
//   0x80120140: stw      r0, 0x34(r1)
//   0x80120144: addi     r11, r1, 0x30
//   0x80120148: bl       0x80020a40
//   0x8012014c: cmpwi    r5, 1
//   0x80120150: mr       r27, r3
//   0x80120154: mr       r28, r4
//   0x80120158: mr       r29, r5
//   0x8012015c: bge      0x80120168
//   0x80120160: li       r3, 0
//   0x80120164: b        0x801202dc
//   0x80120168: lbz      r31, 0(r4)
//   0x8012016c: li       r30, 5
//   0x80120170: rlwinm.  r0, r31, 0, 0x1e, 0x1e
//   0x80120174: beq      0x8012017c
//   0x80120178: li       r30, 9
//   0x8012017c: rlwinm.  r0, r31, 0, 0x1c, 0x1c
//   0x80120180: beq      0x80120188
//   0x80120184: addi     r30, r30, 4
//

// TODO: Full decompilation requires Ghidra
