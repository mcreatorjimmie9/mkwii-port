// Function at 0x800a43c0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a43c0: stwu     r1, -0x10(r1)
//   0x800a43c4: mflr     r0
//   0x800a43c8: stw      r0, 0x14(r1)
//   0x800a43cc: stw      r31, 0xc(r1)
//   0x800a43d0: stw      r30, 8(r1)
//   0x800a43d4: lbz      r0, -0x69f8(r13)
//   0x800a43d8: cmpwi    r0, 0
//   0x800a43dc: beq      0x800a441c
//   0x800a43e0: bl       0x801aacd4
//   0x800a43e4: mr       r30, r3
//   0x800a43e8: lis      r31, -0x8000
//   0x800a43ec: b        0x800a4408
//   0x800a43f0: bl       0x801aacd4
//   0x800a43f4: lwz      r0, 0xf8(r31)
//   0x800a43f8: subf     r3, r30, r3
//   0x800a43fc: srwi     r0, r0, 2
//   0x800a4400: divwu.   r0, r3, r0
//   0x800a4404: bne      0x800a441c
//   0x800a4408: bl       0x80088750
//   0x800a440c: lwz      r0, 0x50(r3)
//

// TODO: Full decompilation requires Ghidra
