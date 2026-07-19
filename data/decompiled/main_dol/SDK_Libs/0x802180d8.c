// Function at 0x802180d8
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802180d8: stwu     r1, -0x10(r1)
//   0x802180dc: mflr     r0
//   0x802180e0: cmpwi    r3, 0
//   0x802180e4: stw      r0, 0x14(r1)
//   0x802180e8: stw      r31, 0xc(r1)
//   0x802180ec: mr       r31, r4
//   0x802180f0: stw      r30, 8(r1)
//   0x802180f4: mr       r30, r3
//   0x802180f8: beq      0x8021812c
//   0x802180fc: lbz      r0, 4(r3)
//   0x80218100: lis      r4, -0x7fd6
//   0x80218104: addi     r4, r4, -0x1830
//   0x80218108: stw      r4, 0x10(r3)
//   0x8021810c: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80218110: beq      0x8021811c
//   0x80218114: lwz      r3, 0xc(r3)
//   0x80218118: bl       0x80229b5c
//   0x8021811c: cmpwi    r31, 0
//   0x80218120: ble      0x8021812c
//   0x80218124: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
