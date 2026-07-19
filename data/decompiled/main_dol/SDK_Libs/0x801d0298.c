// Function at 0x801d0298
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801d0298: stwu     r1, -0x10(r1)
//   0x801d029c: mflr     r0
//   0x801d02a0: stw      r0, 0x14(r1)
//   0x801d02a4: stw      r31, 0xc(r1)
//   0x801d02a8: mr       r31, r3
//   0x801d02ac: bl       0x801a650c
//   0x801d02b0: extsb.   r0, r31
//   0x801d02b4: blt      0x801d02d4
//   0x801d02b8: cmpwi    r0, 0x10
//   0x801d02bc: bge      0x801d02d4
//   0x801d02c0: lis      r4, -0x7fcb
//   0x801d02c4: slwi     r0, r0, 1
//   0x801d02c8: addi     r4, r4, 0x1ce8
//   0x801d02cc: lhzx     r31, r4, r0
//   0x801d02d0: b        0x801d02d8
//   0x801d02d4: li       r31, 0
//   0x801d02d8: bl       0x801a6534
//   0x801d02dc: mr       r3, r31
//   0x801d02e0: lwz      r31, 0xc(r1)
//   0x801d02e4: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
