// Function at 0x800ad650
// Size: 368 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800ad650: stwu     r1, -0x20(r1)
//   0x800ad654: mflr     r0
//   0x800ad658: stw      r0, 0x24(r1)
//   0x800ad65c: stw      r31, 0x1c(r1)
//   0x800ad660: stw      r30, 0x18(r1)
//   0x800ad664: stw      r29, 0x14(r1)
//   0x800ad668: stw      r28, 0x10(r1)
//   0x800ad66c: mr       r28, r3
//   0x800ad670: lbz      r4, 0x8c(r3)
//   0x800ad674: lwz      r0, 0x48(r3)
//   0x800ad678: add      r4, r4, r0
//   0x800ad67c: cmpwi    r4, 0x7f
//   0x800ad680: ble      0x800ad68c
//   0x800ad684: li       r29, 0x7f
//   0x800ad688: b        0x800ad694
//   0x800ad68c: srawi    r0, r4, 0x1f
//   0x800ad690: andc     r29, r4, r0
//   0x800ad694: lwz      r30, 0x238(r3)
//   0x800ad698: addi     r31, r30, 0x10
//   0x800ad69c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
