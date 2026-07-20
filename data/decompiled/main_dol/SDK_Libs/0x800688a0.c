// Function at 0x800688a0
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x800688a0: stwu     r1, -0x50(r1)
//   0x800688a4: mflr     r0
//   0x800688a8: stw      r0, 0x54(r1)
//   0x800688ac: addi     r11, r1, 0x50
//   0x800688b0: bl       0x80020a28
//   0x800688b4: rlwinm.  r0, r5, 0, 0x1c, 0x1c
//   0x800688b8: mr       r24, r3
//   0x800688bc: mr       r25, r4
//   0x800688c0: li       r27, 0
//   0x800688c4: li       r26, 1
//   0x800688c8: beq      0x800688d0
//   0x800688cc: ori      r26, r26, 8
//   0x800688d0: rlwinm.  r0, r5, 0, 0x1d, 0x1d
//   0x800688d4: beq      0x800688dc
//   0x800688d8: ori      r26, r26, 0x10
//   0x800688dc: ori      r28, r26, 0x10
//   0x800688e0: addi     r31, r1, 8
//   0x800688e4: addi     r30, r1, 0xc
//   0x800688e8: addi     r29, r1, 0x10
//   0x800688ec: b        0x800689bc
//

// TODO: Full decompilation requires Ghidra
