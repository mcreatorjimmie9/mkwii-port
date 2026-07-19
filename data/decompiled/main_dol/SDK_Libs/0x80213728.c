// Function at 0x80213728
// Size: 344 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80213728: stwu     r1, -0x20(r1)
//   0x8021372c: mflr     r0
//   0x80213730: stw      r0, 0x24(r1)
//   0x80213734: stw      r31, 0x1c(r1)
//   0x80213738: stw      r30, 0x18(r1)
//   0x8021373c: stw      r29, 0x14(r1)
//   0x80213740: lbz      r0, -0x5e54(r13)
//   0x80213744: cmpwi    r0, 0
//   0x80213748: bne      0x80213828
//   0x8021374c: lwz      r3, -0x5e5c(r13)
//   0x80213750: lwz      r0, -0x5e58(r13)
//   0x80213754: cmplw    r0, r3
//   0x80213758: beq      0x80213864
//   0x8021375c: mulli    r29, r3, 0xc
//   0x80213760: lis      r30, -0x7fc8
//   0x80213764: addi     r30, r30, -0xf80
//   0x80213768: lbzx     r0, r30, r29
//   0x8021376c: cmpwi    r0, 0
//   0x80213770: beq      0x80213800
//   0x80213774: add      r3, r30, r29
//

// TODO: Full decompilation requires Ghidra
