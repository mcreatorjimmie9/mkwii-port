// Function at 0x80168a60
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80168a60: stwu     r1, -0x20(r1)
//   0x80168a64: mflr     r0
//   0x80168a68: stw      r0, 0x24(r1)
//   0x80168a6c: stw      r31, 0x1c(r1)
//   0x80168a70: stw      r30, 0x18(r1)
//   0x80168a74: stw      r29, 0x14(r1)
//   0x80168a78: stw      r28, 0x10(r1)
//   0x80168a7c: mr       r28, r3
//   0x80168a80: slwi     r0, r3, 6
//   0x80168a84: lis      r3, -0x7fcc
//   0x80168a88: addi     r3, r3, -0xd00
//   0x80168a8c: add      r31, r3, r0
//   0x80168a90: bl       0x801a650c
//   0x80168a94: mr       r29, r3
//   0x80168a98: lwz      r0, 0xc(r31)
//   0x80168a9c: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80168aa0: bne      0x80168ab0
//   0x80168aa4: bl       0x801a6534
//   0x80168aa8: li       r3, 0
//   0x80168aac: b        0x80168b40
//

// TODO: Full decompilation requires Ghidra
