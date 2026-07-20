// Function at 0x8001ea70
// Size: 248 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8001ea70: stwu     r1, -0x10(r1)
//   0x8001ea74: mflr     r0
//   0x8001ea78: add      r4, r4, r3
//   0x8001ea7c: li       r6, 0x700
//   0x8001ea80: stw      r0, 0x14(r1)
//   0x8001ea84: stw      r31, 0xc(r1)
//   0x8001ea88: addi     r31, r4, -1
//   0x8001ea8c: cmplw    r31, r3
//   0x8001ea90: stw      r30, 8(r1)
//   0x8001ea94: mr       r30, r5
//   0x8001ea98: bge      0x8001eaa4
//   0x8001ea9c: li       r3, 0x700
//   0x8001eaa0: b        0x8001eb50
//   0x8001eaa4: lis      r4, -0x7fdc
//   0x8001eaa8: addi     r4, r4, 0x6c90
//   0x8001eaac: lwz      r0, 4(r4)
//   0x8001eab0: cmplw    r3, r0
//   0x8001eab4: bgt      0x8001eb4c
//   0x8001eab8: lwz      r0, 0(r4)
//   0x8001eabc: cmplw    r31, r0
//

// TODO: Full decompilation requires Ghidra
