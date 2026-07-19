// Function at 0x800928a0
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800928a0: stwu     r1, -0x20(r1)
//   0x800928a4: mflr     r0
//   0x800928a8: stw      r0, 0x24(r1)
//   0x800928ac: stw      r31, 0x1c(r1)
//   0x800928b0: stw      r30, 0x18(r1)
//   0x800928b4: mr       r30, r3
//   0x800928b8: addi     r3, r3, 0x2c
//   0x800928bc: bl       0x8012ce14
//   0x800928c0: lwz      r4, 0x10(r30)
//   0x800928c4: addi     r0, r3, 0x87
//   0x800928c8: rlwinm   r3, r0, 0, 0, 0x1a
//   0x800928cc: cmpwi    r4, 0
//   0x800928d0: bne      0x800928dc
//   0x800928d4: li       r0, 0
//   0x800928d8: b        0x800928e4
//   0x800928dc: lwz      r0, 0x1c(r4)
//   0x800928e0: subf     r0, r4, r0
//   0x800928e4: cmplw    r3, r0
//   0x800928e8: ble      0x800928f4
//   0x800928ec: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
