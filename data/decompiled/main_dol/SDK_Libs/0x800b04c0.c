// Function at 0x800b04c0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b04c0: stwu     r1, -0x10(r1)
//   0x800b04c4: mflr     r0
//   0x800b04c8: li       r9, 1
//   0x800b04cc: stw      r0, 0x14(r1)
//   0x800b04d0: lwz      r11, 0x18(r3)
//   0x800b04d4: lwz      r10, 0x14(r3)
//   0x800b04d8: add      r8, r11, r5
//   0x800b04dc: stw      r6, 0xc(r3)
//   0x800b04e0: addi     r6, r8, 0x1f
//   0x800b04e4: addi     r0, r10, 0x1f
//   0x800b04e8: rlwinm   r6, r6, 0, 0, 0x1a
//   0x800b04ec: stw      r7, 0x10(r3)
//   0x800b04f0: rlwinm   r0, r0, 0, 0, 0x1a
//   0x800b04f4: cmplw    r6, r0
//   0x800b04f8: stb      r9, 0x6c(r3)
//   0x800b04fc: ble      0x800b050c
//   0x800b0500: subf     r5, r11, r10
//   0x800b0504: addi     r0, r5, 0x1f
//   0x800b0508: rlwinm   r5, r0, 0, 0, 0x1a
//   0x800b050c: lwz      r8, 0x68(r3)
//

// TODO: Full decompilation requires Ghidra
