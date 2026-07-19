// Function at 0x80063da0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80063da0: stwu     r1, -0x20(r1)
//   0x80063da4: mflr     r0
//   0x80063da8: lwz      r3, 0(r3)
//   0x80063dac: cmplwi   r4, 0x1f
//   0x80063db0: stw      r0, 0x24(r1)
//   0x80063db4: stw      r31, 0x1c(r1)
//   0x80063db8: stw      r30, 0x18(r1)
//   0x80063dbc: mr       r30, r4
//   0x80063dc0: stw      r3, 8(r1)
//   0x80063dc4: bgt      0x80063e24
//   0x80063dc8: cmpwi    r3, 0
//   0x80063dcc: beq      0x80063e24
//   0x80063dd0: lis      r31, -0x7fd5
//   0x80063dd4: addi     r6, r31, 0x4700
//   0x80063dd8: lwz      r0, 4(r6)
//   0x80063ddc: cmpw     r0, r4
//   0x80063de0: bne      0x80063e08
//   0x80063de4: mulli    r0, r4, 0x30
//   0x80063de8: li       r5, 0x30
//   0x80063dec: add      r4, r6, r0
//

// TODO: Full decompilation requires Ghidra
