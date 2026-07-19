// Function at 0x801af250
// Size: 348 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801af250: stwu     r1, -0x10(r1)
//   0x801af254: mflr     r0
//   0x801af258: stw      r0, 0x14(r1)
//   0x801af25c: lwz      r0, -0x6240(r13)
//   0x801af260: cmpwi    r0, 0
//   0x801af264: beq      0x801af270
//   0x801af268: li       r3, 1
//   0x801af26c: b        0x801af39c
//   0x801af270: lwz      r3, -0x70f8(r13)
//   0x801af274: bl       0x801a0464
//   0x801af278: lwz      r4, -0x6260(r13)
//   0x801af27c: cmpwi    cr1, r4, 0
//   0x801af280: beq      cr1, 0x801af2dc
//   0x801af284: li       r0, 0
//   0x801af288: cmpwi    r4, 1
//   0x801af28c: stw      r0, -0x6260(r13)
//   0x801af290: beq      0x801af2bc
//   0x801af294: bge      0x801af2a0
//   0x801af298: bge      cr1, 0x801af2ac
//   0x801af29c: b        0x801af2d8
//

// TODO: Full decompilation requires Ghidra
