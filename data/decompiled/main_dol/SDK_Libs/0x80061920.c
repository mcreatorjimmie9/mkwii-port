// Function at 0x80061920
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80061920: stwu     r1, -0x10(r1)
//   0x80061924: mflr     r0
//   0x80061928: stw      r0, 0x14(r1)
//   0x8006192c: stw      r31, 0xc(r1)
//   0x80061930: mr       r31, r3
//   0x80061934: lwz      r0, 0(r3)
//   0x80061938: clrlwi.  r0, r0, 0x1f
//   0x8006193c: beq      0x8006194c
//   0x80061940: addi     r4, r31, 4
//   0x80061944: li       r3, 0
//   0x80061948: bl       0x80060640
//   0x8006194c: lwz      r0, 0(r31)
//   0x80061950: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x80061954: beq      0x80061964
//   0x80061958: addi     r4, r31, 0x34
//   0x8006195c: li       r3, 3
//   0x80061960: bl       0x80060640
//   0x80061964: lwz      r0, 0(r31)
//   0x80061968: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x8006196c: beq      0x8006197c
//

// TODO: Full decompilation requires Ghidra
