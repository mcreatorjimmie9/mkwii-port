// Function at 0x80188c30
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80188c30: stwu     r1, -0x20(r1)
//   0x80188c34: mflr     r0
//   0x80188c38: stw      r0, 0x24(r1)
//   0x80188c3c: stw      r31, 0x1c(r1)
//   0x80188c40: stw      r30, 0x18(r1)
//   0x80188c44: mr       r30, r4
//   0x80188c48: stw      r29, 0x14(r1)
//   0x80188c4c: mr       r29, r3
//   0x80188c50: bl       0x80186320
//   0x80188c54: lbz      r0, 0xcf(r29)
//   0x80188c58: clrlwi.  r0, r0, 0x1f
//   0x80188c5c: bne      0x80188c68
//   0x80188c60: clrlwi.  r0, r30, 0x1f
//   0x80188c64: bne      0x80188ca4
//   0x80188c68: li       r30, 0
//   0x80188c6c: li       r31, 0
//   0x80188c70: b        0x80188c98
//   0x80188c74: lwz      r0, 0xfc(r29)
//   0x80188c78: add      r3, r0, r31
//   0x80188c7c: lwz      r3, 4(r3)
//

// TODO: Full decompilation requires Ghidra
