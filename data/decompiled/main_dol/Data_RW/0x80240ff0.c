// Function at 0x80240ff0
// Size: 288 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80240ff0: stwu     r1, -0x10(r1)
//   0x80240ff4: mflr     r0
//   0x80240ff8: stw      r0, 0x14(r1)
//   0x80240ffc: stw      r31, 0xc(r1)
//   0x80241000: mr       r31, r3
//   0x80241004: lhz      r0, 0xc(r3)
//   0x80241008: clrlwi.  r0, r0, 0x1f
//   0x8024100c: bne      0x80241018
//   0x80241010: li       r3, 0
//   0x80241014: b        0x8024103c
//   0x80241018: lbz      r0, 4(r3)
//   0x8024101c: cmpwi    r0, 0
//   0x80241020: beq      0x80241034
//   0x80241024: li       r0, 0
//   0x80241028: stb      r0, 4(r3)
//   0x8024102c: lwz      r3, 0x10(r3)
//   0x80241030: b        0x8024103c
//   0x80241034: bl       0x80240e24
//   0x80241038: lwz      r3, 0x10(r31)
//   0x8024103c: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
