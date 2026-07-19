// Function at 0x800f1e40
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800f1e40: stwu     r1, -0x10(r1)
//   0x800f1e44: mflr     r0
//   0x800f1e48: stw      r0, 0x14(r1)
//   0x800f1e4c: lwz      r3, 0(r3)
//   0x800f1e50: bl       0x801ed8ec
//   0x800f1e54: srwi     r0, r3, 0x18
//   0x800f1e58: rlwinm   r3, r3, 0x10, 0x18, 0x1f
//   0x800f1e5c: cmpwi    r0, 0xa
//   0x800f1e60: bne      0x800f1e6c
//   0x800f1e64: li       r3, 1
//   0x800f1e68: b        0x800f1ea8
//   0x800f1e6c: cmpwi    r0, 0xac
//   0x800f1e70: bne      0x800f1e8c
//   0x800f1e74: cmpwi    r3, 0x10
//   0x800f1e78: blt      0x800f1e8c
//   0x800f1e7c: cmpwi    r3, 0x1f
//   0x800f1e80: bgt      0x800f1e8c
//   0x800f1e84: li       r3, 1
//   0x800f1e88: b        0x800f1ea8
//   0x800f1e8c: cmpwi    r0, 0xc0
//

// TODO: Full decompilation requires Ghidra
