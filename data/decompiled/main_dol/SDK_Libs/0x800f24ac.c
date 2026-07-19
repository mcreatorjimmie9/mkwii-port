// Function at 0x800f24ac
// Size: 616 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800f24ac: stwu     r1, -0x20(r1)
//   0x800f24b0: mflr     r0
//   0x800f24b4: stw      r0, 0x24(r1)
//   0x800f24b8: addi     r11, r1, 0x20
//   0x800f24bc: bl       0x80020a3c
//   0x800f24c0: lwz      r31, 0(r3)
//   0x800f24c4: li       r29, 0
//   0x800f24c8: lwz      r30, 4(r3)
//   0x800f24cc: lis      r28, -0x7fd1
//   0x800f24d0: xoris    r0, r31, 0x8000
//   0x800f24d4: xoris    r5, r29, 0x8000
//   0x800f24d8: subfc    r4, r29, r30
//   0x800f24dc: mr       r27, r3
//   0x800f24e0: subfe    r5, r5, r0
//   0x800f24e4: addi     r28, r28, -0x2088
//   0x800f24e8: subfe    r5, r0, r0
//   0x800f24ec: neg.     r5, r5
//   0x800f24f0: beq      0x800f24fc
//   0x800f24f4: li       r3, 0
//   0x800f24f8: b        0x800f26fc
//

// TODO: Full decompilation requires Ghidra
