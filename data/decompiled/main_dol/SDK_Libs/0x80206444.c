// Function at 0x80206444
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80206444: stwu     r1, -0x10(r1)
//   0x80206448: mflr     r0
//   0x8020644c: extsb    r3, r3
//   0x80206450: stw      r0, 0x14(r1)
//   0x80206454: bl       0x801ef320
//   0x80206458: addi     r0, r3, -0x41
//   0x8020645c: extsh.   r0, r0
//   0x80206460: blt      0x8020646c
//   0x80206464: cmpwi    r0, 0x1a
//   0x80206468: blt      0x80206474
//   0x8020646c: li       r3, 0
//   0x80206470: b        0x80206488
//   0x80206474: mulli    r0, r0, 0x1880
//   0x80206478: lis      r3, -0x7fcb
//   0x8020647c: addi     r3, r3, 0x6ad0
//   0x80206480: add      r3, r3, r0
//   0x80206484: addi     r3, r3, 0x48
//   0x80206488: lwz      r0, 0x14(r1)
//   0x8020648c: mtlr     r0
//   0x80206490: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
