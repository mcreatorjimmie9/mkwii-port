// Function at 0x800fb9ac
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800fb9ac: stwu     r1, -0x10(r1)
//   0x800fb9b0: mflr     r0
//   0x800fb9b4: cmpwi    r3, 0
//   0x800fb9b8: stw      r0, 0x14(r1)
//   0x800fb9bc: stw      r31, 0xc(r1)
//   0x800fb9c0: mr       r31, r3
//   0x800fb9c4: beq      0x800fb9f4
//   0x800fb9c8: lwz      r4, 0(r3)
//   0x800fb9cc: cmpwi    r4, 0
//   0x800fb9d0: bne      0x800fb9d8
//   0x800fb9d4: b        0x800fb9f4
//   0x800fb9d8: lwz      r0, 0x108(r4)
//   0x800fb9dc: cmpwi    r0, 0
//   0x800fb9e0: bne      0x800fb9f4
//   0x800fb9e4: li       r4, 1
//   0x800fb9e8: bl       0x80101218
//   0x800fb9ec: mr       r3, r31
//   0x800fb9f0: bl       0x800fc97c
//   0x800fb9f4: lwz      r0, 0x14(r1)
//   0x800fb9f8: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
