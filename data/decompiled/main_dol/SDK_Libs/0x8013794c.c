// Function at 0x8013794c
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8013794c: stwu     r1, -0x10(r1)
//   0x80137950: mflr     r0
//   0x80137954: stw      r0, 0x14(r1)
//   0x80137958: stw      r31, 0xc(r1)
//   0x8013795c: stw      r30, 8(r1)
//   0x80137960: mr       r30, r3
//   0x80137964: lbz      r5, 0x16(r3)
//   0x80137968: cmplwi   r5, 0xff
//   0x8013796c: beq      0x80137984
//   0x80137970: lis      r4, -0x7fcd
//   0x80137974: li       r0, 0x10
//   0x80137978: addi     r4, r4, 0x1cc8
//   0x8013797c: add      r4, r4, r5
//   0x80137980: stb      r0, 0x214(r4)
//   0x80137984: lbz      r31, 0x12(r3)
//   0x80137988: addi     r3, r3, 4
//   0x8013798c: bl       0x8013243c
//   0x80137990: mr       r3, r30
//   0x80137994: li       r4, 0
//   0x80137998: li       r5, 0x20
//

// TODO: Full decompilation requires Ghidra
