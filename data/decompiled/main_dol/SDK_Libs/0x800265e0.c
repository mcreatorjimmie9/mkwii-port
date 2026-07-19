// Function at 0x800265e0
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800265e0: stwu     r1, -0x20(r1)
//   0x800265e4: mflr     r0
//   0x800265e8: stw      r0, 0x24(r1)
//   0x800265ec: addi     r11, r1, 0x20
//   0x800265f0: bl       0x80020a40
//   0x800265f4: lwz      r0, 8(r4)
//   0x800265f8: mr       r27, r3
//   0x800265fc: mr       r28, r4
//   0x80026600: mr       r29, r5
//   0x80026604: rlwinm.  r0, r0, 0, 1, 1
//   0x80026608: mr       r30, r6
//   0x8002660c: bne      0x80026618
//   0x80026610: li       r3, 0
//   0x80026614: b        0x800266bc
//   0x80026618: lwz      r3, 0x20(r3)
//   0x8002661c: lwz      r3, 0(r3)
//   0x80026620: lwz      r12, 0(r3)
//   0x80026624: lwz      r12, 0x24(r12)
//   0x80026628: mtctr    r12
//   0x8002662c: bctrl    
//

// TODO: Full decompilation requires Ghidra
