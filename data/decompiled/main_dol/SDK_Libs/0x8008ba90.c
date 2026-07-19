// Function at 0x8008ba90
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8008ba90: stwu     r1, -0x50(r1)
//   0x8008ba94: mflr     r0
//   0x8008ba98: stw      r0, 0x54(r1)
//   0x8008ba9c: stw      r31, 0x4c(r1)
//   0x8008baa0: stw      r30, 0x48(r1)
//   0x8008baa4: mr       r30, r4
//   0x8008baa8: stw      r29, 0x44(r1)
//   0x8008baac: mr       r29, r3
//   0x8008bab0: bl       0x801a650c
//   0x8008bab4: lwz      r4, 0(r29)
//   0x8008bab8: mr       r31, r3
//   0x8008babc: cmpwi    cr1, r4, 0
//   0x8008bac0: bne      cr1, 0x8008bacc
//   0x8008bac4: bl       0x801a6534
//   0x8008bac8: b        0x8008bc04
//   0x8008bacc: cmpwi    r30, 0
//   0x8008bad0: bne      0x8008bb20
//   0x8008bad4: li       r0, 0
//   0x8008bad8: sth      r0, 0x28(r1)
//   0x8008badc: bl       0x801a650c
//

// TODO: Full decompilation requires Ghidra
