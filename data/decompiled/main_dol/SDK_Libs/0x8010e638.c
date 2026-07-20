// Function at 0x8010e638
// Size: 284 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010e638: stwu     r1, -0x20(r1)
//   0x8010e63c: mflr     r0
//   0x8010e640: stw      r0, 0x24(r1)
//   0x8010e644: stw      r31, 0x1c(r1)
//   0x8010e648: stw      r30, 0x18(r1)
//   0x8010e64c: stw      r29, 0x14(r1)
//   0x8010e650: lwz      r29, 0(r3)
//   0x8010e654: lwz      r4, 0(r4)
//   0x8010e658: lwz      r0, 0xc(r29)
//   0x8010e65c: cmpwi    r0, 7
//   0x8010e660: beq      0x8010e67c
//   0x8010e664: mr       r3, r29
//   0x8010e668: bl       0x8010a584
//   0x8010e66c: cmpwi    r3, 0
//   0x8010e670: bne      0x8010e67c
//   0x8010e674: li       r3, 0
//   0x8010e678: b        0x8010e738
//   0x8010e67c: lwz      r0, 0xc(r29)
//   0x8010e680: cmpwi    r0, 7
//   0x8010e684: bne      0x8010e734
//

// TODO: Full decompilation requires Ghidra
