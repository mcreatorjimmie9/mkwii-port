// Function at 0x80147cb8
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80147cb8: stwu     r1, -0x20(r1)
//   0x80147cbc: mflr     r0
//   0x80147cc0: stw      r0, 0x24(r1)
//   0x80147cc4: addi     r11, r1, 0x20
//   0x80147cc8: bl       0x80020a40
//   0x80147ccc: lis      r30, -0x7fcd
//   0x80147cd0: mr       r27, r3
//   0x80147cd4: addi     r30, r30, 0x4bb8
//   0x80147cd8: lbz      r0, 0x400(r30)
//   0x80147cdc: cmpwi    r0, 0
//   0x80147ce0: bne      0x80147cec
//   0x80147ce4: li       r3, 1
//   0x80147ce8: b        0x80147d40
//   0x80147cec: cmplwi   r3, 0x10
//   0x80147cf0: bgt      0x80147d08
//   0x80147cf4: mulli    r28, r3, 0x34
//   0x80147cf8: lbzx     r0, r30, r28
//   0x80147cfc: add      r29, r30, r28
//   0x80147d00: cmpwi    r0, 0
//   0x80147d04: bne      0x80147d10
//

// TODO: Full decompilation requires Ghidra
