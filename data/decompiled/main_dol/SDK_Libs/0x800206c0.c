// Function at 0x800206c0
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800206c0: stwu     r1, -0x10(r1)
//   0x800206c4: mflr     r0
//   0x800206c8: stw      r0, 0x14(r1)
//   0x800206cc: lwz      r3, -0x7fc0(r13)
//   0x800206d0: cmpwi    r3, -2
//   0x800206d4: beq      0x800206e4
//   0x800206d8: bl       0x800202ac
//   0x800206dc: li       r0, -2
//   0x800206e0: stw      r0, -0x7fc0(r13)
//   0x800206e4: lwz      r0, 0x14(r1)
//   0x800206e8: mtlr     r0
//   0x800206ec: addi     r1, r1, 0x10
//   0x800206f0: blr      
//   0x800206f4: addi     r4, r3, -1
//   0x800206f8: li       r3, -1
//   0x800206fc: lbzu     r0, 1(r4)
//   0x80020700: addi     r3, r3, 1
//   0x80020704: cmpwi    r0, 0
//   0x80020708: bne      0x800206fc
//   0x8002070c: blr      
//

// TODO: Full decompilation requires Ghidra
