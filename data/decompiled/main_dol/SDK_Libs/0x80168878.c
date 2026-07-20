// Function at 0x80168878
// Size: 184 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80168878: stwu     r1, -0x20(r1)
//   0x8016887c: mflr     r0
//   0x80168880: stw      r0, 0x24(r1)
//   0x80168884: stw      r31, 0x1c(r1)
//   0x80168888: stw      r30, 0x18(r1)
//   0x8016888c: stw      r29, 0x14(r1)
//   0x80168890: mr       r29, r3
//   0x80168894: slwi     r0, r3, 6
//   0x80168898: lis      r3, -0x7fcc
//   0x8016889c: addi     r3, r3, -0xd00
//   0x801688a0: add      r31, r3, r0
//   0x801688a4: bl       0x801a650c
//   0x801688a8: mr       r30, r3
//   0x801688ac: lwz      r0, 0xc(r31)
//   0x801688b0: rlwinm.  r0, r0, 0, 0x1c, 0x1c
//   0x801688b4: bne      0x801688c4
//   0x801688b8: bl       0x801a6534
//   0x801688bc: li       r3, 1
//   0x801688c0: b        0x80168914
//   0x801688c4: lwz      r0, 0xc(r31)
//

// TODO: Full decompilation requires Ghidra
