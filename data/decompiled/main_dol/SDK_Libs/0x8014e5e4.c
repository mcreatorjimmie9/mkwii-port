// Function at 0x8014e5e4
// Size: 252 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8014e5e4: stwu     r1, -0x20(r1)
//   0x8014e5e8: mflr     r0
//   0x8014e5ec: stw      r0, 0x24(r1)
//   0x8014e5f0: addi     r11, r1, 0x20
//   0x8014e5f4: bl       0x80020a40
//   0x8014e5f8: cmplwi   r4, 1
//   0x8014e5fc: mr       r27, r3
//   0x8014e600: mr       r28, r4
//   0x8014e604: mr       r29, r6
//   0x8014e608: mr       r30, r7
//   0x8014e60c: bne      0x8014e618
//   0x8014e610: li       r31, 2
//   0x8014e614: b        0x8014e62c
//   0x8014e618: addi     r6, r4, -2
//   0x8014e61c: subfic   r0, r4, 2
//   0x8014e620: nor      r0, r6, r0
//   0x8014e624: srawi    r0, r0, 0x1f
//   0x8014e628: rlwinm   r31, r0, 0, 0x1d, 0x1d
//   0x8014e62c: addi     r0, r31, 2
//   0x8014e630: lhz      r3, 0x28(r3)
//

// TODO: Full decompilation requires Ghidra
