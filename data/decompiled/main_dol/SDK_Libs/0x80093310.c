// Function at 0x80093310
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80093310: stwu     r1, -0x20(r1)
//   0x80093314: mflr     r0
//   0x80093318: stw      r0, 0x24(r1)
//   0x8009331c: stw      r31, 0x1c(r1)
//   0x80093320: stw      r30, 0x18(r1)
//   0x80093324: mr       r30, r3
//   0x80093328: addi     r3, r3, 0x2c
//   0x8009332c: bl       0x8012a0b4
//   0x80093330: lwz      r4, 0x10(r30)
//   0x80093334: addi     r0, r3, 0x87
//   0x80093338: rlwinm   r3, r0, 0, 0, 0x1a
//   0x8009333c: cmpwi    r4, 0
//   0x80093340: bne      0x8009334c
//   0x80093344: li       r0, 0
//   0x80093348: b        0x80093354
//   0x8009334c: lwz      r0, 0x1c(r4)
//   0x80093350: subf     r0, r4, r0
//   0x80093354: cmplw    r3, r0
//   0x80093358: ble      0x80093364
//   0x8009335c: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
