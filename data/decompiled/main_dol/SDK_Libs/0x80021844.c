// Function at 0x80021844
// Size: 260 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80021844: stwu     r1, -0x20(r1)
//   0x80021848: mflr     r0
//   0x8002184c: cmpwi    r5, 2
//   0x80021850: stw      r0, 0x24(r1)
//   0x80021854: stw      r31, 0x1c(r1)
//   0x80021858: stw      r30, 0x18(r1)
//   0x8002185c: stw      r3, 8(r1)
//   0x80021860: beq      0x80021884
//   0x80021864: bge      0x80021898
//   0x80021868: cmpwi    r5, 1
//   0x8002186c: bge      0x80021874
//   0x80021870: b        0x80021898
//   0x80021874: lbz      r0, 0(r4)
//   0x80021878: slwi     r0, r0, 0x18
//   0x8002187c: stw      r0, 0xc(r1)
//   0x80021880: b        0x800218b4
//   0x80021884: lhz      r3, 0(r4)
//   0x80021888: rlwinm   r0, r3, 8, 8, 0xf
//   0x8002188c: rlwimi   r0, r3, 0x18, 0, 7
//   0x80021890: stw      r0, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
