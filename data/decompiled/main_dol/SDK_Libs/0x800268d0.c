// Function at 0x800268d0
// Size: 1104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x1020 bytes
//
// Disassembly (first 20 instructions):
//   0x800268d0: stwu     r1, -0x1020(r1)
//   0x800268d4: mflr     r0
//   0x800268d8: stw      r0, 0x1024(r1)
//   0x800268dc: addi     r11, r1, 0x1020
//   0x800268e0: bl       0x80020a3c
//   0x800268e4: cmpwi    r4, 0
//   0x800268e8: mr       r30, r3
//   0x800268ec: beq      0x8002694c
//   0x800268f0: li       r28, 0
//   0x800268f4: b        0x80026930
//   0x800268f8: lwz      r4, 0xc(r3)
//   0x800268fc: addi     r0, r4, -1
//   0x80026900: cmplwi   r0, 1
//   0x80026904: bgt      0x80026930
//   0x80026908: lwz      r3, 0x24(r3)
//   0x8002690c: rlwinm.  r0, r3, 0, 0xf, 0xf
//   0x80026910: bne      0x8002691c
//   0x80026914: rlwinm.  r0, r3, 0, 0x10, 0x10
//   0x80026918: beq      0x80026930
//   0x8002691c: lwz      r12, 0x1c(r28)
//

// TODO: Full decompilation requires Ghidra
