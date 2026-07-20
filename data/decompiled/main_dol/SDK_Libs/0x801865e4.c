// Function at 0x801865e4
// Size: 184 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801865e4: stwu     r1, -0x20(r1)
//   0x801865e8: mflr     r0
//   0x801865ec: stw      r0, 0x24(r1)
//   0x801865f0: addi     r11, r1, 0x20
//   0x801865f4: bl       0x80020a40
//   0x801865f8: mr       r30, r3
//   0x801865fc: mr       r27, r4
//   0x80186600: mr       r28, r5
//   0x80186604: mr       r29, r6
//   0x80186608: addi     r3, r3, 0x1c
//   0x8018660c: bl       0x80180148
//   0x80186610: cmpwi    r3, 0
//   0x80186614: beq      0x80186624
//   0x80186618: cntlzw   r0, r28
//   0x8018661c: srwi     r0, r0, 5
//   0x80186620: stb      r0, 0xe(r3)
//   0x80186624: lwz      r3, 0x28(r30)
//   0x80186628: cmpwi    r3, 0
//   0x8018662c: beq      0x80186648
//   0x80186630: lwz      r12, 0(r3)
//

// TODO: Full decompilation requires Ghidra
