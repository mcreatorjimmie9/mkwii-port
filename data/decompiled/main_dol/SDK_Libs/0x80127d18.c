// Function at 0x80127d18
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80127d18: stwu     r1, -0x10(r1)
//   0x80127d1c: mflr     r0
//   0x80127d20: stw      r0, 0x14(r1)
//   0x80127d24: stw      r31, 0xc(r1)
//   0x80127d28: mr       r31, r4
//   0x80127d2c: stw      r30, 8(r1)
//   0x80127d30: mr       r30, r3
//   0x80127d34: bl       0x801a650c
//   0x80127d38: lhz      r0, 0x38(r30)
//   0x80127d3c: cmplw    r0, r31
//   0x80127d40: bne      0x80127d4c
//   0x80127d44: bl       0x801a6534
//   0x80127d48: b        0x80127d70
//   0x80127d4c: lwz      r0, 0x1c(r30)
//   0x80127d50: cmpwi    r31, 0
//   0x80127d54: sth      r31, 0x38(r30)
//   0x80127d58: ori      r0, r0, 4
//   0x80127d5c: stw      r0, 0x1c(r30)
//   0x80127d60: bne      0x80127d6c
//   0x80127d64: li       r0, 1
//

// TODO: Full decompilation requires Ghidra
