// Function at 0x80087830
// Size: 784 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80087830: stwu     r1, -0x20(r1)
//   0x80087834: mflr     r0
//   0x80087838: stw      r0, 0x24(r1)
//   0x8008783c: addi     r11, r1, 0x20
//   0x80087840: bl       0x80020a3c
//   0x80087844: mr       r28, r3
//   0x80087848: mr       r29, r4
//   0x8008784c: mr       r30, r5
//   0x80087850: addi     r3, r3, 4
//   0x80087854: bl       0x800881a0
//   0x80087858: cmpwi    r3, 0
//   0x8008785c: mr       r31, r3
//   0x80087860: beq      0x80087b24
//   0x80087864: lbz      r4, 8(r29)
//   0x80087868: rlwinm.  r5, r4, 0, 0x1d, 0x1d
//   0x8008786c: beq      0x8008788c
//   0x80087870: rlwinm.  r0, r4, 0, 0x1e, 0x1e
//   0x80087874: beq      0x8008788c
//   0x80087878: mr       r3, r28
//   0x8008787c: mr       r4, r31
//

// TODO: Full decompilation requires Ghidra
