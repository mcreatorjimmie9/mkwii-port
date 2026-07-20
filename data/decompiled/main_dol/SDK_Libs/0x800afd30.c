// Function at 0x800afd30
// Size: 768 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800afd30: stwu     r1, -0x30(r1)
//   0x800afd34: mflr     r0
//   0x800afd38: stw      r0, 0x34(r1)
//   0x800afd3c: stw      r31, 0x2c(r1)
//   0x800afd40: stw      r30, 0x28(r1)
//   0x800afd44: stw      r29, 0x24(r1)
//   0x800afd48: mr       r29, r4
//   0x800afd4c: lwz      r30, 0(r4)
//   0x800afd50: lwz      r31, 0x58(r30)
//   0x800afd54: cmpwi    r31, 0
//   0x800afd58: ble      0x800afdd8
//   0x800afd5c: lbz      r0, 0x43(r30)
//   0x800afd60: cmpwi    r0, 0
//   0x800afd64: beq      0x800afd70
//   0x800afd68: lfs      f1, 0x44(r30)
//   0x800afd6c: b        0x800afd78
//   0x800afd70: mr       r3, r30
//   0x800afd74: bl       0x800b3980
//   0x800afd78: lis      r0, 0x4330
//   0x800afd7c: xoris    r3, r31, 0x8000
//

// TODO: Full decompilation requires Ghidra
