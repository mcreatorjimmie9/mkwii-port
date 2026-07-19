// Function at 0x80171250
// Size: 2152 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80171250: stwu     r1, -0x30(r1)
//   0x80171254: mflr     r0
//   0x80171258: stw      r0, 0x34(r1)
//   0x8017125c: addi     r11, r1, 0x30
//   0x80171260: bl       0x80020a30
//   0x80171264: lwz      r29, -0x68d8(r2)
//   0x80171268: lwz      r0, 0x5e4(r29)
//   0x8017126c: cmplwi   r0, 0xff
//   0x80171270: beq      0x801713a0
//   0x80171274: lwz      r0, 0x254(r29)
//   0x80171278: li       r28, 0
//   0x8017127c: li       r23, 1
//   0x80171280: rlwinm   r3, r0, 0x16, 0x1c, 0x1f
//   0x80171284: rlwinm   r27, r0, 0x10, 0x1d, 0x1f
//   0x80171288: addi     r26, r3, 1
//   0x8017128c: b        0x80171314
//   0x80171290: cmpwi    r28, 2
//   0x80171294: beq      0x801712d8
//   0x80171298: bge      0x801712ac
//   0x8017129c: cmpwi    r28, 0
//

// TODO: Full decompilation requires Ghidra
