// Function at 0x8000be8c
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000be8c: stwu     r1, -0x10(r1)
//   0x8000be90: mflr     r0
//   0x8000be94: stw      r0, 0x14(r1)
//   0x8000be98: stw      r31, 0xc(r1)
//   0x8000be9c: li       r31, 0
//   0x8000bea0: stw      r30, 8(r1)
//   0x8000bea4: lis      r30, -0x7fd9
//   0x8000bea8: addi     r30, r30, -0x3650
//   0x8000beac: b        0x8000beec
//   0x8000beb0: lwz      r3, 4(r30)
//   0x8000beb4: rlwinm.  r0, r3, 0xa, 0x1d, 0x1f
//   0x8000beb8: beq      0x8000bee8
//   0x8000bebc: rlwinm.  r0, r3, 7, 0x1f, 0x1f
//   0x8000bec0: beq      0x8000bee8
//   0x8000bec4: lwz      r0, 8(r30)
//   0x8000bec8: srwi     r0, r0, 0x1d
//   0x8000becc: cmplwi   r0, 1
//   0x8000bed0: bne      0x8000bee8
//   0x8000bed4: mr       r3, r30
//   0x8000bed8: bl       0x8000e1b8
//

// TODO: Full decompilation requires Ghidra
