// Function at 0x800efc28
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800efc28: stwu     r1, -0x10(r1)
//   0x800efc2c: mflr     r0
//   0x800efc30: stw      r0, 0x14(r1)
//   0x800efc34: stw      r31, 0xc(r1)
//   0x800efc38: stw      r30, 8(r1)
//   0x800efc3c: mr       r30, r3
//   0x800efc40: lwz      r4, 0(r3)
//   0x800efc44: addi     r31, r4, -1
//   0x800efc48: b        0x800efd0c
//   0x800efc4c: lwz      r12, 0x10(r30)
//   0x800efc50: cmpwi    r12, 0
//   0x800efc54: beq      0x800efc8c
//   0x800efc58: cmpwi    r31, 0
//   0x800efc5c: blt      0x800efc6c
//   0x800efc60: lwz      r0, 0(r30)
//   0x800efc64: cmpw     r31, r0
//   0x800efc68: blt      0x800efc74
//   0x800efc6c: li       r3, 0
//   0x800efc70: b        0x800efc84
//   0x800efc74: lwz      r0, 8(r30)
//

// TODO: Full decompilation requires Ghidra
