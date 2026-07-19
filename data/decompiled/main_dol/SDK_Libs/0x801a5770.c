// Function at 0x801a5770
// Size: 548 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801a5770: stwu     r1, -0x20(r1)
//   0x801a5774: mflr     r0
//   0x801a5778: stw      r0, 0x24(r1)
//   0x801a577c: addi     r11, r1, 0x20
//   0x801a5780: bl       0x80020a3c
//   0x801a5784: lwz      r5, 0xc(r3)
//   0x801a5788: addi     r30, r3, 0x10
//   0x801a578c: lwz      r0, 4(r3)
//   0x801a5790: li       r8, 0
//   0x801a5794: add      r29, r3, r5
//   0x801a5798: lwz      r9, 8(r3)
//   0x801a579c: li       r11, 0
//   0x801a57a0: lis      r5, -0x8000
//   0x801a57a4: cmpwi    r11, 0
//   0x801a57a8: bne      0x801a57b8
//   0x801a57ac: lwz      r12, 0(r30)
//   0x801a57b0: li       r11, 0x20
//   0x801a57b4: addi     r30, r30, 4
//   0x801a57b8: rlwinm.  r6, r12, 0, 0, 0
//   0x801a57bc: beq      0x801a57d4
//

// TODO: Full decompilation requires Ghidra
