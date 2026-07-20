// Function at 0x801db0b4
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801db0b4: stwu     r1, -0x30(r1)
//   0x801db0b8: mflr     r0
//   0x801db0bc: stw      r0, 0x34(r1)
//   0x801db0c0: addi     r11, r1, 0x30
//   0x801db0c4: bl       0x80020a30
//   0x801db0c8: lwz      r0, 4(r3)
//   0x801db0cc: mr       r29, r3
//   0x801db0d0: mr       r30, r4
//   0x801db0d4: mr       r31, r5
//   0x801db0d8: cmplwi   r0, 0xa
//   0x801db0dc: beq      0x801db0e8
//   0x801db0e0: cmplwi   r0, 0x10a
//   0x801db0e4: bne      0x801db1a0
//   0x801db0e8: lwz      r0, 4(r3)
//   0x801db0ec: slwi     r5, r4, 0x1b
//   0x801db0f0: srwi     r6, r4, 0x1f
//   0x801db0f4: rlwinm.  r0, r0, 0, 0x17, 0x17
//   0x801db0f8: subf     r5, r6, r5
//   0x801db0fc: rotlwi   r0, r5, 5
//   0x801db100: add      r0, r0, r6
//

// TODO: Full decompilation requires Ghidra
