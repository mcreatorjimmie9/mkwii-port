// Function at 0x80059200
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80059200: stwu     r1, -0x20(r1)
//   0x80059204: mflr     r0
//   0x80059208: stw      r0, 0x24(r1)
//   0x8005920c: addi     r11, r1, 0x20
//   0x80059210: bl       0x80020a3c
//   0x80059214: lwz      r6, 0x18(r3)
//   0x80059218: mr       r26, r3
//   0x8005921c: mr       r27, r4
//   0x80059220: mr       r28, r5
//   0x80059224: addi     r29, r6, -1
//   0x80059228: slwi     r30, r5, 1
//   0x8005922c: slwi     r31, r29, 2
//   0x80059230: b        0x80059290
//   0x80059234: lwz      r3, 0x1c(r26)
//   0x80059238: lwzx     r3, r3, r31
//   0x8005923c: cmpwi    r3, 0
//   0x80059240: beq      0x80059288
//   0x80059244: lwz      r0, 0x14(r3)
//   0x80059248: lhzx     r0, r30, r0
//   0x8005924c: rlwinm.  r0, r0, 0, 0x10, 0x11
//

// TODO: Full decompilation requires Ghidra
