// Function at 0x801f9dbc
// Size: 248 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801f9dbc: stwu     r1, -0x20(r1)
//   0x801f9dc0: mflr     r0
//   0x801f9dc4: stw      r0, 0x24(r1)
//   0x801f9dc8: stw      r31, 0x1c(r1)
//   0x801f9dcc: stw      r30, 0x18(r1)
//   0x801f9dd0: stw      r29, 0x14(r1)
//   0x801f9dd4: mr       r29, r3
//   0x801f9dd8: lwz      r30, 0(r3)
//   0x801f9ddc: addi     r6, r30, 1
//   0x801f9de0: cmplw    r30, r6
//   0x801f9de4: bne      0x801f9e00
//   0x801f9de8: lwz      r5, 0x40(r3)
//   0x801f9dec: addis    r0, r5, 1
//   0x801f9df0: cmplwi   r0, 0xffff
//   0x801f9df4: bne      0x801f9e00
//   0x801f9df8: cmpwi    r4, 0
//   0x801f9dfc: bne      0x801f9e90
//   0x801f9e00: stw      r6, 0(r3)
//   0x801f9e04: mr       r3, r29
//   0x801f9e08: bl       0x801f87e0
//

// TODO: Full decompilation requires Ghidra
