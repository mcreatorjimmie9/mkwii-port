// Function at 0x8009f380
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8009f380: stwu     r1, -0x10(r1)
//   0x8009f384: mflr     r0
//   0x8009f388: lwz      r5, 0x28(r3)
//   0x8009f38c: stw      r0, 0x14(r1)
//   0x8009f390: stw      r31, 0xc(r1)
//   0x8009f394: mr       r31, r4
//   0x8009f398: stw      r30, 8(r1)
//   0x8009f39c: mr       r30, r3
//   0x8009f3a0: lbz      r3, 0(r5)
//   0x8009f3a4: lwz      r4, 4(r5)
//   0x8009f3a8: bl       0x800ad010
//   0x8009f3ac: cmpwi    r3, 0
//   0x8009f3b0: bne      0x8009f3bc
//   0x8009f3b4: li       r3, 0
//   0x8009f3b8: b        0x8009f40c
//   0x8009f3bc: lwz      r0, 0(r3)
//   0x8009f3c0: cmplw    r31, r0
//   0x8009f3c4: blt      0x8009f3d0
//   0x8009f3c8: li       r3, 0
//   0x8009f3cc: b        0x8009f40c
//

// TODO: Full decompilation requires Ghidra
