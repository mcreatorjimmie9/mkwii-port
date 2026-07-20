// Function at 0x80026f00
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80026f00: stwu     r1, -0x20(r1)
//   0x80026f04: mflr     r0
//   0x80026f08: stw      r0, 0x24(r1)
//   0x80026f0c: addi     r11, r1, 0x20
//   0x80026f10: bl       0x80020a40
//   0x80026f14: lwz      r30, 0(r4)
//   0x80026f18: mr       r27, r3
//   0x80026f1c: mr       r28, r5
//   0x80026f20: mr       r29, r6
//   0x80026f24: lwz      r0, 8(r30)
//   0x80026f28: rlwinm.  r0, r0, 0, 1, 1
//   0x80026f2c: bne      0x80026f38
//   0x80026f30: li       r31, 0
//   0x80026f34: b        0x80026fd8
//   0x80026f38: lwz      r3, 0x20(r3)
//   0x80026f3c: lwz      r3, 0(r3)
//   0x80026f40: lwz      r12, 0(r3)
//   0x80026f44: lwz      r12, 0x24(r12)
//   0x80026f48: mtctr    r12
//   0x80026f4c: bctrl    
//

// TODO: Full decompilation requires Ghidra
