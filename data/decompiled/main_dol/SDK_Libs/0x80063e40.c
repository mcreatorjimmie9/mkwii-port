// Function at 0x80063e40
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80063e40: stwu     r1, -0x20(r1)
//   0x80063e44: mflr     r0
//   0x80063e48: lis      r4, -0x7fd5
//   0x80063e4c: stw      r0, 0x24(r1)
//   0x80063e50: stw      r31, 0x1c(r1)
//   0x80063e54: mr       r31, r3
//   0x80063e58: lwz      r5, 0x4700(r4)
//   0x80063e5c: clrlwi.  r0, r5, 0x1f
//   0x80063e60: beq      0x80063e7c
//   0x80063e64: rlwinm.  r0, r5, 0, 0x1e, 0x1e
//   0x80063e68: beq      0x80063e7c
//   0x80063e6c: addi     r4, r4, 0x4700
//   0x80063e70: lwz      r0, 4(r4)
//   0x80063e74: cmpw     r3, r0
//   0x80063e78: beq      0x80063ee4
//   0x80063e7c: cmplwi   r3, 0x1f
//   0x80063e80: ble      0x80063eac
//   0x80063e84: lfs      f1, -0x7354(r2)
//   0x80063e88: li       r0, 0
//   0x80063e8c: stw      r0, 8(r1)
//

// TODO: Full decompilation requires Ghidra
