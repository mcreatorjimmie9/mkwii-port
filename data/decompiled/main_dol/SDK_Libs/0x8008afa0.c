// Function at 0x8008afa0
// Size: 1568 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x80 bytes
//
// Disassembly (first 20 instructions):
//   0x8008afa0: stwu     r1, -0x80(r1)
//   0x8008afa4: mflr     r0
//   0x8008afa8: stw      r0, 0x84(r1)
//   0x8008afac: addi     r11, r1, 0x80
//   0x8008afb0: bl       0x80020a14
//   0x8008afb4: mr       r17, r3
//   0x8008afb8: mr       r18, r4
//   0x8008afbc: bl       0x801a650c
//   0x8008afc0: lwz      r4, 0(r17)
//   0x8008afc4: mr       r16, r3
//   0x8008afc8: cmpwi    cr1, r4, 0
//   0x8008afcc: bne      cr1, 0x8008afdc
//   0x8008afd0: bl       0x801a6534
//   0x8008afd4: li       r3, 0
//   0x8008afd8: b        0x8008b5a8
//   0x8008afdc: lbz      r0, 0x1c(r17)
//   0x8008afe0: cmpwi    r0, 0
//   0x8008afe4: bne      0x8008b008
//   0x8008afe8: li       r3, 0
//   0x8008afec: beq      cr1, 0x8008b000
//

// TODO: Full decompilation requires Ghidra
