// Function at 0x80010b18
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80010b18: stwu     r1, -0x10(r1)
//   0x80010b1c: mflr     r0
//   0x80010b20: stw      r0, 0x14(r1)
//   0x80010b24: stw      r31, 0xc(r1)
//   0x80010b28: stw      r30, 8(r1)
//   0x80010b2c: mr       r30, r3
//   0x80010b30: lwz      r6, 8(r3)
//   0x80010b34: lwz      r7, 4(r3)
//   0x80010b38: add      r0, r6, r5
//   0x80010b3c: cmplw    r0, r7
//   0x80010b40: subf     r31, r6, r7
//   0x80010b44: bgt      0x80010b4c
//   0x80010b48: mr       r31, r5
//   0x80010b4c: lwz      r0, 0(r3)
//   0x80010b50: mr       r5, r31
//   0x80010b54: add      r3, r0, r6
//   0x80010b58: bl       0x80005f34
//   0x80010b5c: lwz      r0, 8(r30)
//   0x80010b60: li       r3, 1
//   0x80010b64: add      r0, r0, r31
//

// TODO: Full decompilation requires Ghidra
