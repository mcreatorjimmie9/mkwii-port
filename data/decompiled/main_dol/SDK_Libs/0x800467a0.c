// Function at 0x800467a0
// Size: 544 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800467a0: stwu     r1, -0x20(r1)
//   0x800467a4: mflr     r0
//   0x800467a8: stw      r0, 0x24(r1)
//   0x800467ac: lbz      r0, 0xb2(r5)
//   0x800467b0: stw      r31, 0x1c(r1)
//   0x800467b4: mr       r31, r6
//   0x800467b8: rlwinm   r0, r0, 0, 0x1a, 0x1c
//   0x800467bc: stw      r30, 0x18(r1)
//   0x800467c0: cmpwi    r0, 8
//   0x800467c4: mr       r30, r3
//   0x800467c8: beq      0x800467e0
//   0x800467cc: cmpwi    r0, 0x10
//   0x800467d0: beq      0x80046820
//   0x800467d4: cmpwi    r0, 0x18
//   0x800467d8: beq      0x80046844
//   0x800467dc: b        0x80046804
//   0x800467e0: lis      r5, -0x7fd5
//   0x800467e4: addi     r4, r6, 8
//   0x800467e8: addi     r5, r5, 0x37e0
//   0x800467ec: bl       0x80085a10
//

// TODO: Full decompilation requires Ghidra
