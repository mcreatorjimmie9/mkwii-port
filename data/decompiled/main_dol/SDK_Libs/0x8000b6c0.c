// Function at 0x8000b6c0
// Size: 456 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8000b6c0: stwu     r1, -0x20(r1)
//   0x8000b6c4: mflr     r0
//   0x8000b6c8: stw      r0, 0x24(r1)
//   0x8000b6cc: stw      r31, 0x1c(r1)
//   0x8000b6d0: mr       r31, r5
//   0x8000b6d4: stw      r30, 0x18(r1)
//   0x8000b6d8: mr       r30, r3
//   0x8000b6dc: stw      r4, 8(r1)
//   0x8000b6e0: lwz      r0, 4(r3)
//   0x8000b6e4: rlwinm   r0, r0, 0xa, 0x1d, 0x1f
//   0x8000b6e8: cmplwi   r0, 1
//   0x8000b6ec: bne      0x8000b6fc
//   0x8000b6f0: lbz      r0, 0xa(r3)
//   0x8000b6f4: cmpwi    r0, 0
//   0x8000b6f8: beq      0x8000b70c
//   0x8000b6fc: li       r0, 0x28
//   0x8000b700: stw      r0, -0x6be8(r13)
//   0x8000b704: li       r3, -1
//   0x8000b708: b        0x8000b86c
//   0x8000b70c: lwz      r0, 8(r3)
//

// TODO: Full decompilation requires Ghidra
