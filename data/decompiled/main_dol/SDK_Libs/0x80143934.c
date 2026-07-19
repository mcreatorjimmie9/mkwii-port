// Function at 0x80143934
// Size: 492 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80143934: stwu     r1, -0x10(r1)
//   0x80143938: mflr     r0
//   0x8014393c: lis      r5, -0x7fcd
//   0x80143940: li       r6, 0
//   0x80143944: stw      r0, 0x14(r1)
//   0x80143948: li       r0, 2
//   0x8014394c: addi     r5, r5, 0x46c0
//   0x80143950: stw      r31, 0xc(r1)
//   0x80143954: addi     r31, r5, 0xac
//   0x80143958: stw      r30, 8(r1)
//   0x8014395c: mtctr    r0
//   0x80143960: lbz      r0, 0(r31)
//   0x80143964: cmpwi    r0, 0
//   0x80143968: beq      0x8014397c
//   0x8014396c: lhz      r0, 6(r31)
//   0x80143970: cmplw    r0, r3
//   0x80143974: bne      0x8014397c
//   0x80143978: b        0x801439ec
//   0x8014397c: lbzu     r0, 0x60(r31)
//   0x80143980: addi     r6, r6, 1
//

// TODO: Full decompilation requires Ghidra
