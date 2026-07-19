// Function at 0x80208fdc
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80208fdc: stwu     r1, -0x10(r1)
//   0x80208fe0: mflr     r0
//   0x80208fe4: cmpwi    r3, 0
//   0x80208fe8: stw      r0, 0x14(r1)
//   0x80208fec: beq      0x80209034
//   0x80208ff0: bl       0x8020c360
//   0x80208ff4: lwz      r0, -0x5ea0(r13)
//   0x80208ff8: cmplw    r3, r0
//   0x80208ffc: bge      0x80209018
//   0x80209000: lwz      r4, -0x5e90(r13)
//   0x80209004: cmpwi    r4, 0
//   0x80209008: beq      0x80209018
//   0x8020900c: mulli    r0, r3, 0x140
//   0x80209010: add      r3, r4, r0
//   0x80209014: b        0x8020901c
//   0x80209018: li       r3, 0
//   0x8020901c: cmpwi    r3, 0
//   0x80209020: beq      0x8020902c
//   0x80209024: addi     r3, r3, 4
//   0x80209028: b        0x80209038
//

// TODO: Full decompilation requires Ghidra
