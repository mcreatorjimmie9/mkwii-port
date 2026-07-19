// Function at 0x8000b8d4
// Size: 504 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000b8d4: stwu     r1, -0x10(r1)
//   0x8000b8d8: mflr     r0
//   0x8000b8dc: stw      r0, 0x14(r1)
//   0x8000b8e0: stw      r31, 0xc(r1)
//   0x8000b8e4: stw      r30, 8(r1)
//   0x8000b8e8: mr       r30, r3
//   0x8000b8ec: lwz      r0, 0(r4)
//   0x8000b8f0: rlwinm   r6, r0, 0, 0, 0x1c
//   0x8000b8f4: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x8000b8f8: stw      r0, 0(r4)
//   0x8000b8fc: add      r5, r4, r6
//   0x8000b900: lwzx     r0, r4, r6
//   0x8000b904: rlwinm   r0, r0, 0, 0x1e, 0x1c
//   0x8000b908: stwx     r0, r4, r6
//   0x8000b90c: stw      r6, -4(r5)
//   0x8000b910: lwz      r0, 0xc(r3)
//   0x8000b914: rlwinm   r0, r0, 0, 0, 0x1c
//   0x8000b918: add      r31, r3, r0
//   0x8000b91c: lwzu     r3, -4(r31)
//   0x8000b920: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
