// Function at 0x800957b0
// Size: 336 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800957b0: stwu     r1, -0x20(r1)
//   0x800957b4: mflr     r0
//   0x800957b8: stw      r0, 0x24(r1)
//   0x800957bc: stw      r31, 0x1c(r1)
//   0x800957c0: mr       r31, r3
//   0x800957c4: stw      r30, 0x18(r1)
//   0x800957c8: mr       r30, r6
//   0x800957cc: stw      r29, 0x14(r1)
//   0x800957d0: mr       r29, r5
//   0x800957d4: stw      r28, 0x10(r1)
//   0x800957d8: mr       r28, r4
//   0x800957dc: bl       0x801a650c
//   0x800957e0: addi     r0, r28, 3
//   0x800957e4: addi     r4, r30, 3
//   0x800957e8: rlwinm   r6, r0, 0, 0, 0x1d
//   0x800957ec: li       r7, 0
//   0x800957f0: subf     r0, r28, r6
//   0x800957f4: rlwinm   r4, r4, 0, 0, 0x1d
//   0x800957f8: subf     r0, r0, r29
//   0x800957fc: divwu.   r30, r0, r4
//

// TODO: Full decompilation requires Ghidra
