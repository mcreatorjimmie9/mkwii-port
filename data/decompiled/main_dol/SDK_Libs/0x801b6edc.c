// Function at 0x801b6edc
// Size: 1172 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x801b6edc: stwu     r1, -0x40(r1)
//   0x801b6ee0: mflr     r0
//   0x801b6ee4: stw      r0, 0x44(r1)
//   0x801b6ee8: addi     r11, r1, 0x40
//   0x801b6eec: bl       0x80020a24
//   0x801b6ef0: cmpwi    r3, 0
//   0x801b6ef4: beq      0x801b6f00
//   0x801b6ef8: cmpwi    r4, 0
//   0x801b6efc: bne      0x801b6f08
//   0x801b6f00: li       r3, 0
//   0x801b6f04: b        0x801b7358
//   0x801b6f08: cmpwi    r5, 1
//   0x801b6f0c: lwz      r5, 0(r4)
//   0x801b6f10: addi     r20, r4, 0x50
//   0x801b6f14: add      r12, r20, r5
//   0x801b6f18: bne      0x801b6f34
//   0x801b6f1c: lwz      r0, 4(r4)
//   0x801b6f20: mr       r30, r3
//   0x801b6f24: li       r8, 1
//   0x801b6f28: slwi     r0, r0, 1
//

// TODO: Full decompilation requires Ghidra
