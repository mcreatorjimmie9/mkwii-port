// Function at 0x800b02a0
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b02a0: stwu     r1, -0x10(r1)
//   0x800b02a4: mflr     r0
//   0x800b02a8: stw      r0, 0x14(r1)
//   0x800b02ac: stw      r31, 0xc(r1)
//   0x800b02b0: mr       r31, r3
//   0x800b02b4: lbz      r0, 0x6e(r3)
//   0x800b02b8: cmpwi    r0, 0
//   0x800b02bc: beq      0x800b02dc
//   0x800b02c0: lbz      r0, 4(r3)
//   0x800b02c4: cmpwi    r0, 0
//   0x800b02c8: beq      0x800b02dc
//   0x800b02cc: addi     r3, r3, 0x28
//   0x800b02d0: bl       0x8015e4c8
//   0x800b02d4: li       r0, 0
//   0x800b02d8: stb      r0, 4(r31)
//   0x800b02dc: lwz      r0, 0x14(r1)
//   0x800b02e0: lwz      r31, 0xc(r1)
//   0x800b02e4: mtlr     r0
//   0x800b02e8: addi     r1, r1, 0x10
//   0x800b02ec: blr      
//

// TODO: Full decompilation requires Ghidra
