// Function at 0x800a8b70
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a8b70: stwu     r1, -0x10(r1)
//   0x800a8b74: mflr     r0
//   0x800a8b78: cmpwi    r3, 0
//   0x800a8b7c: stw      r0, 0x14(r1)
//   0x800a8b80: stw      r31, 0xc(r1)
//   0x800a8b84: mr       r31, r4
//   0x800a8b88: stw      r30, 8(r1)
//   0x800a8b8c: mr       r30, r3
//   0x800a8b90: beq      0x800a8bb0
//   0x800a8b94: li       r4, -1
//   0x800a8b98: addi     r3, r3, 0x100
//   0x800a8b9c: bl       0x800a5980
//   0x800a8ba0: cmpwi    r31, 0
//   0x800a8ba4: ble      0x800a8bb0
//   0x800a8ba8: mr       r3, r30
//   0x800a8bac: bl       0x80229a90
//   0x800a8bb0: mr       r3, r30
//   0x800a8bb4: lwz      r31, 0xc(r1)
//   0x800a8bb8: lwz      r30, 8(r1)
//   0x800a8bbc: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
