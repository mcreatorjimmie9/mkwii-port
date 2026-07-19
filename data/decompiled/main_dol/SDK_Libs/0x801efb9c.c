// Function at 0x801efb9c
// Size: 384 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801efb9c: stwu     r1, -0x20(r1)
//   0x801efba0: mflr     r0
//   0x801efba4: stw      r0, 0x24(r1)
//   0x801efba8: stw      r31, 0x1c(r1)
//   0x801efbac: stw      r30, 0x18(r1)
//   0x801efbb0: mr       r30, r5
//   0x801efbb4: stw      r29, 0x14(r1)
//   0x801efbb8: mr       r29, r4
//   0x801efbbc: lwz      r0, 8(r3)
//   0x801efbc0: cmplwi   r0, 1
//   0x801efbc4: bne      0x801efc00
//   0x801efbc8: lwz      r31, 0(r3)
//   0x801efbcc: b        0x801efbe8
//   0x801efbd0: extsb    r3, r3
//   0x801efbd4: bl       0x801ef320
//   0x801efbd8: stb      r3, 0(r30)
//   0x801efbdc: addi     r30, r30, 1
//   0x801efbe0: addi     r31, r31, 1
//   0x801efbe4: addi     r29, r29, -1
//   0x801efbe8: clrlwi.  r0, r29, 0x10
//

// TODO: Full decompilation requires Ghidra
