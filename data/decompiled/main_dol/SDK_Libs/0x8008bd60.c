// Function at 0x8008bd60
// Size: 480 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008bd60: stwu     r1, -0x10(r1)
//   0x8008bd64: mflr     r0
//   0x8008bd68: stw      r0, 0x14(r1)
//   0x8008bd6c: stw      r31, 0xc(r1)
//   0x8008bd70: mr       r31, r3
//   0x8008bd74: bl       0x801a650c
//   0x8008bd78: lwz      r5, 0(r31)
//   0x8008bd7c: cmpwi    r5, 0
//   0x8008bd80: bne      0x8008bd8c
//   0x8008bd84: bl       0x801a6534
//   0x8008bd88: b        0x8008bef0
//   0x8008bd8c: lhz      r0, 8(r31)
//   0x8008bd90: lis      r4, 0x2aab
//   0x8008bd94: sth      r0, 0x92(r5)
//   0x8008bd98: addi     r4, r4, -0x5555
//   0x8008bd9c: li       r6, -1
//   0x8008bda0: lhz      r7, 0xe(r31)
//   0x8008bda4: lhz      r0, 8(r31)
//   0x8008bda8: subf     r0, r0, r7
//   0x8008bdac: mulhw    r0, r4, r0
//

// TODO: Full decompilation requires Ghidra
