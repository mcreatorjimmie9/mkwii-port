// Function at 0x8012d2bc
// Size: 864 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x200 bytes
//
// Disassembly (first 20 instructions):
//   0x8012d2bc: stwu     r1, -0x200(r1)
//   0x8012d2c0: mflr     r0
//   0x8012d2c4: stw      r0, 0x204(r1)
//   0x8012d2c8: stfd     f31, 0x1f0(r1)
//   0x8012d2cc: xxsel    vs31, vs1, vs0, v7
//   0x8012d2d0: addi     r11, r1, 0x1f0
//   0x8012d2d4: bl       0x80020a38
//   0x8012d2d8: lwz      r0, 0x7c(r4)
//   0x8012d2dc: mr       r27, r4
//   0x8012d2e0: cmpwi    r0, 0
//   0x8012d2e4: beq      0x8012d2f4
//   0x8012d2e8: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x8012d2ec: stw      r0, 0x7c(r4)
//   0x8012d2f0: b        0x8012d5fc
//   0x8012d2f4: lwz      r7, 0x90(r4)
//   0x8012d2f8: lwz      r6, 0(r3)
//   0x8012d2fc: lwz      r5, 4(r3)
//   0x8012d300: cmpwi    r7, 0
//   0x8012d304: lwz      r0, 8(r3)
//   0x8012d308: stw      r6, 0x20(r1)
//

// TODO: Full decompilation requires Ghidra
