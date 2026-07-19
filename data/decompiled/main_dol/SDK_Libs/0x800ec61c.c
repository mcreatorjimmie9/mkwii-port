// Function at 0x800ec61c
// Size: 168 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x80 bytes
//
// Disassembly (first 20 instructions):
//   0x800ec61c: stwu     r1, -0x80(r1)
//   0x800ec620: mflr     r0
//   0x800ec624: li       r4, 0
//   0x800ec628: stw      r0, 0x84(r1)
//   0x800ec62c: li       r0, 0
//   0x800ec630: stw      r31, 0x7c(r1)
//   0x800ec634: lwz      r31, 0x1c(r3)
//   0x800ec638: cmpwi    r31, 0
//   0x800ec63c: beq      0x800ec6ac
//   0x800ec640: lwz      r6, 0x24(r3)
//   0x800ec644: rlwinm   r5, r31, 0x18, 8, 0xf
//   0x800ec648: rlwinm   r4, r31, 8, 0, 7
//   0x800ec64c: rlwinm   r3, r6, 0x18, 8, 0xf
//   0x800ec650: rlwinm   r0, r6, 8, 0, 7
//   0x800ec654: rlwimi   r5, r31, 0x18, 0x18, 0x1f
//   0x800ec658: rlwimi   r4, r31, 8, 0x10, 0x17
//   0x800ec65c: rlwimi   r3, r6, 0x18, 0x18, 0x1f
//   0x800ec660: rlwimi   r0, r6, 8, 0x10, 0x17
//   0x800ec664: or       r0, r3, r0
//   0x800ec668: or       r4, r5, r4
//

// TODO: Full decompilation requires Ghidra
