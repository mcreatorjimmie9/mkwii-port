// Function at 0x8013ec44
// Size: 424 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8013ec44: stwu     r1, -0x20(r1)
//   0x8013ec48: mflr     r0
//   0x8013ec4c: stw      r0, 0x24(r1)
//   0x8013ec50: addi     r11, r1, 0x20
//   0x8013ec54: bl       0x80020a40
//   0x8013ec58: cmplwi   r3, 3
//   0x8013ec5c: lis      r30, -0x7fd8
//   0x8013ec60: mr       r28, r4
//   0x8013ec64: addi     r30, r30, -0x550
//   0x8013ec68: bge      0x8013ec88
//   0x8013ec6c: mulli    r0, r3, 0x34
//   0x8013ec70: lis      r3, -0x7fcd
//   0x8013ec74: addi     r3, r3, 0x1ef8
//   0x8013ec78: add      r31, r3, r0
//   0x8013ec7c: lhz      r0, 0x185c(r31)
//   0x8013ec80: cmplwi   r0, 4
//   0x8013ec84: beq      0x8013ec90
//   0x8013ec88: li       r3, 6
//   0x8013ec8c: b        0x8013edd4
//   0x8013ec90: lbz      r0, 0x1882(r31)
//

// TODO: Full decompilation requires Ghidra
