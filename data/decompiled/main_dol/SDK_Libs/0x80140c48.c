// Function at 0x80140c48
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80140c48: stwu     r1, -0x10(r1)
//   0x80140c4c: mflr     r0
//   0x80140c50: stw      r0, 0x14(r1)
//   0x80140c54: bl       0x80139cf4
//   0x80140c58: cmpwi    r3, 0
//   0x80140c5c: beq      0x80140c74
//   0x80140c60: lbz      r0, 0x81(r3)
//   0x80140c64: rlwinm.  r0, r0, 0, 0x19, 0x19
//   0x80140c68: beq      0x80140c74
//   0x80140c6c: li       r3, 1
//   0x80140c70: b        0x80140c78
//   0x80140c74: li       r3, 0
//   0x80140c78: lwz      r0, 0x14(r1)
//   0x80140c7c: mtlr     r0
//   0x80140c80: addi     r1, r1, 0x10
//   0x80140c84: blr      
//

// TODO: Full decompilation requires Ghidra
