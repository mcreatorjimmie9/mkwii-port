// Function at 0x8023bde0
// Size: 284 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8023bde0: stwu     r1, -0x20(r1)
//   0x8023bde4: mflr     r0
//   0x8023bde8: stw      r0, 0x24(r1)
//   0x8023bdec: stw      r31, 0x1c(r1)
//   0x8023bdf0: stw      r30, 0x18(r1)
//   0x8023bdf4: mr       r30, r4
//   0x8023bdf8: stw      r29, 0x14(r1)
//   0x8023bdfc: mr       r29, r3
//   0x8023be00: lwz      r0, 0(r3)
//   0x8023be04: cmplw    r4, r0
//   0x8023be08: beq      0x8023bedc
//   0x8023be0c: li       r31, 0
//   0x8023be10: b        0x8023be38
//   0x8023be14: lwz      r3, 0xc4(r29)
//   0x8023be18: rlwinm   r0, r31, 2, 0xe, 0x1d
//   0x8023be1c: lwzx     r3, r3, r0
//   0x8023be20: cmpwi    r3, 0
//   0x8023be24: beq      0x8023be34
//   0x8023be28: lwz      r4, 0(r29)
//   0x8023be2c: addi     r3, r3, 8
//

// TODO: Full decompilation requires Ghidra
