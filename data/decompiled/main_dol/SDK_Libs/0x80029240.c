// Function at 0x80029240
// Size: 448 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80029240: stwu     r1, -0x20(r1)
//   0x80029244: mflr     r0
//   0x80029248: stw      r0, 0x24(r1)
//   0x8002924c: addi     r11, r1, 0x20
//   0x80029250: bl       0x80020a3c
//   0x80029254: lwz      r0, 0x20(r3)
//   0x80029258: mr       r27, r3
//   0x8002925c: rlwinm.  r0, r0, 0, 0x16, 0x16
//   0x80029260: bne      0x800293dc
//   0x80029264: lwz      r0, 0xc(r3)
//   0x80029268: cmpwi    r0, 1
//   0x8002926c: bne      0x800293dc
//   0x80029270: lwz      r0, 0xb4(r3)
//   0x80029274: cmpwi    r0, 0
//   0x80029278: bne      0x800293dc
//   0x8002927c: lhz      r0, 0xde(r3)
//   0x80029280: cmpwi    r0, 0
//   0x80029284: bne      0x800293dc
//   0x80029288: lwz      r0, 0x20(r3)
//   0x8002928c: rlwinm.  r4, r0, 0, 0x1d, 0x1d
//

// TODO: Full decompilation requires Ghidra
