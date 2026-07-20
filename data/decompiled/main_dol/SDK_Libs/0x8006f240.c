// Function at 0x8006f240
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006f240: stwu     r1, -0x10(r1)
//   0x8006f244: mflr     r0
//   0x8006f248: cmplwi   r4, 9
//   0x8006f24c: stw      r0, 0x14(r1)
//   0x8006f250: stw      r31, 0xc(r1)
//   0x8006f254: mr       r31, r3
//   0x8006f258: bge      0x8006f27c
//   0x8006f25c: addi     r7, r4, -1
//   0x8006f260: li       r8, 1
//   0x8006f264: lwz      r0, 0xcc(r3)
//   0x8006f268: slw      r7, r8, r7
//   0x8006f26c: and.     r0, r7, r0
//   0x8006f270: beq      0x8006f27c
//   0x8006f274: li       r0, 1
//   0x8006f278: b        0x8006f280
//   0x8006f27c: li       r0, 0
//   0x8006f280: cmpwi    r0, 0
//   0x8006f284: bne      0x8006f2d4
//   0x8006f288: addis    r0, r4, -1
//   0x8006f28c: cmplwi   r0, 1
//

// TODO: Full decompilation requires Ghidra
