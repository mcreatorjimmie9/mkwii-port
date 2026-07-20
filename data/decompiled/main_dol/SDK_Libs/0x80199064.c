// Function at 0x80199064
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80199064: stwu     r1, -0x10(r1)
//   0x80199068: mflr     r0
//   0x8019906c: stw      r0, 0x14(r1)
//   0x80199070: stw      r31, 0xc(r1)
//   0x80199074: li       r31, 0
//   0x80199078: stw      r30, 8(r1)
//   0x8019907c: mr       r30, r3
//   0x80199080: lwz      r0, 0x38(r3)
//   0x80199084: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80199088: beq      0x80199094
//   0x8019908c: addi     r3, r3, 0x20
//   0x80199090: bl       0x801a7e44
//   0x80199094: lwz      r3, 0x3c(r30)
//   0x80199098: b        0x801990a8
//   0x8019909c: lwz      r0, 4(r3)
//   0x801990a0: lwz      r3, 0xc(r3)
//   0x801990a4: add      r31, r31, r0
//   0x801990a8: cmpwi    r3, 0
//   0x801990ac: bne      0x8019909c
//   0x801990b0: lwz      r0, 0x38(r30)
//

// TODO: Full decompilation requires Ghidra
