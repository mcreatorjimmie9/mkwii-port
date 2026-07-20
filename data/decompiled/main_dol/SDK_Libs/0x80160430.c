// Function at 0x80160430
// Size: 392 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80160430: stwu     r1, -0x10(r1)
//   0x80160434: mflr     r0
//   0x80160438: stw      r0, 0x14(r1)
//   0x8016043c: stw      r31, 0xc(r1)
//   0x80160440: stw      r30, 8(r1)
//   0x80160444: mr       r30, r3
//   0x80160448: bl       0x801a650c
//   0x8016044c: lwz      r0, -0x65a0(r13)
//   0x80160450: cmpwi    r0, 0
//   0x80160454: bne      0x80160468
//   0x80160458: lis      r4, -0x7fcc
//   0x8016045c: addi     r4, r4, -0xfc0
//   0x80160460: stw      r30, 0x78(r4)
//   0x80160464: b        0x80160484
//   0x80160468: lwz      r4, -0x65a0(r13)
//   0x8016046c: lis      r5, -0x7fcc
//   0x80160470: addi     r5, r5, -0xfc0
//   0x80160474: addi     r0, r4, -1
//   0x80160478: mulli    r0, r0, 0x14
//   0x8016047c: add      r4, r5, r0
//

// TODO: Full decompilation requires Ghidra
