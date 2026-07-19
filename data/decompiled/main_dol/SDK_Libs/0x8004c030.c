// Function at 0x8004c030
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c030: stwu     r1, -0x20(r1)
//   0x8004c034: mflr     r0
//   0x8004c038: stw      r0, 0x24(r1)
//   0x8004c03c: stw      r31, 0x1c(r1)
//   0x8004c040: mr       r31, r3
//   0x8004c044: lwz      r0, 0(r3)
//   0x8004c048: cmpwi    r0, 0
//   0x8004c04c: beq      0x8004c080
//   0x8004c050: lwz      r0, 0(r4)
//   0x8004c054: cmpwi    r0, 0
//   0x8004c058: beq      0x8004c080
//   0x8004c05c: stw      r0, 8(r1)
//   0x8004c060: addi     r4, r1, 8
//   0x8004c064: bl       0x8004bdf0
//   0x8004c068: cmpwi    r3, 0
//   0x8004c06c: beq      0x8004c080
//   0x8004c070: lwz      r4, 0(r31)
//   0x8004c074: lwz      r0, 0xc(r3)
//   0x8004c078: add      r3, r4, r0
//   0x8004c07c: b        0x8004c084
//

// TODO: Full decompilation requires Ghidra
