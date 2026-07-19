// Function at 0x801b1e60
// Size: 104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1e60: stwu     r1, -0x10(r1)
//   0x801b1e64: mflr     r0
//   0x801b1e68: li       r4, 0x1e
//   0x801b1e6c: stw      r0, 0x14(r1)
//   0x801b1e70: addi     r3, r1, 8
//   0x801b1e74: bl       0x801b13e4
//   0x801b1e78: cmpwi    r3, 0
//   0x801b1e7c: bne      0x801b1e8c
//   0x801b1e80: li       r0, 2
//   0x801b1e84: stw      r0, 8(r1)
//   0x801b1e88: b        0x801b1eb4
//   0x801b1e8c: lwz      r0, 8(r1)
//   0x801b1e90: cmplwi   r0, 1
//   0x801b1e94: bge      0x801b1ea4
//   0x801b1e98: li       r0, 1
//   0x801b1e9c: stw      r0, 8(r1)
//   0x801b1ea0: b        0x801b1eb4
//   0x801b1ea4: cmplwi   r0, 5
//   0x801b1ea8: ble      0x801b1eb4
//   0x801b1eac: li       r0, 5
//

// TODO: Full decompilation requires Ghidra
