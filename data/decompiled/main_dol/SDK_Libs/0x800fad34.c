// Function at 0x800fad34
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800fad34: stwu     r1, -0x10(r1)
//   0x800fad38: mflr     r0
//   0x800fad3c: stw      r0, 0x14(r1)
//   0x800fad40: stw      r31, 0xc(r1)
//   0x800fad44: stw      r30, 8(r1)
//   0x800fad48: mr       r30, r3
//   0x800fad4c: lwz      r31, 8(r3)
//   0x800fad50: lwz      r3, 0(r3)
//   0x800fad54: bl       0x800ef408
//   0x800fad58: cmpw     r31, r3
//   0x800fad5c: bge      0x800fad68
//   0x800fad60: cmpwi    r31, -1
//   0x800fad64: bne      0x800fad70
//   0x800fad68: li       r3, 0
//   0x800fad6c: b        0x800fadb8
//   0x800fad70: lwz      r3, 0(r30)
//   0x800fad74: mr       r4, r31
//   0x800fad78: bl       0x800ef410
//   0x800fad7c: lwz      r31, 0x14(r3)
//   0x800fad80: cmpwi    r31, -1
//

// TODO: Full decompilation requires Ghidra
