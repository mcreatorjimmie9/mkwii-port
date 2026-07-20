// Function at 0x80060c40
// Size: 928 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80060c40: stwu     r1, -0x30(r1)
//   0x80060c44: mflr     r0
//   0x80060c48: stw      r0, 0x34(r1)
//   0x80060c4c: addi     r11, r1, 0x30
//   0x80060c50: bl       0x80020a30
//   0x80060c54: cmpwi    r3, 0
//   0x80060c58: bne      0x80060c68
//   0x80060c5c: lwz      r3, -0x6ac8(r13)
//   0x80060c60: bl       0x801710b8
//   0x80060c64: b        0x80060d88
//   0x80060c68: addi     r0, r3, -1
//   0x80060c6c: lis      r4, -0x7fdc
//   0x80060c70: mulli    r0, r0, 0x140
//   0x80060c74: lis      r3, -0x7fdc
//   0x80060c78: lis      r29, -0x7fd5
//   0x80060c7c: addi     r4, r4, 0x7790
//   0x80060c80: addi     r29, r29, 0x3870
//   0x80060c84: addi     r3, r3, 0x73d0
//   0x80060c88: add      r31, r4, r0
//   0x80060c8c: li       r23, 0
//

// TODO: Full decompilation requires Ghidra
