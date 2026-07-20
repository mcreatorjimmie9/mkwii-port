// Function at 0x8014361c
// Size: 476 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8014361c: stwu     r1, -0x10(r1)
//   0x80143620: mflr     r0
//   0x80143624: lis      r5, -0x7fcd
//   0x80143628: stw      r0, 0x14(r1)
//   0x8014362c: li       r0, 2
//   0x80143630: addi     r5, r5, 0x46c0
//   0x80143634: stw      r31, 0xc(r1)
//   0x80143638: addi     r31, r5, 0xac
//   0x8014363c: li       r5, 0
//   0x80143640: stw      r30, 8(r1)
//   0x80143644: mtctr    r0
//   0x80143648: lbz      r0, 0(r31)
//   0x8014364c: cmpwi    r0, 0
//   0x80143650: beq      0x80143664
//   0x80143654: lhz      r0, 6(r31)
//   0x80143658: cmplw    r0, r3
//   0x8014365c: bne      0x80143664
//   0x80143660: b        0x801436d4
//   0x80143664: lbzu     r0, 0x60(r31)
//   0x80143668: addi     r5, r5, 1
//

// TODO: Full decompilation requires Ghidra
