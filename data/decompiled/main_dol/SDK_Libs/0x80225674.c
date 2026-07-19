// Function at 0x80225674
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80225674: stwu     r1, -0x10(r1)
//   0x80225678: mflr     r0
//   0x8022567c: stw      r0, 0x14(r1)
//   0x80225680: stw      r31, 0xc(r1)
//   0x80225684: stw      r30, 8(r1)
//   0x80225688: lwz      r30, 0x18(r3)
//   0x8022568c: cmpwi    r30, 0
//   0x80225690: bne      0x8022569c
//   0x80225694: li       r3, 0
//   0x80225698: b        0x802256f0
//   0x8022569c: addi     r3, r30, 4
//   0x802256a0: li       r4, 0
//   0x802256a4: bl       0x800af0e0
//   0x802256a8: cmpwi    r3, 0
//   0x802256ac: mr       r31, r3
//   0x802256b0: bne      0x802256bc
//   0x802256b4: li       r31, 0
//   0x802256b8: b        0x802256ec
//   0x802256bc: lwz      r12, 0x20(r30)
//   0x802256c0: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
