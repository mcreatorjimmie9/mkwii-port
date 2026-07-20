// Function at 0x80087520
// Size: 784 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80087520: stwu     r1, -0x20(r1)
//   0x80087524: mflr     r0
//   0x80087528: stw      r0, 0x24(r1)
//   0x8008752c: addi     r11, r1, 0x20
//   0x80087530: bl       0x80020a3c
//   0x80087534: mr       r28, r3
//   0x80087538: mr       r29, r4
//   0x8008753c: mr       r30, r5
//   0x80087540: addi     r3, r3, 4
//   0x80087544: bl       0x800881a0
//   0x80087548: cmpwi    r3, 0
//   0x8008754c: mr       r31, r3
//   0x80087550: beq      0x80087814
//   0x80087554: lbz      r4, 8(r29)
//   0x80087558: rlwinm.  r5, r4, 0, 0x1d, 0x1d
//   0x8008755c: beq      0x8008757c
//   0x80087560: rlwinm.  r0, r4, 0, 0x1e, 0x1e
//   0x80087564: beq      0x8008757c
//   0x80087568: mr       r3, r28
//   0x8008756c: mr       r4, r31
//

// TODO: Full decompilation requires Ghidra
