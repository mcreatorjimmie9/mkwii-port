// Function at 0x80136080
// Size: 184 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80136080: stwu     r1, -0x20(r1)
//   0x80136084: mflr     r0
//   0x80136088: cmpwi    r4, 0
//   0x8013608c: stw      r0, 0x24(r1)
//   0x80136090: stw      r31, 0x1c(r1)
//   0x80136094: mr       r31, r4
//   0x80136098: stw      r30, 0x18(r1)
//   0x8013609c: mr       r30, r3
//   0x801360a0: beq      0x801360b0
//   0x801360a4: lhz      r0, 6(r4)
//   0x801360a8: clrlwi   r5, r0, 0x18
//   0x801360ac: b        0x801360b4
//   0x801360b0: lbz      r5, 0x16(r3)
//   0x801360b4: lbz      r0, -0x6610(r13)
//   0x801360b8: cmplwi   r0, 4
//   0x801360bc: blt      0x801360d0
//   0x801360c0: lis      r4, -0x7fd8
//   0x801360c4: li       r3, 0x503
//   0x801360c8: addi     r4, r4, -0x17a4
//   0x801360cc: bl       0x801316b8
//

// TODO: Full decompilation requires Ghidra
