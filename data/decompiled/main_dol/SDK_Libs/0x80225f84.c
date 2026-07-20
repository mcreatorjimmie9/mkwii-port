// Function at 0x80225f84
// Size: 348 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80225f84: stwu     r1, -0x10(r1)
//   0x80225f88: mflr     r0
//   0x80225f8c: stw      r0, 0x14(r1)
//   0x80225f90: stw      r31, 0xc(r1)
//   0x80225f94: mr       r31, r3
//   0x80225f98: bl       0x80033810
//   0x80225f9c: lwz      r0, 0xc0(r31)
//   0x80225fa0: cmpwi    r0, 0
//   0x80225fa4: beq      0x80226044
//   0x80225fa8: addi     r3, r31, 0x38
//   0x80225fac: li       r4, 0
//   0x80225fb0: bl       0x800af0e0
//   0x80225fb4: b        0x8022603c
//   0x80225fb8: lhz      r0, 0xdc(r3)
//   0x80225fbc: lwz      r4, 0xc(r3)
//   0x80225fc0: cmplwi   r0, 1
//   0x80225fc4: bne      0x80226030
//   0x80225fc8: addi     r0, r4, -1
//   0x80225fcc: cmplwi   r0, 1
//   0x80225fd0: bgt      0x80226030
//

// TODO: Full decompilation requires Ghidra
