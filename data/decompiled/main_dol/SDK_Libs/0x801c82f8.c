// Function at 0x801c82f8
// Size: 2176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801c82f8: stwu     r1, -0x20(r1)
//   0x801c82fc: mflr     r0
//   0x801c8300: stw      r0, 0x24(r1)
//   0x801c8304: addi     r11, r1, 0x20
//   0x801c8308: bl       0x80020a40
//   0x801c830c: lis      r5, -0x7fcb
//   0x801c8310: rlwinm   r6, r3, 2, 0x16, 0x1d
//   0x801c8314: addi     r5, r5, -0x3a50
//   0x801c8318: mr       r27, r3
//   0x801c831c: lwzx     r31, r5, r6
//   0x801c8320: li       r0, 2
//   0x801c8324: mr       r28, r4
//   0x801c8328: li       r6, 0
//   0x801c832c: lbz      r5, 0x8c8(r31)
//   0x801c8330: li       r3, 0
//   0x801c8334: mulli    r5, r5, 0x60
//   0x801c8338: add      r5, r31, r5
//   0x801c833c: addi     r30, r5, 0xa0
//   0x801c8340: mtctr    r0
//   0x801c8344: stbx     r3, r30, r6
//

// TODO: Full decompilation requires Ghidra
