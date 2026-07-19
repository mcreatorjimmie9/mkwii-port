// Function at 0x801480d8
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801480d8: stwu     r1, -0x10(r1)
//   0x801480dc: mflr     r0
//   0x801480e0: lis      r4, -0x7fcd
//   0x801480e4: stw      r0, 0x14(r1)
//   0x801480e8: addi     r4, r4, 0x4bb8
//   0x801480ec: mulli    r3, r3, 0x34
//   0x801480f0: stw      r31, 0xc(r1)
//   0x801480f4: lbz      r0, 0x401(r4)
//   0x801480f8: add      r31, r4, r3
//   0x801480fc: cmplwi   r0, 4
//   0x80148100: blt      0x80148118
//   0x80148104: lis      r3, 0x1e
//   0x80148108: lis      r4, -0x7fd8
//   0x8014810c: addi     r3, r3, 3
//   0x80148110: addi     r4, r4, 0xdbc
//   0x80148114: bl       0x801316a0
//   0x80148118: lhz      r0, 0x14(r31)
//   0x8014811c: cmpwi    r0, 0
//   0x80148120: bne      0x80148130
//   0x80148124: lhz      r0, 0x16(r31)
//

// TODO: Full decompilation requires Ghidra
