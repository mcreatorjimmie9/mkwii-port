// Function at 0x801fd1b8
// Size: 232 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801fd1b8: stwu     r1, -0x10(r1)
//   0x801fd1bc: mflr     r0
//   0x801fd1c0: lis      r5, -0x7fdb
//   0x801fd1c4: stw      r0, 0x14(r1)
//   0x801fd1c8: addi     r5, r5, 0x2e48
//   0x801fd1cc: stw      r31, 0xc(r1)
//   0x801fd1d0: mr       r31, r3
//   0x801fd1d4: lwz      r6, 0x1c(r3)
//   0x801fd1d8: lwz      r4, 0x10(r3)
//   0x801fd1dc: mulli    r0, r6, 0x14
//   0x801fd1e0: cmpwi    r6, 1
//   0x801fd1e4: add      r5, r5, r0
//   0x801fd1e8: lwz      r5, 8(r5)
//   0x801fd1ec: beq      0x801fd22c
//   0x801fd1f0: bge      0x801fd200
//   0x801fd1f4: cmpwi    r6, 0
//   0x801fd1f8: bge      0x801fd20c
//   0x801fd1fc: b        0x801fd264
//   0x801fd200: cmpwi    r6, 3
//   0x801fd204: bge      0x801fd264
//

// TODO: Full decompilation requires Ghidra
