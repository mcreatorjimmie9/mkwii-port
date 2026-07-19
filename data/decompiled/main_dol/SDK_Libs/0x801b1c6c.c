// Function at 0x801b1c6c
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1c6c: stwu     r1, -0x10(r1)
//   0x801b1c70: mflr     r0
//   0x801b1c74: li       r4, 0xb
//   0x801b1c78: stw      r0, 0x14(r1)
//   0x801b1c7c: addi     r3, r1, 8
//   0x801b1c80: bl       0x801b123c
//   0x801b1c84: cmpwi    r3, 0
//   0x801b1c88: bne      0x801b1cb0
//   0x801b1c8c: bl       0x801b2300
//   0x801b1c90: extsb.   r0, r3
//   0x801b1c94: bne      0x801b1ca4
//   0x801b1c98: li       r0, 0
//   0x801b1c9c: stb      r0, 8(r1)
//   0x801b1ca0: b        0x801b1cc4
//   0x801b1ca4: li       r0, 1
//   0x801b1ca8: stb      r0, 8(r1)
//   0x801b1cac: b        0x801b1cc4
//   0x801b1cb0: lbz      r0, 8(r1)
//   0x801b1cb4: cmplwi   r0, 9
//   0x801b1cb8: ble      0x801b1cc4
//

// TODO: Full decompilation requires Ghidra
