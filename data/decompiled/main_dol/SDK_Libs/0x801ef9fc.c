// Function at 0x801ef9fc
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801ef9fc: stwu     r1, -0x20(r1)
//   0x801efa00: mflr     r0
//   0x801efa04: stw      r0, 0x24(r1)
//   0x801efa08: lwz      r0, 8(r3)
//   0x801efa0c: stw      r31, 0x1c(r1)
//   0x801efa10: cmplwi   r0, 1
//   0x801efa14: stw      r30, 0x18(r1)
//   0x801efa18: stw      r29, 0x14(r1)
//   0x801efa1c: mr       r29, r4
//   0x801efa20: bne      0x801efa30
//   0x801efa24: lwz      r3, 0(r3)
//   0x801efa28: bl       0x801ef59c
//   0x801efa2c: b        0x801efa84
//   0x801efa30: lis      r31, -0x7fcb
//   0x801efa34: lwz      r30, 0(r3)
//   0x801efa38: addi     r31, r31, 0x6ad0
//   0x801efa3c: lwz      r12, 0x24(r31)
//   0x801efa40: mr       r3, r29
//   0x801efa44: addi     r4, r1, 8
//   0x801efa48: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
