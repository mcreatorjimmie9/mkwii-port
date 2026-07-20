// Function at 0x800062a0
// Size: 4128 bytes
// Category: Boot
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800062a0: stwu     r1, -0x20(r1)
//   0x800062a4: mflr     r0
//   0x800062a8: stw      r0, 0x24(r1)
//   0x800062ac: stw      r31, 0x1c(r1)
//   0x800062b0: stw      r30, 0x18(r1)
//   0x800062b4: stw      r29, 0x14(r1)
//   0x800062b8: lis      r29, -0x8000
//   0x800062bc: addi     r29, r29, 0x63a0
//   0x800062c0: lwz      r30, 8(r29)
//   0x800062c4: cmpwi    r30, 0
//   0x800062c8: beq      0x80006300
//   0x800062cc: lwz      r4, 0(r29)
//   0x800062d0: lwz      r31, 4(r29)
//   0x800062d4: beq      0x800062f8
//   0x800062d8: cmplw    r31, r4
//   0x800062dc: beq      0x800062f8
//   0x800062e0: mr       r3, r31
//   0x800062e4: mr       r5, r30
//   0x800062e8: bl       0x80005f34
//   0x800062ec: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
