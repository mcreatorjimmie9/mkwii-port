// Function at 0x80199564
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80199564: stwu     r1, -0x10(r1)
//   0x80199568: mflr     r0
//   0x8019956c: stw      r0, 0x14(r1)
//   0x80199570: stw      r31, 0xc(r1)
//   0x80199574: mr       r31, r4
//   0x80199578: stw      r30, 8(r1)
//   0x8019957c: mr       r30, r3
//   0x80199580: lwz      r0, 0x38(r3)
//   0x80199584: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80199588: beq      0x80199594
//   0x8019958c: addi     r3, r3, 0x20
//   0x80199590: bl       0x801a7e44
//   0x80199594: clrlwi.  r0, r31, 0x1f
//   0x80199598: beq      0x801995ac
//   0x8019959c: lwz      r3, 0x18(r30)
//   0x801995a0: li       r0, 0
//   0x801995a4: stw      r0, 0x44(r30)
//   0x801995a8: stw      r3, 0x3c(r30)
//   0x801995ac: rlwinm.  r0, r31, 0, 0x1e, 0x1e
//   0x801995b0: beq      0x801995d8
//

// TODO: Full decompilation requires Ghidra
