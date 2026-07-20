// Function at 0x800b8aa0
// Size: 752 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x110 bytes
//
// Disassembly (first 20 instructions):
//   0x800b8aa0: stwu     r1, -0x110(r1)
//   0x800b8aa4: mflr     r0
//   0x800b8aa8: stw      r0, 0x114(r1)
//   0x800b8aac: addi     r11, r1, 0x110
//   0x800b8ab0: bl       0x80020a0c
//   0x800b8ab4: mr       r31, r1
//   0x800b8ab8: lwz      r30, -0x6978(r13)
//   0x800b8abc: mr       r29, r3
//   0x800b8ac0: stw      r4, 8(r31)
//   0x800b8ac4: cmpwi    r30, 0
//   0x800b8ac8: beq      0x800b8ad0
//   0x800b8acc: b        0x800b8ae8
//   0x800b8ad0: lwz      r3, -0x7e2c(r13)
//   0x800b8ad4: lwz      r0, 0(r1)
//   0x800b8ad8: neg      r30, r3
//   0x800b8adc: rlwinm   r30, r30, 0, 0, 0x1c
//   0x800b8ae0: stwux    r0, r1, r30
//   0x800b8ae4: addi     r30, r1, 8
//   0x800b8ae8: lwz      r4, -0x7e2c(r13)
//   0x800b8aec: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
