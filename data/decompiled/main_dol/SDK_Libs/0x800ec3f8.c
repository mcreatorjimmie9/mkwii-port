// Function at 0x800ec3f8
// Size: 548 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x310 bytes
//
// Disassembly (first 20 instructions):
//   0x800ec3f8: stwu     r1, -0x310(r1)
//   0x800ec3fc: mflr     r0
//   0x800ec400: stw      r0, 0x314(r1)
//   0x800ec404: addi     r11, r1, 0x310
//   0x800ec408: bl       0x80020a38
//   0x800ec40c: lwz      r0, 0(r4)
//   0x800ec410: rlwinm   r0, r0, 0x15, 0x1e, 0x1f
//   0x800ec414: cmpwi    r0, 2
//   0x800ec418: beq      0x800ec438
//   0x800ec41c: bge      0x800ec42c
//   0x800ec420: cmpwi    r0, 1
//   0x800ec424: bge      0x800ec5f8
//   0x800ec428: b        0x800ec600
//   0x800ec42c: cmpwi    r0, 4
//   0x800ec430: bge      0x800ec600
//   0x800ec434: b        0x800ec5f0
//   0x800ec438: lwz      r31, 4(r4)
//   0x800ec43c: li       r0, -1
//   0x800ec440: lwz      r30, 8(r4)
//   0x800ec444: li       r27, 0
//

// TODO: Full decompilation requires Ghidra
