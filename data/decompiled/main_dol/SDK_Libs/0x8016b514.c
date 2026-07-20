// Function at 0x8016b514
// Size: 668 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8016b514: stwu     r1, -0x10(r1)
//   0x8016b518: mflr     r0
//   0x8016b51c: cmpwi    r3, 0
//   0x8016b520: stw      r0, 0x14(r1)
//   0x8016b524: stw      r31, 0xc(r1)
//   0x8016b528: bne      0x8016b600
//   0x8016b52c: lwz      r0, -0x6458(r13)
//   0x8016b530: cmpwi    r0, 0
//   0x8016b534: bne      0x8016b57c
//   0x8016b538: lwz      r5, -0x646c(r13)
//   0x8016b53c: lhz      r4, 0x4e(r5)
//   0x8016b540: mr       r0, r4
//   0x8016b544: lhz      r3, 0x50(r5)
//   0x8016b548: lhz      r4, 0x4e(r5)
//   0x8016b54c: cmplw    r4, r0
//   0x8016b550: bne      0x8016b540
//   0x8016b554: slwi     r0, r4, 0x10
//   0x8016b558: or       r0, r0, r3
//   0x8016b55c: stw      r0, -0x6468(r13)
//   0x8016b560: bl       0x801aacbc
//

// TODO: Full decompilation requires Ghidra
