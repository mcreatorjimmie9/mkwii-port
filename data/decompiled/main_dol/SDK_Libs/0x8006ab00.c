// Function at 0x8006ab00
// Size: 1056 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xa0 bytes
//
// Disassembly (first 20 instructions):
//   0x8006ab00: stwu     r1, -0xa0(r1)
//   0x8006ab04: mflr     r0
//   0x8006ab08: stw      r0, 0xa4(r1)
//   0x8006ab0c: stfd     f31, 0x90(r1)
//   0x8006ab10: xscmpgedp vs31, f1, f0
//   0x8006ab14: stw      r31, 0x8c(r1)
//   0x8006ab18: lwz      r31, 0(r3)
//   0x8006ab1c: lwz      r3, 0x70(r31)
//   0x8006ab20: clrlwi.  r0, r3, 0x1f
//   0x8006ab24: beq      0x8006ab40
//   0x8006ab28: mr       r3, r31
//   0x8006ab2c: addi     r4, r31, 0x74
//   0x8006ab30: addi     r5, r31, 0x80
//   0x8006ab34: addi     r6, r31, 0x8c
//   0x8006ab38: bl       0x8019a4e4
//   0x8006ab3c: b        0x8006aef4
//   0x8006ab40: rlwinm.  r0, r3, 0, 0x1d, 0x1d
//   0x8006ab44: beq      0x8006ad84
//   0x8006ab48: lfs      f1, 0x74(r31)
//   0x8006ab4c: lfs      f0, 0x8c(r31)
//

// TODO: Full decompilation requires Ghidra
