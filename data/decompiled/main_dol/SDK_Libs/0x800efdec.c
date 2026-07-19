// Function at 0x800efdec
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800efdec: stwu     r1, -0x20(r1)
//   0x800efdf0: mflr     r0
//   0x800efdf4: cmpwi    r3, 0
//   0x800efdf8: stw      r0, 0x24(r1)
//   0x800efdfc: stw      r31, 0x1c(r1)
//   0x800efe00: stw      r30, 0x18(r1)
//   0x800efe04: stw      r29, 0x14(r1)
//   0x800efe08: mr       r29, r3
//   0x800efe0c: beq      0x800efe4c
//   0x800efe10: li       r30, 0
//   0x800efe14: li       r31, 0
//   0x800efe18: b        0x800efe30
//   0x800efe1c: lwz      r3, 0(r29)
//   0x800efe20: lwzx     r3, r3, r31
//   0x800efe24: bl       0x800ef374
//   0x800efe28: addi     r31, r31, 4
//   0x800efe2c: addi     r30, r30, 1
//   0x800efe30: lwz      r0, 4(r29)
//   0x800efe34: cmpw     r30, r0
//   0x800efe38: blt      0x800efe1c
//

// TODO: Full decompilation requires Ghidra
