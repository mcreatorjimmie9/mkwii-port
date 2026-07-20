// Function at 0x8014817c
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8014817c: stwu     r1, -0x10(r1)
//   0x80148180: mflr     r0
//   0x80148184: lis      r3, 0x4ec5
//   0x80148188: cmpwi    r5, 0
//   0x8014818c: stw      r0, 0x14(r1)
//   0x80148190: addi     r3, r3, -0x13b1
//   0x80148194: stw      r31, 0xc(r1)
//   0x80148198: lis      r31, -0x7fcd
//   0x8014819c: addi     r31, r31, 0x4bb8
//   0x801481a0: subf     r0, r31, r4
//   0x801481a4: stw      r30, 8(r1)
//   0x801481a8: mulhw    r0, r3, r0
//   0x801481ac: mr       r30, r4
//   0x801481b0: srawi    r0, r0, 4
//   0x801481b4: srwi     r3, r0, 0x1f
//   0x801481b8: add      r0, r0, r3
//   0x801481bc: clrlwi   r6, r0, 0x18
//   0x801481c0: bne      0x80148208
//   0x801481c4: lbz      r0, 0x10(r4)
//   0x801481c8: cmplwi   r0, 6
//

// TODO: Full decompilation requires Ghidra
