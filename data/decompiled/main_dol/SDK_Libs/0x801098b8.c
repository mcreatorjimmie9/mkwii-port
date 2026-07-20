// Function at 0x801098b8
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801098b8: stwu     r1, -0x10(r1)
//   0x801098bc: mflr     r0
//   0x801098c0: cmpwi    r4, -1
//   0x801098c4: stw      r0, 0x14(r1)
//   0x801098c8: stw      r31, 0xc(r1)
//   0x801098cc: mr       r31, r5
//   0x801098d0: stw      r30, 8(r1)
//   0x801098d4: mr       r30, r3
//   0x801098d8: bne      0x801098e4
//   0x801098dc: lwz      r0, 8(r3)
//   0x801098e0: subf     r4, r5, r0
//   0x801098e4: lwz      r3, 0(r3)
//   0x801098e8: lwz      r0, 8(r30)
//   0x801098ec: add      r3, r3, r4
//   0x801098f0: subf     r0, r4, r0
//   0x801098f4: add      r4, r3, r5
//   0x801098f8: subf     r5, r5, r0
//   0x801098fc: bl       0x8000e690
//   0x80109900: lwz      r0, 8(r30)
//   0x80109904: subf     r0, r31, r0
//

// TODO: Full decompilation requires Ghidra
