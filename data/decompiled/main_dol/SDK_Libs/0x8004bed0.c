// Function at 0x8004bed0
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004bed0: stwu     r1, -0x10(r1)
//   0x8004bed4: mflr     r0
//   0x8004bed8: lwz      r6, 0(r3)
//   0x8004bedc: stw      r0, 0x14(r1)
//   0x8004bee0: addi     r7, r6, 8
//   0x8004bee4: stw      r31, 0xc(r1)
//   0x8004bee8: lhz      r0, 0xc(r6)
//   0x8004beec: slwi     r0, r0, 4
//   0x8004bef0: add      r3, r6, r0
//   0x8004bef4: addi     r31, r3, 8
//   0x8004bef8: b        0x8004bf4c
//   0x8004befc: nop      
//   0x8004bf00: rlwinm   r0, r3, 0x1d, 0x13, 0x1f
//   0x8004bf04: mr       r7, r31
//   0x8004bf08: cmplw    r0, r5
//   0x8004bf0c: clrlwi   r3, r3, 0x1d
//   0x8004bf10: bge      0x8004bf3c
//   0x8004bf14: lbzx     r0, r4, r0
//   0x8004bf18: extsb    r0, r0
//   0x8004bf1c: sraw     r0, r0, r3
//

// TODO: Full decompilation requires Ghidra
