// Function at 0x802223d0
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802223d0: stwu     r1, -0x10(r1)
//   0x802223d4: mflr     r0
//   0x802223d8: stw      r0, 0x14(r1)
//   0x802223dc: stw      r31, 0xc(r1)
//   0x802223e0: mr       r31, r3
//   0x802223e4: lbz      r0, 4(r3)
//   0x802223e8: cmpwi    r0, 0
//   0x802223ec: bne      0x80222430
//   0x802223f0: cmpwi    r4, -1
//   0x802223f4: beq      0x80222430
//   0x802223f8: mr       r3, r4
//   0x802223fc: addi     r4, r31, 0x3c
//   0x80222400: bl       0x8015e1b4
//   0x80222404: neg      r0, r3
//   0x80222408: or       r0, r0, r3
//   0x8022240c: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x80222410: stb      r0, 4(r31)
//   0x80222414: beq      0x80222430
//   0x80222418: lis      r3, -0x7fc8
//   0x8022241c: mr       r4, r31
//

// TODO: Full decompilation requires Ghidra
