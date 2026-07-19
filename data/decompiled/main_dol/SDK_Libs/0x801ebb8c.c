// Function at 0x801ebb8c
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801ebb8c: stwu     r1, -0x10(r1)
//   0x801ebb90: mflr     r0
//   0x801ebb94: addi     r7, r3, 0x18
//   0x801ebb98: stw      r0, 0x14(r1)
//   0x801ebb9c: lwz      r0, 8(r3)
//   0x801ebba0: cmplw    r0, r6
//   0x801ebba4: bgt      0x801ebbb0
//   0x801ebba8: li       r3, -3
//   0x801ebbac: b        0x801ebbdc
//   0x801ebbb0: slwi     r0, r6, 3
//   0x801ebbb4: add      r6, r7, r0
//   0x801ebbb8: lwzx     r7, r7, r0
//   0x801ebbbc: lwz      r0, 4(r6)
//   0x801ebbc0: add      r3, r3, r7
//   0x801ebbc4: cmplw    r0, r5
//   0x801ebbc8: bge      0x801ebbd4
//   0x801ebbcc: li       r3, -8
//   0x801ebbd0: b        0x801ebbdc
//   0x801ebbd4: bl       0x80005f34
//   0x801ebbd8: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
