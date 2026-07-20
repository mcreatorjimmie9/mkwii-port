// Function at 0x8001dcc0
// Size: 204 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8001dcc0: stwu     r1, -0x50(r1)
//   0x8001dcc4: mflr     r0
//   0x8001dcc8: stw      r0, 0x54(r1)
//   0x8001dccc: stw      r31, 0x4c(r1)
//   0x8001dcd0: stw      r30, 0x48(r1)
//   0x8001dcd4: lbz      r0, 0x14(r3)
//   0x8001dcd8: lbz      r30, 0x18(r3)
//   0x8001dcdc: cmplwi   r0, 1
//   0x8001dce0: bne      0x8001dd28
//   0x8001dce4: lis      r31, -0x7fd9
//   0x8001dce8: addi     r3, r31, -0x2850
//   0x8001dcec: crclr    cr1eq
//   0x8001dcf0: bl       0x801a2530
//   0x8001dcf4: cmpwi    r30, 0
//   0x8001dcf8: beq      0x8001dd10
//   0x8001dcfc: addi     r3, r31, -0x2850
//   0x8001dd00: addi     r3, r3, 0x1f
//   0x8001dd04: crclr    cr1eq
//   0x8001dd08: bl       0x801a2530
//   0x8001dd0c: b        0x8001dd20
//

// TODO: Full decompilation requires Ghidra
