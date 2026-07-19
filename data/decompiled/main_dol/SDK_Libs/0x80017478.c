// Function at 0x80017478
// Size: 2108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80017478: stwu     r1, -0x30(r1)
//   0x8001747c: mflr     r0
//   0x80017480: lis      r3, 0x7ff0
//   0x80017484: stfd     f2, 0x10(r1)
//   0x80017488: lwz      r8, 0x14(r1)
//   0x8001748c: stw      r0, 0x34(r1)
//   0x80017490: neg      r0, r8
//   0x80017494: lwz      r4, 0x10(r1)
//   0x80017498: or       r0, r8, r0
//   0x8001749c: stfd     f1, 8(r1)
//   0x800174a0: clrlwi   r6, r4, 1
//   0x800174a4: srwi     r0, r0, 0x1f
//   0x800174a8: lwz      r5, 8(r1)
//   0x800174ac: or       r0, r6, r0
//   0x800174b0: stw      r31, 0x2c(r1)
//   0x800174b4: cmplw    r0, r3
//   0x800174b8: lwz      r9, 0xc(r1)
//   0x800174bc: clrlwi   r7, r5, 1
//   0x800174c0: bgt      0x800174dc
//   0x800174c4: neg      r0, r9
//

// TODO: Full decompilation requires Ghidra
