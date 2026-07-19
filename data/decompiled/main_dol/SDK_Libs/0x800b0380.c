// Function at 0x800b0380
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800b0380: stwu     r1, -0x20(r1)
//   0x800b0384: mflr     r0
//   0x800b0388: stw      r0, 0x24(r1)
//   0x800b038c: stw      r31, 0x1c(r1)
//   0x800b0390: mr       r31, r3
//   0x800b0394: stw      r30, 0x18(r1)
//   0x800b0398: mr       r30, r5
//   0x800b039c: stw      r29, 0x14(r1)
//   0x800b03a0: lwz      r8, 0x18(r3)
//   0x800b03a4: lwz      r9, 0x14(r3)
//   0x800b03a8: add      r5, r8, r5
//   0x800b03ac: addi     r5, r5, 0x1f
//   0x800b03b0: addi     r0, r9, 0x1f
//   0x800b03b4: rlwinm   r5, r5, 0, 0, 0x1a
//   0x800b03b8: rlwinm   r0, r0, 0, 0, 0x1a
//   0x800b03bc: cmplw    r5, r0
//   0x800b03c0: ble      0x800b03d0
//   0x800b03c4: subf     r5, r8, r9
//   0x800b03c8: addi     r0, r5, 0x1f
//   0x800b03cc: rlwinm   r30, r0, 0, 0, 0x1a
//

// TODO: Full decompilation requires Ghidra
