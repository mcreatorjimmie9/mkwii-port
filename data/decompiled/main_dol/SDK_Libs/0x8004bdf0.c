// Function at 0x8004bdf0
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004bdf0: stwu     r1, -0x20(r1)
//   0x8004bdf4: mflr     r0
//   0x8004bdf8: lwz      r5, 0(r3)
//   0x8004bdfc: stw      r0, 0x24(r1)
//   0x8004be00: addi     r8, r5, 8
//   0x8004be04: stw      r31, 0x1c(r1)
//   0x8004be08: lhz      r0, 0xc(r5)
//   0x8004be0c: lwz      r3, 0(r4)
//   0x8004be10: slwi     r0, r0, 4
//   0x8004be14: addi     r7, r3, 4
//   0x8004be18: lwz      r6, 0(r3)
//   0x8004be1c: add      r3, r5, r0
//   0x8004be20: addi     r31, r3, 8
//   0x8004be24: b        0x8004be74
//   0x8004be28: rlwinm   r0, r3, 0x1d, 0x13, 0x1f
//   0x8004be2c: mr       r8, r31
//   0x8004be30: cmplw    r0, r6
//   0x8004be34: clrlwi   r3, r3, 0x1d
//   0x8004be38: bge      0x8004be64
//   0x8004be3c: lbzx     r0, r7, r0
//

// TODO: Full decompilation requires Ghidra
