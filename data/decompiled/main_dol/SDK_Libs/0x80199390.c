// Function at 0x80199390
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80199390: stwu     r1, -0x10(r1)
//   0x80199394: mflr     r0
//   0x80199398: add      r4, r4, r3
//   0x8019939c: stw      r0, 0x14(r1)
//   0x801993a0: addi     r0, r3, 3
//   0x801993a4: rlwinm   r6, r4, 0, 0, 0x1d
//   0x801993a8: stw      r31, 0xc(r1)
//   0x801993ac: rlwinm   r31, r0, 0, 0, 0x1d
//   0x801993b0: cmplw    r31, r6
//   0x801993b4: bgt      0x801993c4
//   0x801993b8: subf     r0, r31, r6
//   0x801993bc: cmplwi   r0, 0x48
//   0x801993c0: bge      0x801993cc
//   0x801993c4: li       r3, 0
//   0x801993c8: b        0x80199400
//   0x801993cc: lis      r4, 0x4652
//   0x801993d0: mr       r7, r5
//   0x801993d4: mr       r3, r31
//   0x801993d8: addi     r5, r31, 0x48
//   0x801993dc: addi     r4, r4, 0x4d48
//

// TODO: Full decompilation requires Ghidra
