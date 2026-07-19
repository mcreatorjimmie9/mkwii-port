// Function at 0x8006d640
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006d640: stwu     r1, -0x10(r1)
//   0x8006d644: mflr     r0
//   0x8006d648: cmpwi    r5, 0
//   0x8006d64c: stw      r0, 0x14(r1)
//   0x8006d650: stw      r31, 0xc(r1)
//   0x8006d654: mr       r31, r3
//   0x8006d658: beq      0x8006d674
//   0x8006d65c: lwz      r6, 0(r5)
//   0x8006d660: clrlwi.  r0, r6, 0x1f
//   0x8006d664: beq      0x8006d674
//   0x8006d668: rlwinm   r0, r6, 0, 0, 0x1e
//   0x8006d66c: stw      r0, 0(r5)
//   0x8006d670: b        0x8006d6d4
//   0x8006d674: cmpwi    r4, 0
//   0x8006d678: beq      0x8006d6ac
//   0x8006d67c: lwz      r0, 0xcc(r3)
//   0x8006d680: rlwinm.  r0, r0, 0, 0, 0
//   0x8006d684: beq      0x8006d698
//   0x8006d688: mr       r3, r4
//   0x8006d68c: addi     r4, r31, 0x3c
//

// TODO: Full decompilation requires Ghidra
