// Function at 0x8022a124
// Size: 276 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8022a124: stwu     r1, -0x20(r1)
//   0x8022a128: mflr     r0
//   0x8022a12c: stw      r0, 0x24(r1)
//   0x8022a130: stw      r31, 0x1c(r1)
//   0x8022a134: mr       r31, r3
//   0x8022a138: stw      r30, 0x18(r1)
//   0x8022a13c: stw      r29, 0x14(r1)
//   0x8022a140: li       r29, 0
//   0x8022a144: b        0x8022a174
//   0x8022a148: lwz      r3, 0xc(r31)
//   0x8022a14c: rlwinm   r0, r29, 2, 0xe, 0x1d
//   0x8022a150: lwzx     r30, r3, r0
//   0x8022a154: mr       r3, r30
//   0x8022a158: bl       0x8022b43c
//   0x8022a15c: clrlwi.  r0, r29, 0x10
//   0x8022a160: beq      0x8022a170
//   0x8022a164: lhz      r0, 0x76(r30)
//   0x8022a168: rlwinm   r0, r0, 0, 0x10, 0x1e
//   0x8022a16c: sth      r0, 0x76(r30)
//   0x8022a170: addi     r29, r29, 1
//

// TODO: Full decompilation requires Ghidra
