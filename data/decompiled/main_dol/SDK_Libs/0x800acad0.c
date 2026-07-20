// Function at 0x800acad0
// Size: 1040 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800acad0: stwu     r1, -0x10(r1)
//   0x800acad4: mflr     r0
//   0x800acad8: stw      r0, 0x14(r1)
//   0x800acadc: stw      r31, 0xc(r1)
//   0x800acae0: mr       r31, r4
//   0x800acae4: stw      r30, 8(r1)
//   0x800acae8: mr       r30, r3
//   0x800acaec: bl       0x801a650c
//   0x800acaf0: lwz      r4, 8(r30)
//   0x800acaf4: addi     r0, r30, 8
//   0x800acaf8: b        0x800acb20
//   0x800acafc: nop      
//   0x800acb00: mr       r6, r4
//   0x800acb04: lwz      r4, 0(r4)
//   0x800acb08: lbz      r5, -0x78(r6)
//   0x800acb0c: cmpwi    r5, 0
//   0x800acb10: beq      0x800acb20
//   0x800acb14: lbz      r5, -0x72(r6)
//   0x800acb18: or       r5, r5, r31
//   0x800acb1c: stb      r5, -0x72(r6)
//

// TODO: Full decompilation requires Ghidra
