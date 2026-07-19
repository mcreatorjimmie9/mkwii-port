// Function at 0x80185ddc
// Size: 184 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80185ddc: stwu     r1, -0x20(r1)
//   0x80185de0: mflr     r0
//   0x80185de4: stw      r0, 0x24(r1)
//   0x80185de8: stw      r31, 0x1c(r1)
//   0x80185dec: stw      r30, 0x18(r1)
//   0x80185df0: mr       r30, r5
//   0x80185df4: stw      r29, 0x14(r1)
//   0x80185df8: mr       r29, r4
//   0x80185dfc: stw      r28, 0x10(r1)
//   0x80185e00: mr       r28, r3
//   0x80185e04: lwz      r6, 0x28(r3)
//   0x80185e08: cmpwi    r6, 0
//   0x80185e0c: beq      0x80185e28
//   0x80185e10: addi     r3, r6, 4
//   0x80185e14: bl       0x80180698
//   0x80185e18: cmpwi    r3, 0
//   0x80185e1c: beq      0x80185e28
//   0x80185e20: lwz      r3, 0x28(r28)
//   0x80185e24: b        0x80185e74
//   0x80185e28: cmpwi    r30, 0
//

// TODO: Full decompilation requires Ghidra
