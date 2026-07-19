// Function at 0x80209e4c
// Size: 336 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80209e4c: stwu     r1, -0x10(r1)
//   0x80209e50: mflr     r0
//   0x80209e54: stw      r0, 0x14(r1)
//   0x80209e58: stw      r31, 0xc(r1)
//   0x80209e5c: stw      r30, 8(r1)
//   0x80209e60: mr       r30, r4
//   0x80209e64: lwz      r0, -0x5ea0(r13)
//   0x80209e68: cmplw    r3, r0
//   0x80209e6c: bge      0x80209e88
//   0x80209e70: lwz      r4, -0x5e90(r13)
//   0x80209e74: cmpwi    r4, 0
//   0x80209e78: beq      0x80209e88
//   0x80209e7c: mulli    r0, r3, 0x140
//   0x80209e80: add      r31, r4, r0
//   0x80209e84: b        0x80209e8c
//   0x80209e88: li       r31, 0
//   0x80209e8c: cmpwi    cr1, r31, 0
//   0x80209e90: beq      cr1, 0x80209ea0
//   0x80209e94: lwz      r0, 0(r31)
//   0x80209e98: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
