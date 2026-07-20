// Function at 0x80187f18
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80187f18: stwu     r1, -0x20(r1)
//   0x80187f1c: mflr     r0
//   0x80187f20: stw      r0, 0x24(r1)
//   0x80187f24: stw      r31, 0x1c(r1)
//   0x80187f28: mr       r31, r3
//   0x80187f2c: stw      r30, 0x18(r1)
//   0x80187f30: stw      r29, 0x14(r1)
//   0x80187f34: mr       r29, r5
//   0x80187f38: lwz      r8, 0xd4(r3)
//   0x80187f3c: cmpwi    r8, 0
//   0x80187f40: bne      0x80187f4c
//   0x80187f44: li       r3, 0
//   0x80187f48: b        0x80187fc4
//   0x80187f4c: lhz      r3, 0xf8(r3)
//   0x80187f50: cntlzw   r0, r3
//   0x80187f54: srwi     r3, r3, 1
//   0x80187f58: rlwinm   r7, r0, 0x1b, 0x1f, 0x1f
//   0x80187f5c: addi     r0, r3, -1
//   0x80187f60: neg      r3, r7
//   0x80187f64: clrlwi   r0, r0, 0x10
//

// TODO: Full decompilation requires Ghidra
