// Function at 0x801b1f24
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1f24: stwu     r1, -0x10(r1)
//   0x801b1f28: mflr     r0
//   0x801b1f2c: li       r4, 0x21
//   0x801b1f30: stw      r0, 0x14(r1)
//   0x801b1f34: addi     r3, r1, 8
//   0x801b1f38: bl       0x801b123c
//   0x801b1f3c: cmpwi    r3, 0
//   0x801b1f40: bne      0x801b1f50
//   0x801b1f44: li       r0, 0
//   0x801b1f48: stb      r0, 8(r1)
//   0x801b1f4c: b        0x801b1f64
//   0x801b1f50: lbz      r0, 8(r1)
//   0x801b1f54: cmplwi   r0, 1
//   0x801b1f58: beq      0x801b1f64
//   0x801b1f5c: li       r0, 0
//   0x801b1f60: stb      r0, 8(r1)
//   0x801b1f64: lwz      r0, 0x14(r1)
//   0x801b1f68: lbz      r3, 8(r1)
//   0x801b1f6c: mtlr     r0
//   0x801b1f70: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
