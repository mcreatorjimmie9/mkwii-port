// Function at 0x80008004
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80008004: stwu     r1, -0x10(r1)
//   0x80008008: mflr     r0
//   0x8000800c: lis      r4, -0x7fda
//   0x80008010: stw      r0, 0x14(r1)
//   0x80008014: addi     r4, r4, -0x7c80
//   0x80008018: stw      r31, 0xc(r1)
//   0x8000801c: mr       r31, r3
//   0x80008020: bl       0x800b2830
//   0x80008024: lwz      r3, -0x6c00(r13)
//   0x80008028: lwz      r0, 0x5c(r3)
//   0x8000802c: cmpwi    r0, 3
//   0x80008030: beq      0x80008050
//   0x80008034: bge      0x80008044
//   0x80008038: cmpwi    r0, 1
//   0x8000803c: beq      0x80008088
//   0x80008040: b        0x80008088
//   0x80008044: cmpwi    r0, 5
//   0x80008048: bge      0x80008088
//   0x8000804c: b        0x8000806c
//   0x80008050: lis      r4, -0x7fdc
//

// TODO: Full decompilation requires Ghidra
