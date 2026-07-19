// Function at 0x80199444
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80199444: stwu     r1, -0x20(r1)
//   0x80199448: mflr     r0
//   0x8019944c: cmpwi    r4, 0
//   0x80199450: stw      r0, 0x24(r1)
//   0x80199454: stw      r31, 0x1c(r1)
//   0x80199458: mr       r31, r3
//   0x8019945c: stw      r30, 0x18(r1)
//   0x80199460: mr       r30, r4
//   0x80199464: stw      r29, 0x14(r1)
//   0x80199468: mr       r29, r5
//   0x8019946c: bne      0x80199474
//   0x80199470: li       r30, 1
//   0x80199474: lwz      r0, 0x38(r3)
//   0x80199478: addi     r4, r30, 3
//   0x8019947c: rlwinm   r30, r4, 0, 0, 0x1d
//   0x80199480: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80199484: beq      0x80199490
//   0x80199488: addi     r3, r3, 0x20
//   0x8019948c: bl       0x801a7e44
//   0x80199490: cmpwi    r29, 0
//

// TODO: Full decompilation requires Ghidra
