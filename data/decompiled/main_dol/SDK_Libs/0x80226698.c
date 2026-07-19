// Function at 0x80226698
// Size: 172 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80226698: stwu     r1, -0x20(r1)
//   0x8022669c: mflr     r0
//   0x802266a0: add      r4, r3, r4
//   0x802266a4: stw      r0, 0x24(r1)
//   0x802266a8: addi     r0, r3, 3
//   0x802266ac: stmw     r27, 0xc(r1)
//   0x802266b0: mr       r29, r3
//   0x802266b4: rlwinm   r3, r4, 0, 0, 0x1d
//   0x802266b8: rlwinm   r27, r0, 0, 0, 0x1d
//   0x802266bc: cmplw    r27, r3
//   0x802266c0: li       r30, 0
//   0x802266c4: bgt      0x802266d4
//   0x802266c8: subf     r4, r27, r3
//   0x802266cc: cmplwi   r4, 0x3c
//   0x802266d0: bge      0x802266dc
//   0x802266d4: li       r3, 0
//   0x802266d8: b        0x80226730
//   0x802266dc: addi     r3, r27, 0x38
//   0x802266e0: addi     r4, r4, -0x38
//   0x802266e4: bl       0x80198c08
//

// TODO: Full decompilation requires Ghidra
