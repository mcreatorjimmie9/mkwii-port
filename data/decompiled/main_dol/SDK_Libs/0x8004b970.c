// Function at 0x8004b970
// Size: 560 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8004b970: stwu     r1, -0x40(r1)
//   0x8004b974: mflr     r0
//   0x8004b978: stw      r0, 0x44(r1)
//   0x8004b97c: addi     r11, r1, 0x40
//   0x8004b980: bl       0x80020a40
//   0x8004b984: lwz      r6, 0(r4)
//   0x8004b988: mr       r31, r4
//   0x8004b98c: mr       r30, r3
//   0x8004b990: mr       r27, r5
//   0x8004b994: lhz      r6, 0x42(r6)
//   0x8004b998: lwzx     r4, r5, r6
//   0x8004b99c: b        0x8004b9a4
//   0x8004b9a0: lwzx     r4, r4, r6
//   0x8004b9a4: cmpwi    r4, 0
//   0x8004b9a8: beq      0x8004b9b8
//   0x8004b9ac: lwz      r0, 0xc(r4)
//   0x8004b9b0: cmpwi    r0, 1
//   0x8004b9b4: bne      0x8004b9a0
//   0x8004b9b8: add      r3, r5, r6
//   0x8004b9bc: lwz      r29, 4(r3)
//

// TODO: Full decompilation requires Ghidra
