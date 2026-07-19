// Function at 0x8016407c
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8016407c: stwu     r1, -0x10(r1)
//   0x80164080: mflr     r0
//   0x80164084: stw      r0, 0x14(r1)
//   0x80164088: lbz      r0, 0(r3)
//   0x8016408c: stw      r31, 0xc(r1)
//   0x80164090: mr       r31, r4
//   0x80164094: extsb.   r0, r0
//   0x80164098: stw      r30, 8(r1)
//   0x8016409c: mr       r30, r3
//   0x801640a0: beq      0x801640c8
//   0x801640a4: lbz      r0, 0(r4)
//   0x801640a8: extsb.   r0, r0
//   0x801640ac: beq      0x801640c8
//   0x801640b0: li       r5, 4
//   0x801640b4: bl       0x80012858
//   0x801640b8: cmpwi    r3, 0
//   0x801640bc: beq      0x801640c8
//   0x801640c0: li       r3, 0
//   0x801640c4: b        0x80164154
//   0x801640c8: lbz      r0, 4(r30)
//

// TODO: Full decompilation requires Ghidra
