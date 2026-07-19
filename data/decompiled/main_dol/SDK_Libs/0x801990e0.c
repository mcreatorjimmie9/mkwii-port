// Function at 0x801990e0
// Size: 216 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801990e0: stwu     r1, -0x20(r1)
//   0x801990e4: mflr     r0
//   0x801990e8: srawi    r5, r4, 0x1f
//   0x801990ec: stw      r0, 0x24(r1)
//   0x801990f0: stw      r31, 0x1c(r1)
//   0x801990f4: xor      r31, r5, r4
//   0x801990f8: subf     r31, r5, r31
//   0x801990fc: stw      r30, 0x18(r1)
//   0x80199100: mr       r30, r3
//   0x80199104: stw      r29, 0x14(r1)
//   0x80199108: lwz      r0, 0x38(r3)
//   0x8019910c: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80199110: beq      0x8019911c
//   0x80199114: addi     r3, r3, 0x20
//   0x80199118: bl       0x801a7e44
//   0x8019911c: addi     r0, r31, -1
//   0x80199120: lwz      r6, 0x3c(r30)
//   0x80199124: nor      r4, r0, r0
//   0x80199128: li       r29, 0
//   0x8019912c: li       r7, -1
//

// TODO: Full decompilation requires Ghidra
