// Function at 0x80158cec
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80158cec: stwu     r1, -0x10(r1)
//   0x80158cf0: mflr     r0
//   0x80158cf4: stw      r0, 0x14(r1)
//   0x80158cf8: stw      r31, 0xc(r1)
//   0x80158cfc: stw      r30, 8(r1)
//   0x80158d00: mr       r30, r3
//   0x80158d04: lwz      r5, 4(r3)
//   0x80158d08: cmplwi   r5, 0x14
//   0x80158d0c: bge      0x80158d18
//   0x80158d10: li       r3, 0
//   0x80158d14: b        0x80158d74
//   0x80158d18: lwz      r31, 0x68(r3)
//   0x80158d1c: addi     r0, r5, -0x14
//   0x80158d20: stw      r0, 4(r3)
//   0x80158d24: li       r0, 0
//   0x80158d28: addi     r6, r31, 0x14
//   0x80158d2c: li       r5, 6
//   0x80158d30: stw      r6, 0x68(r3)
//   0x80158d34: addi     r3, r31, 0xc
//   0x80158d38: stw      r0, 0(r31)
//

// TODO: Full decompilation requires Ghidra
