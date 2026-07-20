// Function at 0x80104388
// Size: 380 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80104388: stwu     r1, -0x20(r1)
//   0x8010438c: mflr     r0
//   0x80104390: stw      r0, 0x24(r1)
//   0x80104394: stw      r31, 0x1c(r1)
//   0x80104398: stw      r30, 0x18(r1)
//   0x8010439c: stw      r29, 0x14(r1)
//   0x801043a0: mr       r29, r4
//   0x801043a4: lwz      r0, 0(r4)
//   0x801043a8: lwz      r5, 0(r3)
//   0x801043ac: cmpwi    r0, 3
//   0x801043b0: bne      0x801043f4
//   0x801043b4: lwz      r3, 0x238(r5)
//   0x801043b8: lwz      r30, 4(r4)
//   0x801043bc: li       r4, 2
//   0x801043c0: addi     r0, r3, -1
//   0x801043c4: stw      r0, 0x238(r5)
//   0x801043c8: lwz      r3, 4(r30)
//   0x801043cc: bl       0x800f1158
//   0x801043d0: lwz      r3, 4(r30)
//   0x801043d4: bl       0x800f1124
//

// TODO: Full decompilation requires Ghidra
