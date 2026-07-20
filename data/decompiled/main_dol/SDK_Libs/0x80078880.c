// Function at 0x80078880
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80078880: stwu     r1, -0x10(r1)
//   0x80078884: mflr     r0
//   0x80078888: stw      r0, 0x14(r1)
//   0x8007888c: lwz      r3, -0x7e70(r13)
//   0x80078890: bl       0x801a0464
//   0x80078894: li       r3, 4
//   0x80078898: oris     r3, r3, 4
//   0x8007889c: mtspr    0x392, r3
//   0x800788a0: li       r3, 5
//   0x800788a4: oris     r3, r3, 5
//   0x800788a8: mtspr    0x393, r3
//   0x800788ac: li       r3, 6
//   0x800788b0: oris     r3, r3, 6
//   0x800788b4: mtspr    0x394, r3
//   0x800788b8: li       r3, 7
//   0x800788bc: oris     r3, r3, 7
//   0x800788c0: mtspr    0x395, r3
//   0x800788c4: lwz      r0, 0x14(r1)
//   0x800788c8: mtlr     r0
//   0x800788cc: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
