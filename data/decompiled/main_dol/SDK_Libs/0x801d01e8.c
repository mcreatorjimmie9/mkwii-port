// Function at 0x801d01e8
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801d01e8: stwu     r1, -0x10(r1)
//   0x801d01ec: mflr     r0
//   0x801d01f0: stw      r0, 0x14(r1)
//   0x801d01f4: stw      r31, 0xc(r1)
//   0x801d01f8: mr       r31, r3
//   0x801d01fc: bl       0x801a650c
//   0x801d0200: cmplwi   r31, 0x10
//   0x801d0204: bge      0x801d021c
//   0x801d0208: lis      r4, -0x7fcb
//   0x801d020c: rlwinm   r0, r31, 2, 0x16, 0x1d
//   0x801d0210: addi     r4, r4, 0xa80
//   0x801d0214: lwzx     r31, r4, r0
//   0x801d0218: b        0x801d0220
//   0x801d021c: li       r31, 0
//   0x801d0220: bl       0x801a6534
//   0x801d0224: mr       r3, r31
//   0x801d0228: lwz      r31, 0xc(r1)
//   0x801d022c: lwz      r0, 0x14(r1)
//   0x801d0230: mtlr     r0
//   0x801d0234: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
