// Function at 0x80070e20
// Size: 672 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80070e20: stwu     r1, -0x40(r1)
//   0x80070e24: mflr     r0
//   0x80070e28: stw      r0, 0x44(r1)
//   0x80070e2c: addi     r11, r1, 0x40
//   0x80070e30: bl       0x80020a3c
//   0x80070e34: stw      r4, 8(r1)
//   0x80070e38: mr       r26, r5
//   0x80070e3c: mr       r30, r3
//   0x80070e40: lwz      r5, 0xd4(r3)
//   0x80070e44: cmpwi    r5, 0
//   0x80070e48: beq      0x80070e88
//   0x80070e4c: lhz      r0, 0xda(r3)
//   0x80070e50: clrlwi.  r0, r0, 0x1f
//   0x80070e54: beq      0x80070e88
//   0x80070e58: lbz      r0, 0xd8(r3)
//   0x80070e5c: clrlwi.  r0, r0, 0x1f
//   0x80070e60: beq      0x80070e88
//   0x80070e64: mr       r3, r5
//   0x80070e68: mr       r6, r4
//   0x80070e6c: lwz      r12, 0(r3)
//

// TODO: Full decompilation requires Ghidra
