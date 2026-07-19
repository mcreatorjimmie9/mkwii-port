// Function at 0x801de01c
// Size: 212 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801de01c: stwu     r1, -0x20(r1)
//   0x801de020: mflr     r0
//   0x801de024: stw      r0, 0x24(r1)
//   0x801de028: stw      r31, 0x1c(r1)
//   0x801de02c: mr       r31, r6
//   0x801de030: stw      r30, 0x18(r1)
//   0x801de034: mr       r30, r5
//   0x801de038: stw      r29, 0x14(r1)
//   0x801de03c: mr       r29, r4
//   0x801de040: stw      r28, 0x10(r1)
//   0x801de044: mr       r28, r3
//   0x801de048: lwz      r7, 4(r3)
//   0x801de04c: rlwinm.  r0, r7, 0, 0x17, 0x17
//   0x801de050: beq      0x801de05c
//   0x801de054: rlwinm.  r0, r7, 0, 0x16, 0x16
//   0x801de058: beq      0x801de064
//   0x801de05c: li       r3, -7
//   0x801de060: b        0x801de0d0
//   0x801de064: rlwinm.  r0, r7, 0, 0x1c, 0x1c
//   0x801de068: bne      0x801de074
//

// TODO: Full decompilation requires Ghidra
