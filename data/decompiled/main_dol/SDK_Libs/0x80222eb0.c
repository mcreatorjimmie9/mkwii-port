// Function at 0x80222eb0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80222eb0: stwu     r1, -0x10(r1)
//   0x80222eb4: mflr     r0
//   0x80222eb8: stw      r0, 0x14(r1)
//   0x80222ebc: stw      r31, 0xc(r1)
//   0x80222ec0: mr       r31, r4
//   0x80222ec4: stw      r30, 8(r1)
//   0x80222ec8: mr       r30, r3
//   0x80222ecc: addi     r3, r3, 0x74
//   0x80222ed0: bl       0x80037520
//   0x80222ed4: cmpwi    r3, 0
//   0x80222ed8: beq      0x80222f08
//   0x80222edc: addi     r3, r30, 0x74
//   0x80222ee0: bl       0x80037550
//   0x80222ee4: cmpwi    r31, 0
//   0x80222ee8: beq      0x80222efc
//   0x80222eec: lwz      r0, 0x50(r3)
//   0x80222ef0: ori      r0, r0, 1
//   0x80222ef4: stw      r0, 0x50(r3)
//   0x80222ef8: b        0x80222f08
//   0x80222efc: lwz      r0, 0x50(r3)
//

// TODO: Full decompilation requires Ghidra
