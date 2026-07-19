// Function at 0x80027000
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80027000: stwu     r1, -0x20(r1)
//   0x80027004: mflr     r0
//   0x80027008: cmpwi    r3, 0
//   0x8002700c: stw      r0, 0x24(r1)
//   0x80027010: stw      r31, 0x1c(r1)
//   0x80027014: stw      r30, 0x18(r1)
//   0x80027018: stw      r29, 0x14(r1)
//   0x8002701c: mr       r29, r4
//   0x80027020: stw      r28, 0x10(r1)
//   0x80027024: mr       r28, r3
//   0x80027028: beq      0x80027064
//   0x8002702c: addis    r31, r3, 1
//   0x80027030: li       r30, 0
//   0x80027034: b        0x80027048
//   0x80027038: mr       r3, r28
//   0x8002703c: mr       r4, r30
//   0x80027040: bl       0x80027410
//   0x80027044: addi     r30, r30, 1
//   0x80027048: lwz      r0, -0x3fec(r31)
//   0x8002704c: cmplw    r30, r0
//

// TODO: Full decompilation requires Ghidra
