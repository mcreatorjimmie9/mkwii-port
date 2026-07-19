// Function at 0x80187de8
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80187de8: stwu     r1, -0x10(r1)
//   0x80187dec: mflr     r0
//   0x80187df0: cmpwi    r4, 0
//   0x80187df4: stw      r0, 0x14(r1)
//   0x80187df8: stw      r31, 0xc(r1)
//   0x80187dfc: stw      r30, 8(r1)
//   0x80187e00: mr       r30, r3
//   0x80187e04: beq      0x80187e4c
//   0x80187e08: addi     r4, r4, 1
//   0x80187e0c: lhz      r0, 0xf8(r3)
//   0x80187e10: rlwinm   r31, r4, 1, 0x10, 0x1e
//   0x80187e14: cmplw    r31, r0
//   0x80187e18: ble      0x80187e4c
//   0x80187e1c: lwz      r12, 0(r3)
//   0x80187e20: lwz      r12, 0x68(r12)
//   0x80187e24: mtctr    r12
//   0x80187e28: bctrl    
//   0x80187e2c: lis      r3, -0x7fcc
//   0x80187e30: mr       r4, r31
//   0x80187e34: lwz      r3, 0x620(r3)
//

// TODO: Full decompilation requires Ghidra
