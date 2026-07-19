// Function at 0x800ca820
// Size: 1136 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800ca820: stwu     r1, -0x10(r1)
//   0x800ca824: mflr     r0
//   0x800ca828: lhz      r4, 0(r3)
//   0x800ca82c: stw      r0, 0x14(r1)
//   0x800ca830: rlwinm   r0, r4, 0x13, 0x1d, 0x1f
//   0x800ca834: stw      r31, 0xc(r1)
//   0x800ca838: cmplwi   r0, 7
//   0x800ca83c: mr       r31, r3
//   0x800ca840: ble      0x800ca84c
//   0x800ca844: li       r3, 0
//   0x800ca848: b        0x800cac70
//   0x800ca84c: rlwinm   r0, r4, 0x16, 0x1d, 0x1f
//   0x800ca850: cmplwi   r0, 5
//   0x800ca854: ble      0x800ca860
//   0x800ca858: li       r3, 0
//   0x800ca85c: b        0x800cac70
//   0x800ca860: rlwinm   r0, r4, 0x1a, 0x1c, 0x1f
//   0x800ca864: cmplwi   r0, 0xb
//   0x800ca868: ble      0x800ca874
//   0x800ca86c: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
