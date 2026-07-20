// Function at 0x801437f8
// Size: 316 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801437f8: stwu     r1, -0x10(r1)
//   0x801437fc: mflr     r0
//   0x80143800: lis      r5, -0x7fcd
//   0x80143804: li       r6, 0
//   0x80143808: stw      r0, 0x14(r1)
//   0x8014380c: li       r0, 2
//   0x80143810: addi     r5, r5, 0x46c0
//   0x80143814: stw      r31, 0xc(r1)
//   0x80143818: addi     r31, r5, 0xac
//   0x8014381c: mtctr    r0
//   0x80143820: lbz      r0, 0(r31)
//   0x80143824: cmpwi    r0, 0
//   0x80143828: beq      0x8014383c
//   0x8014382c: lhz      r0, 6(r31)
//   0x80143830: cmplw    r0, r3
//   0x80143834: bne      0x8014383c
//   0x80143838: b        0x801438ac
//   0x8014383c: lbzu     r0, 0x60(r31)
//   0x80143840: addi     r6, r6, 1
//   0x80143844: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
