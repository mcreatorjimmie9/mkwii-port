// Function at 0x800c1da0
// Size: 1520 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x800c1da0: stwu     r1, -0x50(r1)
//   0x800c1da4: mflr     r0
//   0x800c1da8: stw      r0, 0x54(r1)
//   0x800c1dac: addi     r11, r1, 0x50
//   0x800c1db0: bl       0x80020a34
//   0x800c1db4: lwz      r4, 0(r3)
//   0x800c1db8: mr       r28, r3
//   0x800c1dbc: li       r31, 0
//   0x800c1dc0: cmplwi   r4, 5
//   0x800c1dc4: bgt      0x800c1ddc
//   0x800c1dc8: li       r0, 1
//   0x800c1dcc: slw      r0, r0, r4
//   0x800c1dd0: andi.    r0, r0, 0x2b
//   0x800c1dd4: beq      0x800c1ddc
//   0x800c1dd8: li       r31, 1
//   0x800c1ddc: lwz      r3, 0(r3)
//   0x800c1de0: lhz      r4, 4(r28)
//   0x800c1de4: bl       0x800bd390
//   0x800c1de8: bl       0x800bc310
//   0x800c1dec: mr       r30, r3
//

// TODO: Full decompilation requires Ghidra
