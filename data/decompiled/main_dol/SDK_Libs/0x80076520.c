// Function at 0x80076520
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80076520: stwu     r1, -0x10(r1)
//   0x80076524: mflr     r0
//   0x80076528: stw      r0, 0x14(r1)
//   0x8007652c: stw      r31, 0xc(r1)
//   0x80076530: mr       r31, r4
//   0x80076534: stw      r30, 8(r1)
//   0x80076538: mr       r30, r3
//   0x8007653c: lwz      r5, 0(r4)
//   0x80076540: lwz      r0, 0x18(r3)
//   0x80076544: cmplw    r5, r0
//   0x80076548: beq      0x800765ac
//   0x8007654c: cmpwi    r5, 0
//   0x80076550: beq      0x80076564
//   0x80076554: mr       r3, r31
//   0x80076558: addi     r4, r13, -0x7e80
//   0x8007655c: bl       0x8004e1b0
//   0x80076560: b        0x80076568
//   0x80076564: li       r3, 0
//   0x80076568: stw      r3, 0x1c(r30)
//   0x8007656c: lwz      r0, 0(r31)
//

// TODO: Full decompilation requires Ghidra
