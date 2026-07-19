// Function at 0x801c745c
// Size: 576 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801c745c: stwu     r1, -0x10(r1)
//   0x801c7460: mflr     r0
//   0x801c7464: lis      r5, -0x7fcb
//   0x801c7468: rlwinm   r3, r3, 2, 0x16, 0x1d
//   0x801c746c: stw      r0, 0x14(r1)
//   0x801c7470: addi     r5, r5, -0x3a50
//   0x801c7474: li       r0, 2
//   0x801c7478: li       r7, 0
//   0x801c747c: stw      r31, 0xc(r1)
//   0x801c7480: lwzx     r31, r5, r3
//   0x801c7484: li       r5, 0
//   0x801c7488: lbz      r3, 0x8c8(r31)
//   0x801c748c: mulli    r3, r3, 0x60
//   0x801c7490: add      r3, r31, r3
//   0x801c7494: addi     r3, r3, 0xa0
//   0x801c7498: mtctr    r0
//   0x801c749c: stbx     r5, r3, r7
//   0x801c74a0: add      r6, r3, r7
//   0x801c74a4: addi     r7, r7, 8
//   0x801c74a8: stb      r5, 1(r6)
//

// TODO: Full decompilation requires Ghidra
