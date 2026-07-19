// Function at 0x801e7468
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801e7468: stwu     r1, -0x10(r1)
//   0x801e746c: mflr     r0
//   0x801e7470: stw      r0, 0x14(r1)
//   0x801e7474: stw      r31, 0xc(r1)
//   0x801e7478: mr       r31, r3
//   0x801e747c: lwz      r3, 0(r3)
//   0x801e7480: lwz      r4, 4(r31)
//   0x801e7484: bl       0x801e81f0
//   0x801e7488: cmpwi    r3, 0
//   0x801e748c: beq      0x801e749c
//   0x801e7490: cmpwi    r3, -0x23
//   0x801e7494: beq      0x801e749c
//   0x801e7498: b        0x801e74d4
//   0x801e749c: lwz      r0, 0xc(r31)
//   0x801e74a0: cmpwi    r0, 0
//   0x801e74a4: beq      0x801e74c8
//   0x801e74a8: bl       0x801dc71c
//   0x801e74ac: lwz      r0, 0xc(r31)
//   0x801e74b0: rlwinm   r3, r3, 0, 0, 0x17
//   0x801e74b4: rlwinm   r0, r0, 0, 0, 0x17
//

// TODO: Full decompilation requires Ghidra
