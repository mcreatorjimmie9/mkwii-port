// Function at 0x80209544
// Size: 708 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80209544: stwu     r1, -0x20(r1)
//   0x80209548: mflr     r0
//   0x8020954c: stw      r0, 0x24(r1)
//   0x80209550: stw      r31, 0x1c(r1)
//   0x80209554: stw      r30, 0x18(r1)
//   0x80209558: stw      r29, 0x14(r1)
//   0x8020955c: lwz      r0, -0x5ea0(r13)
//   0x80209560: cmplw    r3, r0
//   0x80209564: bge      0x80209580
//   0x80209568: lwz      r4, -0x5e90(r13)
//   0x8020956c: cmpwi    r4, 0
//   0x80209570: beq      0x80209580
//   0x80209574: mulli    r0, r3, 0x140
//   0x80209578: add      r31, r4, r0
//   0x8020957c: b        0x80209584
//   0x80209580: li       r31, 0
//   0x80209584: cmpwi    cr1, r31, 0
//   0x80209588: beq      cr1, 0x80209598
//   0x8020958c: lwz      r3, 8(r31)
//   0x80209590: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
