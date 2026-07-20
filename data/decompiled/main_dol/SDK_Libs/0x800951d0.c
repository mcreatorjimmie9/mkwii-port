// Function at 0x800951d0
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800951d0: stwu     r1, -0x20(r1)
//   0x800951d4: mflr     r0
//   0x800951d8: stw      r0, 0x24(r1)
//   0x800951dc: stw      r31, 0x1c(r1)
//   0x800951e0: stw      r30, 0x18(r1)
//   0x800951e4: mr       r30, r3
//   0x800951e8: addi     r3, r3, 0x44
//   0x800951ec: bl       0x8012b3dc
//   0x800951f0: addi     r0, r3, 0x87
//   0x800951f4: addi     r3, r30, 0x12c
//   0x800951f8: rlwinm   r31, r0, 0, 0, 0x1a
//   0x800951fc: bl       0x8012c0dc
//   0x80095200: addi     r0, r3, 0x87
//   0x80095204: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80095208: cmplw    r3, r31
//   0x8009520c: bge      0x80095214
//   0x80095210: mr       r3, r31
//   0x80095214: lwz      r4, 0x14(r30)
//   0x80095218: cmpwi    r4, 0
//   0x8009521c: bne      0x80095228
//

// TODO: Full decompilation requires Ghidra
