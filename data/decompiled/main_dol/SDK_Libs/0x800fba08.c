// Function at 0x800fba08
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x800fba08: stwu     r1, -0x40(r1)
//   0x800fba0c: mflr     r0
//   0x800fba10: cmpwi    r3, 0
//   0x800fba14: stw      r0, 0x44(r1)
//   0x800fba18: stw      r31, 0x3c(r1)
//   0x800fba1c: lwz      r31, 0x4c(r1)
//   0x800fba20: stw      r30, 0x38(r1)
//   0x800fba24: lwz      r30, 0x48(r1)
//   0x800fba28: stw      r29, 0x34(r1)
//   0x800fba2c: mr       r29, r3
//   0x800fba30: beq      0x800fba40
//   0x800fba34: lwz      r11, 0(r3)
//   0x800fba38: cmpwi    r11, 0
//   0x800fba3c: bne      0x800fba48
//   0x800fba40: li       r3, 2
//   0x800fba44: b        0x800fbabc
//   0x800fba48: cmpwi    r30, 0
//   0x800fba4c: bne      0x800fba64
//   0x800fba50: lis      r4, -0x7fd9
//   0x800fba54: addi     r4, r4, 0x6be8
//

// TODO: Full decompilation requires Ghidra
