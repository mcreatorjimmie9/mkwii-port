// Function at 0x80243494
// Size: 148 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243494: stwu     r1, -0x10(r1)
//   0x80243498: mflr     r0
//   0x8024349c: stw      r0, 0x14(r1)
//   0x802434a0: stw      r31, 0xc(r1)
//   0x802434a4: stw      r30, 8(r1)
//   0x802434a8: mr       r30, r3
//   0x802434ac: lwz      r4, 0xc(r3)
//   0x802434b0: cmpwi    r4, 0
//   0x802434b4: beq      0x802434d8
//   0x802434b8: lwz      r31, 4(r4)
//   0x802434bc: bl       0x801baa84
//   0x802434c0: cmplw    r31, r3
//   0x802434c4: bne      0x802434d8
//   0x802434c8: lwz      r3, 0xc(r30)
//   0x802434cc: li       r0, 0
//   0x802434d0: stw      r3, 0(r30)
//   0x802434d4: stw      r0, 0xc(r30)
//   0x802434d8: lwz      r0, 0x14(r1)
//   0x802434dc: lwz      r31, 0xc(r1)
//   0x802434e0: lwz      r30, 8(r1)
//

// TODO: Full decompilation requires Ghidra
