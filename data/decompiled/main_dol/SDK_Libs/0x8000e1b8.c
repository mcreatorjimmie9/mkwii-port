// Function at 0x8000e1b8
// Size: 864 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000e1b8: stwu     r1, -0x10(r1)
//   0x8000e1bc: mflr     r0
//   0x8000e1c0: cmpwi    r3, 0
//   0x8000e1c4: stw      r0, 0x14(r1)
//   0x8000e1c8: stw      r31, 0xc(r1)
//   0x8000e1cc: mr       r31, r3
//   0x8000e1d0: stw      r30, 8(r1)
//   0x8000e1d4: bne      0x8000e1e0
//   0x8000e1d8: bl       0x8000bf10
//   0x8000e1dc: b        0x8000e2d4
//   0x8000e1e0: lbz      r0, 0xa(r3)
//   0x8000e1e4: cmpwi    r0, 0
//   0x8000e1e8: bne      0x8000e1f8
//   0x8000e1ec: lwz      r4, 4(r3)
//   0x8000e1f0: rlwinm.  r0, r4, 0xa, 0x1d, 0x1f
//   0x8000e1f4: bne      0x8000e200
//   0x8000e1f8: li       r3, -1
//   0x8000e1fc: b        0x8000e2d4
//   0x8000e200: rlwinm   r0, r4, 5, 0x1d, 0x1f
//   0x8000e204: cmplwi   r0, 1
//

// TODO: Full decompilation requires Ghidra
