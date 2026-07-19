// Function at 0x801f0554
// Size: 296 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f0554: stwu     r1, -0x10(r1)
//   0x801f0558: mflr     r0
//   0x801f055c: cmpwi    r3, 0
//   0x801f0560: stw      r0, 0x14(r1)
//   0x801f0564: stw      r31, 0xc(r1)
//   0x801f0568: mr       r31, r4
//   0x801f056c: stw      r30, 8(r1)
//   0x801f0570: mr       r30, r3
//   0x801f0574: bne      0x801f0580
//   0x801f0578: li       r3, 0xa
//   0x801f057c: b        0x801f0664
//   0x801f0580: lhz      r0, 0x1860(r3)
//   0x801f0584: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x801f0588: bne      0x801f05cc
//   0x801f058c: lwz      r3, 0x1874(r3)
//   0x801f0590: bl       0x801f2dbc
//   0x801f0594: cmpwi    r3, 0
//   0x801f0598: beq      0x801f05cc
//   0x801f059c: cmpwi    r3, 0x15
//   0x801f05a0: bne      0x801f05c4
//

// TODO: Full decompilation requires Ghidra
