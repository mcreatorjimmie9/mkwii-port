// Function at 0x8015bb00
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8015bb00: stwu     r1, -0x10(r1)
//   0x8015bb04: mflr     r0
//   0x8015bb08: stw      r0, 0x14(r1)
//   0x8015bb0c: lhz      r0, 6(r4)
//   0x8015bb10: lhz      r5, 0(r3)
//   0x8015bb14: clrlwi   r0, r0, 0x14
//   0x8015bb18: cmplw    r5, r0
//   0x8015bb1c: beq      0x8015bb28
//   0x8015bb20: li       r3, 0
//   0x8015bb24: b        0x8015bb80
//   0x8015bb28: cmplwi   r5, 2
//   0x8015bb2c: bne      0x8015bb48
//   0x8015bb30: lhz      r3, 4(r3)
//   0x8015bb34: lhz      r0, 8(r4)
//   0x8015bb38: subf     r0, r3, r0
//   0x8015bb3c: cntlzw   r0, r0
//   0x8015bb40: rlwinm   r3, r0, 0x1b, 0x18, 0x1f
//   0x8015bb44: b        0x8015bb80
//   0x8015bb48: cmplwi   r5, 4
//   0x8015bb4c: bne      0x8015bb68
//

// TODO: Full decompilation requires Ghidra
