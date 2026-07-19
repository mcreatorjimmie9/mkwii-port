// Function at 0x8001f8b8
// Size: 284 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8001f8b8: stwu     r1, -0x10(r1)
//   0x8001f8bc: mflr     r0
//   0x8001f8c0: lis      r3, -0x7fd6
//   0x8001f8c4: stw      r0, 0x14(r1)
//   0x8001f8c8: lwz      r0, 0x2054(r3)
//   0x8001f8cc: cmpwi    r0, 0
//   0x8001f8d0: beq      0x8001f9bc
//   0x8001f8d4: lis      r4, -0x7fd6
//   0x8001f8d8: li       r5, 1
//   0x8001f8dc: addi     r4, r4, 0x21b8
//   0x8001f8e0: lwz      r0, 0x1f8(r4)
//   0x8001f8e4: rlwinm   r0, r0, 0, 0x16, 0x14
//   0x8001f8e8: stw      r0, 0x1f8(r4)
//   0x8001f8ec: beq      0x8001f950
//   0x8001f8f0: lwz      r0, 0x2f8(r4)
//   0x8001f8f4: clrlwi   r0, r0, 0x10
//   0x8001f8f8: cmplwi   r0, 0xd00
//   0x8001f8fc: bne      0x8001f950
//   0x8001f900: addi     r3, r3, 0x2054
//   0x8001f904: lwz      r0, 4(r3)
//

// TODO: Full decompilation requires Ghidra
