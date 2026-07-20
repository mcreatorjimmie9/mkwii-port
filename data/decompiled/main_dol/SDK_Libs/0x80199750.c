// Function at 0x80199750
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80199750: stwu     r1, -0x10(r1)
//   0x80199754: mflr     r0
//   0x80199758: stw      r0, 0x14(r1)
//   0x8019975c: stw      r31, 0xc(r1)
//   0x80199760: mr       r31, r4
//   0x80199764: stw      r30, 8(r1)
//   0x80199768: mr       r30, r3
//   0x8019976c: lwz      r0, 0x38(r3)
//   0x80199770: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80199774: beq      0x80199780
//   0x80199778: addi     r3, r3, 0x20
//   0x8019977c: bl       0x801a7e44
//   0x80199780: cmpwi    r31, 0
//   0x80199784: lwz      r3, 0x44(r30)
//   0x80199788: beq      0x801997a8
//   0x8019978c: b        0x801997a0
//   0x80199790: lwz      r0, 0(r3)
//   0x80199794: cmplw    r0, r31
//   0x80199798: beq      0x801997a8
//   0x8019979c: lwz      r3, 0xc(r3)
//

// TODO: Full decompilation requires Ghidra
