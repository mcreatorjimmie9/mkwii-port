// Function at 0x80078d90
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80078d90: stwu     r1, -0x20(r1)
//   0x80078d94: mflr     r0
//   0x80078d98: stw      r0, 0x24(r1)
//   0x80078d9c: stw      r31, 0x1c(r1)
//   0x80078da0: stw      r30, 0x18(r1)
//   0x80078da4: mr       r30, r3
//   0x80078da8: stw      r29, 0x14(r1)
//   0x80078dac: mr       r29, r5
//   0x80078db0: stw      r28, 0x10(r1)
//   0x80078db4: mr       r28, r4
//   0x80078db8: lwz      r6, 0x28(r3)
//   0x80078dbc: cmpwi    r6, 0
//   0x80078dc0: beq      0x80078ddc
//   0x80078dc4: addi     r3, r6, 0x44
//   0x80078dc8: bl       0x80084270
//   0x80078dcc: cmpwi    r3, 0
//   0x80078dd0: beq      0x80078ddc
//   0x80078dd4: lwz      r3, 0x28(r30)
//   0x80078dd8: b        0x80078e24
//   0x80078ddc: cmpwi    r29, 0
//

// TODO: Full decompilation requires Ghidra
