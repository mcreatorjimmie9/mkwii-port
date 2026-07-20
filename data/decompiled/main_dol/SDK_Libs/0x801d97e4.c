// Function at 0x801d97e4
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801d97e4: stwu     r1, -0x20(r1)
//   0x801d97e8: mflr     r0
//   0x801d97ec: stw      r0, 0x24(r1)
//   0x801d97f0: stw      r31, 0x1c(r1)
//   0x801d97f4: li       r31, 0
//   0x801d97f8: stw      r30, 0x18(r1)
//   0x801d97fc: mr       r30, r5
//   0x801d9800: stw      r29, 0x14(r1)
//   0x801d9804: mr       r29, r4
//   0x801d9808: stw      r28, 0x10(r1)
//   0x801d980c: mr       r28, r3
//   0x801d9810: bl       0x801d3754
//   0x801d9814: cmplwi   r30, 3
//   0x801d9818: bne      0x801d9830
//   0x801d981c: lwz      r0, -0x5f60(r13)
//   0x801d9820: mr       r31, r29
//   0x801d9824: stw      r0, 0x20(r29)
//   0x801d9828: stw      r29, -0x5f60(r13)
//   0x801d982c: b        0x801d98c8
//   0x801d9830: addi     r4, r13, -0x5f60
//

// TODO: Full decompilation requires Ghidra
