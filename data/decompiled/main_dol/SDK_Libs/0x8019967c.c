// Function at 0x8019967c
// Size: 212 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8019967c: stwu     r1, -0x20(r1)
//   0x80199680: mflr     r0
//   0x80199684: stw      r0, 0x24(r1)
//   0x80199688: addi     r11, r1, 0x20
//   0x8019968c: bl       0x80020a40
//   0x80199690: lwz      r0, 0x38(r3)
//   0x80199694: mr       r27, r3
//   0x80199698: mr       r28, r4
//   0x8019969c: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x801996a0: beq      0x801996ac
//   0x801996a4: addi     r3, r3, 0x20
//   0x801996a8: bl       0x801a7e44
//   0x801996ac: lwz      r29, 0x3c(r27)
//   0x801996b0: lwz      r0, 0x40(r27)
//   0x801996b4: addi     r3, r29, 3
//   0x801996b8: rlwinm   r31, r3, 0, 0, 0x1d
//   0x801996bc: addi     r30, r31, 0x10
//   0x801996c0: cmplw    r30, r0
//   0x801996c4: ble      0x801996d0
//   0x801996c8: li       r31, 0
//

// TODO: Full decompilation requires Ghidra
