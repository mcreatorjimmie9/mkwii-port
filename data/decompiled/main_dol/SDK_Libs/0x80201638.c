// Function at 0x80201638
// Size: 916 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80201638: stwu     r1, -0x20(r1)
//   0x8020163c: mflr     r0
//   0x80201640: lis      r4, -0x7fcb
//   0x80201644: li       r5, 1
//   0x80201648: stw      r0, 0x24(r1)
//   0x8020164c: addi     r4, r4, 0x6ad0
//   0x80201650: cmplw    r4, r3
//   0x80201654: stw      r31, 0x1c(r1)
//   0x80201658: stw      r30, 0x18(r1)
//   0x8020165c: stw      r29, 0x14(r1)
//   0x80201660: mr       r29, r3
//   0x80201664: bgt      0x8020168c
//   0x80201668: addis    r4, r4, 2
//   0x8020166c: addi     r0, r4, 0x7d48
//   0x80201670: cmplw    r0, r3
//   0x80201674: blt      0x8020168c
//   0x80201678: lwz      r0, 0(r3)
//   0x8020167c: rlwinm   r4, r0, 0, 2, 2
//   0x80201680: addis    r0, r4, -0x2000
//   0x80201684: cmplwi   r0, 0
//

// TODO: Full decompilation requires Ghidra
