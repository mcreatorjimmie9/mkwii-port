// Function at 0x801411c4
// Size: 316 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801411c4: stwu     r1, -0x10(r1)
//   0x801411c8: mflr     r0
//   0x801411cc: stw      r0, 0x14(r1)
//   0x801411d0: stw      r31, 0xc(r1)
//   0x801411d4: mr       r31, r4
//   0x801411d8: stw      r30, 8(r1)
//   0x801411dc: bl       0x80139cf4
//   0x801411e0: cmpwi    r3, 0
//   0x801411e4: mr       r30, r3
//   0x801411e8: beq      0x801412e8
//   0x801411ec: lbz      r0, 0x81(r3)
//   0x801411f0: rlwinm.  r0, r0, 0, 0x19, 0x19
//   0x801411f4: beq      0x80141248
//   0x801411f8: lis      r4, -0x7fcd
//   0x801411fc: addi     r4, r4, 0x1ef8
//   0x80141200: lwz      r12, 0x191c(r4)
//   0x80141204: cmpwi    r12, 0
//   0x80141208: beq      0x80141248
//   0x8014120c: cmplwi   r31, 0x17
//   0x80141210: bne      0x80141230
//

// TODO: Full decompilation requires Ghidra
