// Function at 0x80199990
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80199990: stwu     r1, -0x10(r1)
//   0x80199994: mflr     r0
//   0x80199998: stw      r0, 0x14(r1)
//   0x8019999c: stw      r31, 0xc(r1)
//   0x801999a0: stw      r30, 8(r1)
//   0x801999a4: mr       r30, r3
//   0x801999a8: lwz      r0, 0x38(r3)
//   0x801999ac: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x801999b0: beq      0x801999bc
//   0x801999b4: addi     r3, r3, 0x20
//   0x801999b8: bl       0x801a7e44
//   0x801999bc: lwz      r31, 0x3c(r30)
//   0x801999c0: cmpwi    r31, 0
//   0x801999c4: beq      0x801999d0
//   0x801999c8: lwz      r0, 0(r31)
//   0x801999cc: stw      r0, 0x3c(r30)
//   0x801999d0: lwz      r0, 0x38(r30)
//   0x801999d4: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x801999d8: beq      0x801999e4
//   0x801999dc: addi     r3, r30, 0x20
//

// TODO: Full decompilation requires Ghidra
