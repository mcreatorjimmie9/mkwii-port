// Function at 0x800a4c80
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a4c80: stwu     r1, -0x10(r1)
//   0x800a4c84: mflr     r0
//   0x800a4c88: stw      r0, 0x14(r1)
//   0x800a4c8c: stw      r31, 0xc(r1)
//   0x800a4c90: mr       r31, r3
//   0x800a4c94: bl       0x801a650c
//   0x800a4c98: lwz      r4, 0xc(r31)
//   0x800a4c9c: lwz      r0, 0x10(r31)
//   0x800a4ca0: cmpw     r0, r4
//   0x800a4ca4: blt      0x800a4cb4
//   0x800a4ca8: bl       0x801a6534
//   0x800a4cac: li       r3, 0
//   0x800a4cb0: b        0x800a4d54
//   0x800a4cb4: addi     r0, r4, 7
//   0x800a4cb8: li       r8, 0
//   0x800a4cbc: rlwinm   r4, r0, 0, 0, 0x1c
//   0x800a4cc0: srawi    r4, r4, 3
//   0x800a4cc4: li       r0, 8
//   0x800a4cc8: addze    r7, r4
//   0x800a4ccc: b        0x800a4d44
//

// TODO: Full decompilation requires Ghidra
