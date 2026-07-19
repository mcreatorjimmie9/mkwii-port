// Function at 0x800266e0
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800266e0: stwu     r1, -0x10(r1)
//   0x800266e4: mflr     r0
//   0x800266e8: stw      r0, 0x14(r1)
//   0x800266ec: stw      r31, 0xc(r1)
//   0x800266f0: mr       r31, r4
//   0x800266f4: lwz      r0, 0xc(r4)
//   0x800266f8: cmpwi    r0, 1
//   0x800266fc: beq      0x80026708
//   0x80026700: li       r3, 0
//   0x80026704: b        0x80026754
//   0x80026708: lhz      r4, 0x3c(r3)
//   0x8002670c: addi     r0, r4, -1
//   0x80026710: sth      r0, 0x3c(r3)
//   0x80026714: mr       r3, r31
//   0x80026718: lwz      r12, 0x1c(r31)
//   0x8002671c: lwz      r12, 0xc(r12)
//   0x80026720: mtctr    r12
//   0x80026724: bctrl    
//   0x80026728: lwz      r0, 0x10(r31)
//   0x8002672c: li       r3, 2
//

// TODO: Full decompilation requires Ghidra
