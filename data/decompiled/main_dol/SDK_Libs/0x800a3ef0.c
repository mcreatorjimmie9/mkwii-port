// Function at 0x800a3ef0
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a3ef0: stwu     r1, -0x10(r1)
//   0x800a3ef4: mflr     r0
//   0x800a3ef8: stw      r0, 0x14(r1)
//   0x800a3efc: stw      r31, 0xc(r1)
//   0x800a3f00: mr       r31, r4
//   0x800a3f04: lwz      r7, 0(r4)
//   0x800a3f08: cmpwi    r7, 0
//   0x800a3f0c: beq      0x800a3f3c
//   0x800a3f10: beq      0x800a3f1c
//   0x800a3f14: lwz      r0, 0x90(r7)
//   0x800a3f18: b        0x800a3f20
//   0x800a3f1c: li       r0, -1
//   0x800a3f20: cmplw    r5, r0
//   0x800a3f24: bne      0x800a3f3c
//   0x800a3f28: mr       r3, r7
//   0x800a3f2c: li       r4, 1
//   0x800a3f30: bl       0x8008e6e0
//   0x800a3f34: li       r3, 0
//   0x800a3f38: b        0x800a3f84
//   0x800a3f3c: lwz      r12, 0(r3)
//

// TODO: Full decompilation requires Ghidra
