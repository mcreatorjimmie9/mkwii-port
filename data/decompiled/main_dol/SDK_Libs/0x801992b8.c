// Function at 0x801992b8
// Size: 216 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801992b8: stwu     r1, -0x10(r1)
//   0x801992bc: mflr     r0
//   0x801992c0: stw      r0, 0x14(r1)
//   0x801992c4: stw      r31, 0xc(r1)
//   0x801992c8: stw      r30, 8(r1)
//   0x801992cc: mr       r30, r3
//   0x801992d0: lwz      r0, 0x38(r3)
//   0x801992d4: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x801992d8: beq      0x801992e4
//   0x801992dc: addi     r3, r3, 0x20
//   0x801992e0: bl       0x801a7e44
//   0x801992e4: lwz      r5, 0x40(r30)
//   0x801992e8: cmpwi    r5, 0
//   0x801992ec: bne      0x801992f8
//   0x801992f0: li       r31, 0
//   0x801992f4: b        0x80199360
//   0x801992f8: lwz      r3, 4(r5)
//   0x801992fc: lwz      r0, 0x1c(r30)
//   0x80199300: add      r3, r5, r3
//   0x80199304: addi     r3, r3, 0x10
//

// TODO: Full decompilation requires Ghidra
