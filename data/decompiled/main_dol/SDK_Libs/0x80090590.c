// Function at 0x80090590
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80090590: stwu     r1, -0x10(r1)
//   0x80090594: mflr     r0
//   0x80090598: stw      r0, 0x14(r1)
//   0x8009059c: stw      r31, 0xc(r1)
//   0x800905a0: mr       r31, r3
//   0x800905a4: lwz      r0, 0(r3)
//   0x800905a8: cmpwi    r0, 4
//   0x800905ac: beq      0x800905dc
//   0x800905b0: lwz      r4, 0xec(r3)
//   0x800905b4: cmpwi    r4, 0
//   0x800905b8: beq      0x800905d4
//   0x800905bc: lbz      r0, 0x39(r3)
//   0x800905c0: cmpwi    r0, 0
//   0x800905c4: bne      0x800905d4
//   0x800905c8: mr       r3, r4
//   0x800905cc: li       r4, 1
//   0x800905d0: bl       0x800aac40
//   0x800905d4: li       r0, 4
//   0x800905d8: stw      r0, 0(r31)
//   0x800905dc: li       r0, 0
//

// TODO: Full decompilation requires Ghidra
