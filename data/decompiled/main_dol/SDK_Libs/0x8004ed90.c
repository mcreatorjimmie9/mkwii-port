// Function at 0x8004ed90
// Size: 1440 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8004ed90: stwu     r1, -0x40(r1)
//   0x8004ed94: mflr     r0
//   0x8004ed98: stw      r0, 0x44(r1)
//   0x8004ed9c: stw      r31, 0x3c(r1)
//   0x8004eda0: mr       r31, r3
//   0x8004eda4: stw      r30, 0x38(r1)
//   0x8004eda8: stw      r29, 0x34(r1)
//   0x8004edac: stw      r28, 0x30(r1)
//   0x8004edb0: lwz      r4, 0(r3)
//   0x8004edb4: lwz      r0, 0x30(r4)
//   0x8004edb8: cmpwi    r0, 0
//   0x8004edbc: beq      0x8004edc8
//   0x8004edc0: add      r3, r4, r0
//   0x8004edc4: b        0x8004edcc
//   0x8004edc8: li       r3, 0
//   0x8004edcc: cmpwi    r3, 0
//   0x8004edd0: beq      0x8004eddc
//   0x8004edd4: lwz      r29, 4(r3)
//   0x8004edd8: b        0x8004ede0
//   0x8004eddc: li       r29, 0
//

// TODO: Full decompilation requires Ghidra
