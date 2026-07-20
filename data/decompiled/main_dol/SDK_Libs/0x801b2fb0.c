// Function at 0x801b2fb0
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b2fb0: stwu     r1, -0x10(r1)
//   0x801b2fb4: mflr     r0
//   0x801b2fb8: stw      r0, 0x14(r1)
//   0x801b2fbc: stw      r31, 0xc(r1)
//   0x801b2fc0: stw      r30, 8(r1)
//   0x801b2fc4: mr       r30, r3
//   0x801b2fc8: bl       0x801a650c
//   0x801b2fcc: lis      r4, -0x3300
//   0x801b2fd0: subfic   r0, r30, 3
//   0x801b2fd4: lwz      r31, 0x6438(r4)
//   0x801b2fd8: slwi     r0, r0, 3
//   0x801b2fdc: srw      r31, r31, r0
//   0x801b2fe0: rlwinm.  r0, r31, 0, 0x1c, 0x1c
//   0x801b2fe4: beq      0x801b3008
//   0x801b2fe8: lis      r4, -0x7fd6
//   0x801b2fec: slwi     r5, r30, 2
//   0x801b2ff0: addi     r4, r4, -0x73d8
//   0x801b2ff4: lwzx     r0, r4, r5
//   0x801b2ff8: rlwinm.  r0, r0, 0, 0x18, 0x18
//   0x801b2ffc: bne      0x801b3008
//

// TODO: Full decompilation requires Ghidra
