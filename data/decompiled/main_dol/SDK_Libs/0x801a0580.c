// Function at 0x801a0580
// Size: 592 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801a0580: stwu     r1, -0x30(r1)
//   0x801a0584: mflr     r0
//   0x801a0588: stw      r0, 0x34(r1)
//   0x801a058c: addi     r11, r1, 0x30
//   0x801a0590: bl       0x80020a38
//   0x801a0594: lwz      r4, 0x18(r3)
//   0x801a0598: li       r29, 0
//   0x801a059c: lwz      r8, 0x1c(r3)
//   0x801a05a0: mr       r30, r3
//   0x801a05a4: xoris    r0, r29, 0x8000
//   0x801a05a8: xoris    r4, r4, 0x8000
//   0x801a05ac: subfc    r3, r8, r29
//   0x801a05b0: mr       r31, r7
//   0x801a05b4: subfe    r4, r4, r0
//   0x801a05b8: subfe    r4, r0, r0
//   0x801a05bc: neg.     r4, r4
//   0x801a05c0: beq      0x801a063c
//   0x801a05c4: bl       0x801aacdc
//   0x801a05c8: lwz      r28, 0x20(r30)
//   0x801a05cc: xoris    r7, r3, 0x8000
//

// TODO: Full decompilation requires Ghidra
