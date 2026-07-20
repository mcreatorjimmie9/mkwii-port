// Function at 0x801561a0
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801561a0: stwu     r1, -0x10(r1)
//   0x801561a4: mflr     r0
//   0x801561a8: li       r5, 0
//   0x801561ac: stw      r0, 0x14(r1)
//   0x801561b0: li       r0, 0x3d
//   0x801561b4: stw      r31, 0xc(r1)
//   0x801561b8: mr       r31, r3
//   0x801561bc: mtctr    r0
//   0x801561c0: clrlwi   r0, r5, 0x10
//   0x801561c4: add      r4, r3, r0
//   0x801561c8: lbz      r0, 0x24(r4)
//   0x801561cc: cmpwi    r0, 0
//   0x801561d0: beq      0x801561e0
//   0x801561d4: li       r0, 0
//   0x801561d8: stb      r0, 0x74(r3)
//   0x801561dc: b        0x80156250
//   0x801561e0: addi     r5, r5, 1
//   0x801561e4: bdnz     0x801561c0
//   0x801561e8: lbz      r0, 0x74(r3)
//   0x801561ec: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
