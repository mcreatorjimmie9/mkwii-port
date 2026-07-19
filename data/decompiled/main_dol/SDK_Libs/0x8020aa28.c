// Function at 0x8020aa28
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020aa28: stwu     r1, -0x10(r1)
//   0x8020aa2c: mflr     r0
//   0x8020aa30: stw      r0, 0x14(r1)
//   0x8020aa34: stw      r31, 0xc(r1)
//   0x8020aa38: mr       r31, r3
//   0x8020aa3c: bl       0x802062f0
//   0x8020aa40: cmpwi    r3, 0
//   0x8020aa44: beq      0x8020aaa8
//   0x8020aa48: lwz      r0, -0x5ea0(r13)
//   0x8020aa4c: cmpwi    r0, 0
//   0x8020aa50: beq      0x8020aa64
//   0x8020aa54: lwz      r6, -0x5e90(r13)
//   0x8020aa58: cmpwi    r6, 0
//   0x8020aa5c: beq      0x8020aa64
//   0x8020aa60: b        0x8020aa68
//   0x8020aa64: li       r6, 0
//   0x8020aa68: mulli    r0, r0, 0x140
//   0x8020aa6c: add      r5, r6, r0
//   0x8020aa70: b        0x8020aaa0
//   0x8020aa74: lwz      r0, 0(r6)
//

// TODO: Full decompilation requires Ghidra
