// Function at 0x800238e0
// Size: 576 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800238e0: stwu     r1, -0x20(r1)
//   0x800238e4: mflr     r0
//   0x800238e8: stw      r0, 0x24(r1)
//   0x800238ec: addi     r11, r1, 0x20
//   0x800238f0: bl       0x80020a3c
//   0x800238f4: cmplwi   r3, 0x11
//   0x800238f8: lis      r31, -0x7fd9
//   0x800238fc: mr       r26, r3
//   0x80023900: mr       r27, r4
//   0x80023904: mr       r28, r5
//   0x80023908: mr       r29, r6
//   0x8002390c: addi     r31, r31, -0x2750
//   0x80023910: bge      0x80023930
//   0x80023914: rlwinm   r0, r26, 2, 0xe, 0x1d
//   0x80023918: addi     r3, r31, 0xbc
//   0x8002391c: lwzx     r5, r3, r0
//   0x80023920: addi     r3, r31, 0x36c
//   0x80023924: crclr    cr1eq
//   0x80023928: bl       0x80023500
//   0x8002392c: b        0x8002393c
//

// TODO: Full decompilation requires Ghidra
