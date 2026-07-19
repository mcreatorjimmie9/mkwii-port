// Function at 0x80046d50
// Size: 704 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80046d50: stwu     r1, -0x50(r1)
//   0x80046d54: mflr     r0
//   0x80046d58: stw      r0, 0x54(r1)
//   0x80046d5c: addi     r11, r1, 0x50
//   0x80046d60: bl       0x80020a40
//   0x80046d64: lwz      r6, 0(r4)
//   0x80046d68: mr       r30, r4
//   0x80046d6c: mr       r29, r3
//   0x80046d70: mr       r31, r5
//   0x80046d74: lhz      r4, 0x42(r6)
//   0x80046d78: lwzx     r7, r5, r4
//   0x80046d7c: b        0x80046d84
//   0x80046d80: lwzx     r7, r7, r4
//   0x80046d84: cmpwi    r7, 0
//   0x80046d88: beq      0x80046d98
//   0x80046d8c: lwz      r0, 0xc(r7)
//   0x80046d90: cmpwi    r0, 1
//   0x80046d94: bne      0x80046d80
//   0x80046d98: cmpwi    r7, 0
//   0x80046d9c: bne      0x80046de4
//

// TODO: Full decompilation requires Ghidra
