// Function at 0x800b4f00
// Size: 752 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x110 bytes
//
// Disassembly (first 20 instructions):
//   0x800b4f00: stwu     r1, -0x110(r1)
//   0x800b4f04: mflr     r0
//   0x800b4f08: stw      r0, 0x114(r1)
//   0x800b4f0c: addi     r11, r1, 0x110
//   0x800b4f10: bl       0x80020a0c
//   0x800b4f14: mr       r31, r1
//   0x800b4f18: lwz      r30, -0x6980(r13)
//   0x800b4f1c: mr       r29, r3
//   0x800b4f20: stw      r4, 8(r31)
//   0x800b4f24: cmpwi    r30, 0
//   0x800b4f28: beq      0x800b4f30
//   0x800b4f2c: b        0x800b4f48
//   0x800b4f30: lwz      r3, -0x7e30(r13)
//   0x800b4f34: lwz      r0, 0(r1)
//   0x800b4f38: neg      r30, r3
//   0x800b4f3c: rlwinm   r30, r30, 0, 0, 0x1c
//   0x800b4f40: stwux    r0, r1, r30
//   0x800b4f44: addi     r30, r1, 8
//   0x800b4f48: lwz      r4, -0x7e30(r13)
//   0x800b4f4c: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
