// Function at 0x800d0c64
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800d0c64: stwu     r1, -0x10(r1)
//   0x800d0c68: mflr     r0
//   0x800d0c6c: mr       r4, r3
//   0x800d0c70: stw      r0, 0x14(r1)
//   0x800d0c74: lwz      r5, -0x6918(r13)
//   0x800d0c78: cmpwi    r5, 0
//   0x800d0c7c: beq      0x800d0c94
//   0x800d0c80: lwz      r0, 4(r5)
//   0x800d0c84: cmpwi    r0, 5
//   0x800d0c88: bne      0x800d0c94
//   0x800d0c8c: li       r0, 1
//   0x800d0c90: b        0x800d0c98
//   0x800d0c94: li       r0, 0
//   0x800d0c98: cmpwi    r0, 0
//   0x800d0c9c: bne      0x800d0ca8
//   0x800d0ca0: li       r3, 0
//   0x800d0ca4: b        0x800d0cb8
//   0x800d0ca8: lwz      r3, 0(r5)
//   0x800d0cac: bl       0x800fc6e8
//   0x800d0cb0: cntlzw   r0, r3
//

// TODO: Full decompilation requires Ghidra
