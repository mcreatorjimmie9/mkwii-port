// Function at 0x8000a8b0
// Size: 664 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8000a8b0: stwu     r1, -0x20(r1)
//   0x8000a8b4: mflr     r0
//   0x8000a8b8: stw      r0, 0x24(r1)
//   0x8000a8bc: stw      r31, 0x1c(r1)
//   0x8000a8c0: stw      r30, 0x18(r1)
//   0x8000a8c4: stw      r29, 0x14(r1)
//   0x8000a8c8: mr       r29, r3
//   0x8000a8cc: stw      r28, 0x10(r1)
//   0x8000a8d0: bl       0x8019f29c
//   0x8000a8d4: rlwinm   r3, r3, 0, 0, 3
//   0x8000a8d8: addis    r0, r3, -0x1000
//   0x8000a8dc: cmplwi   r0, 0
//   0x8000a8e0: bne      0x8000a8f0
//   0x8000a8e4: li       r0, 1
//   0x8000a8e8: stb      r0, 0x80(r29)
//   0x8000a8ec: b        0x8000a8f8
//   0x8000a8f0: li       r0, 0
//   0x8000a8f4: stb      r0, 0x80(r29)
//   0x8000a8f8: bl       0x801ac890
//   0x8000a8fc: mr       r30, r3
//

// TODO: Full decompilation requires Ghidra
