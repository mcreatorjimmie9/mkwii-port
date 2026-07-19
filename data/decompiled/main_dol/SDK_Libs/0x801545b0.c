// Function at 0x801545b0
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801545b0: stwu     r1, -0x20(r1)
//   0x801545b4: mflr     r0
//   0x801545b8: stw      r0, 0x24(r1)
//   0x801545bc: stw      r31, 0x1c(r1)
//   0x801545c0: stw      r30, 0x18(r1)
//   0x801545c4: mr       r30, r5
//   0x801545c8: stw      r29, 0x14(r1)
//   0x801545cc: mr       r29, r4
//   0x801545d0: stw      r28, 0x10(r1)
//   0x801545d4: mr       r28, r3
//   0x801545d8: bl       0x8015178c
//   0x801545dc: lbz      r0, 2(r3)
//   0x801545e0: mr       r31, r3
//   0x801545e4: cmplwi   r0, 2
//   0x801545e8: bne      0x80154634
//   0x801545ec: lbz      r0, 0x68(r3)
//   0x801545f0: cmplwi   r0, 4
//   0x801545f4: beq      0x801545fc
//   0x801545f8: b        0x80154634
//   0x801545fc: cntlzw   r0, r30
//

// TODO: Full decompilation requires Ghidra
