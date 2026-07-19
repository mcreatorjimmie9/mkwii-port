// Function at 0x800b1c20
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800b1c20: stwu     r1, -0x20(r1)
//   0x800b1c24: mflr     r0
//   0x800b1c28: stw      r0, 0x24(r1)
//   0x800b1c2c: stw      r31, 0x1c(r1)
//   0x800b1c30: mr       r31, r4
//   0x800b1c34: stw      r30, 0x18(r1)
//   0x800b1c38: mr       r30, r3
//   0x800b1c3c: lwz      r12, 0(r3)
//   0x800b1c40: lwz      r12, 0x54(r12)
//   0x800b1c44: mtctr    r12
//   0x800b1c48: bctrl    
//   0x800b1c4c: cmpwi    r3, 0
//   0x800b1c50: beq      0x800b1c58
//   0x800b1c54: b        0x800b1c5c
//   0x800b1c58: lhz      r31, 0x18(r30)
//   0x800b1c5c: rlwinm.  r3, r31, 0x18, 0x18, 0x1f
//   0x800b1c60: bne      0x800b1c74
//   0x800b1c64: li       r0, 0
//   0x800b1c68: stb      r31, 8(r1)
//   0x800b1c6c: stb      r0, 9(r1)
//

// TODO: Full decompilation requires Ghidra
