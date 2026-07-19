// Function at 0x801f381c
// Size: 1056 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f381c: stwu     r1, -0x10(r1)
//   0x801f3820: mflr     r0
//   0x801f3824: cmpwi    r3, 0
//   0x801f3828: stw      r0, 0x14(r1)
//   0x801f382c: beq      0x801f3838
//   0x801f3830: cmpwi    r4, 0
//   0x801f3834: bne      0x801f3840
//   0x801f3838: li       r3, 1
//   0x801f383c: b        0x801f3920
//   0x801f3840: clrlwi   r8, r3, 0x18
//   0x801f3844: rlwinm   r0, r3, 0, 0x10, 0x17
//   0x801f3848: cmplwi   r8, 0x1a
//   0x801f384c: bge      0x801f3858
//   0x801f3850: cmplwi   r0, 0x400
//   0x801f3854: beq      0x801f3860
//   0x801f3858: li       r3, 1
//   0x801f385c: b        0x801f38ec
//   0x801f3860: mulli    r5, r8, 0x2c
//   0x801f3864: lis      r6, -0x7fcb
//   0x801f3868: srwi     r7, r3, 0x10
//

// TODO: Full decompilation requires Ghidra
