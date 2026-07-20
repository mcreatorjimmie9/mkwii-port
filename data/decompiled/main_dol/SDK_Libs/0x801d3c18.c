// Function at 0x801d3c18
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801d3c18: stwu     r1, -0x30(r1)
//   0x801d3c1c: mflr     r0
//   0x801d3c20: stw      r0, 0x34(r1)
//   0x801d3c24: addi     r11, r1, 0x30
//   0x801d3c28: bl       0x80020a38
//   0x801d3c2c: cmpw     r4, r5
//   0x801d3c30: bge      0x801d3dec
//   0x801d3c34: cmpwi    r4, 0x400
//   0x801d3c38: bge      0x801d3c48
//   0x801d3c3c: mr       r9, r4
//   0x801d3c40: li       r8, 0
//   0x801d3c44: b        0x801d3ca4
//   0x801d3c48: addi     r0, r4, -0x400
//   0x801d3c4c: lwz      r8, 0x34(r3)
//   0x801d3c50: srawi.   r9, r0, 9
//   0x801d3c54: beq      0x801d3c9c
//   0x801d3c58: rlwinm.  r0, r9, 0x1d, 3, 0x1f
//   0x801d3c5c: mtctr    r0
//   0x801d3c60: beq      0x801d3c90
//   0x801d3c64: lwz      r8, 0(r8)
//

// TODO: Full decompilation requires Ghidra
