// Function at 0x80088140
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80088140: stwu     r1, -0x10(r1)
//   0x80088144: mflr     r0
//   0x80088148: lwz      r6, 4(r3)
//   0x8008814c: stw      r0, 0x14(r1)
//   0x80088150: cmpwi    r6, 0
//   0x80088154: stw      r31, 0xc(r1)
//   0x80088158: mr       r31, r4
//   0x8008815c: bne      0x80088168
//   0x80088160: li       r3, 0
//   0x80088164: b        0x80088178
//   0x80088168: lbz      r3, 0xc(r6)
//   0x8008816c: addi     r5, r6, 8
//   0x80088170: lwz      r4, 0x10(r6)
//   0x80088174: bl       0x800ad010
//   0x80088178: mulli    r0, r31, 0x14
//   0x8008817c: lwz      r31, 0xc(r1)
//   0x80088180: add      r3, r3, r0
//   0x80088184: lwz      r0, 0x14(r1)
//   0x80088188: addi     r3, r3, 4
//   0x8008818c: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
