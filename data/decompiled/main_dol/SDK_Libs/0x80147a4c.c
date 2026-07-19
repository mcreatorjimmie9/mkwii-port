// Function at 0x80147a4c
// Size: 300 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80147a4c: stwu     r1, -0x20(r1)
//   0x80147a50: mflr     r0
//   0x80147a54: stw      r0, 0x24(r1)
//   0x80147a58: addi     r11, r1, 0x20
//   0x80147a5c: bl       0x80020a40
//   0x80147a60: lis      r30, -0x7fcd
//   0x80147a64: mr       r27, r3
//   0x80147a68: addi     r30, r30, 0x4bb8
//   0x80147a6c: lbz      r0, 0x400(r30)
//   0x80147a70: cmpwi    cr6, r0, 0
//   0x80147a74: bne      cr6, 0x80147a80
//   0x80147a78: li       r3, 1
//   0x80147a7c: b        0x80147afc
//   0x80147a80: cmplwi   cr1, r3, 0x10
//   0x80147a84: bgt      cr1, 0x80147a9c
//   0x80147a88: mulli    r28, r3, 0x34
//   0x80147a8c: lbzx     r0, r30, r28
//   0x80147a90: add      r29, r30, r28
//   0x80147a94: cmpwi    r0, 0
//   0x80147a98: bne      0x80147aa4
//

// TODO: Full decompilation requires Ghidra
