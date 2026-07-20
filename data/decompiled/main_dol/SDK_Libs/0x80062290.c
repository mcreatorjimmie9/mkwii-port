// Function at 0x80062290
// Size: 800 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80062290: stwu     r1, -0x30(r1)
//   0x80062294: mflr     r0
//   0x80062298: stw      r0, 0x34(r1)
//   0x8006229c: addi     r11, r1, 0x30
//   0x800622a0: bl       0x80020a40
//   0x800622a4: lwz      r3, 0(r3)
//   0x800622a8: neg      r0, r3
//   0x800622ac: or       r0, r0, r3
//   0x800622b0: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x800622b4: beq      0x800623c4
//   0x800622b8: lis      r27, -0x7fd5
//   0x800622bc: lis      r28, -0x7fd5
//   0x800622c0: stw      r3, 8(r1)
//   0x800622c4: addi     r27, r27, 0x3e60
//   0x800622c8: addi     r28, r28, 0x3d40
//   0x800622cc: li       r30, 0
//   0x800622d0: li       r29, 0
//   0x800622d4: li       r31, 1
//   0x800622d8: mr       r4, r30
//   0x800622dc: addi     r3, r1, 8
//

// TODO: Full decompilation requires Ghidra
