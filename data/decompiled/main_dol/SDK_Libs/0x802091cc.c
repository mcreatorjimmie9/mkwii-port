// Function at 0x802091cc
// Size: 396 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x802091cc: stwu     r1, -0x20(r1)
//   0x802091d0: mflr     r0
//   0x802091d4: stw      r0, 0x24(r1)
//   0x802091d8: addi     r11, r1, 0x20
//   0x802091dc: bl       0x80020a40
//   0x802091e0: lwz      r27, -0x5e90(r13)
//   0x802091e4: cmpwi    cr1, r27, 0
//   0x802091e8: beq      cr1, 0x802092c4
//   0x802091ec: lwz      r0, -0x5ea0(r13)
//   0x802091f0: cmpwi    r0, 0
//   0x802091f4: beq      0x80209200
//   0x802091f8: beq      cr1, 0x80209200
//   0x802091fc: b        0x80209204
//   0x80209200: li       r27, 0
//   0x80209204: cmpwi    r27, 0
//   0x80209208: beq      0x802092a8
//   0x8020920c: mulli    r0, r0, 0x140
//   0x80209210: li       r31, 0
//   0x80209214: add      r30, r27, r0
//   0x80209218: b        0x802092a0
//

// TODO: Full decompilation requires Ghidra
