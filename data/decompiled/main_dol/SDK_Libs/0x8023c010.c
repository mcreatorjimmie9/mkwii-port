// Function at 0x8023c010
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023c010: stwu     r1, -0x10(r1)
//   0x8023c014: mflr     r0
//   0x8023c018: stw      r0, 0x14(r1)
//   0x8023c01c: addic.   r0, r1, 9
//   0x8023c020: beq      0x8023c038
//   0x8023c024: slwi     r0, r5, 2
//   0x8023c028: lwz      r7, 0xc8(r3)
//   0x8023c02c: subf     r0, r5, r0
//   0x8023c030: lbzx     r0, r7, r0
//   0x8023c034: stb      r0, 9(r1)
//   0x8023c038: addic.   r0, r1, 8
//   0x8023c03c: beq      0x8023c058
//   0x8023c040: slwi     r0, r5, 2
//   0x8023c044: lwz      r3, 0xc8(r3)
//   0x8023c048: subf     r0, r5, r0
//   0x8023c04c: add      r3, r3, r0
//   0x8023c050: lbz      r0, 1(r3)
//   0x8023c054: stb      r0, 8(r1)
//   0x8023c058: lbz      r0, 9(r1)
//   0x8023c05c: mr       r3, r4
//

// TODO: Full decompilation requires Ghidra
