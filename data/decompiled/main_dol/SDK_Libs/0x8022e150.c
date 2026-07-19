// Function at 0x8022e150
// Size: 520 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8022e150: stwu     r1, -0x20(r1)
//   0x8022e154: mflr     r0
//   0x8022e158: stw      r0, 0x24(r1)
//   0x8022e15c: addi     r11, r1, 0x20
//   0x8022e160: bl       0x80020a40
//   0x8022e164: lbz      r0, 8(r4)
//   0x8022e168: cmpwi    r0, 0
//   0x8022e16c: bne      0x8022e340
//   0x8022e170: lhz      r8, 0x10(r4)
//   0x8022e174: lwz      r6, 0x38(r4)
//   0x8022e178: lhz      r7, 0x2e(r3)
//   0x8022e17c: lbz      r5, 0x34(r4)
//   0x8022e180: rlwinm   r0, r6, 0, 0, 0xf
//   0x8022e184: cmplw    r8, r7
//   0x8022e188: stw      r5, 0x44(r3)
//   0x8022e18c: sth      r0, 0x3e(r3)
//   0x8022e190: sth      r6, 0x3c(r3)
//   0x8022e194: ble      0x8022e19c
//   0x8022e198: mr       r8, r7
//   0x8022e19c: clrlwi   r8, r8, 0x10
//

// TODO: Full decompilation requires Ghidra
