// Function at 0x80046ae0
// Size: 624 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80046ae0: stwu     r1, -0x50(r1)
//   0x80046ae4: mflr     r0
//   0x80046ae8: stw      r0, 0x54(r1)
//   0x80046aec: addi     r11, r1, 0x50
//   0x80046af0: bl       0x80020a40
//   0x80046af4: lwz      r6, 0(r4)
//   0x80046af8: mr       r31, r4
//   0x80046afc: mr       r30, r3
//   0x80046b00: mr       r27, r5
//   0x80046b04: lhz      r6, 0x42(r6)
//   0x80046b08: lwzx     r4, r5, r6
//   0x80046b0c: b        0x80046b14
//   0x80046b10: lwzx     r4, r4, r6
//   0x80046b14: cmpwi    r4, 0
//   0x80046b18: beq      0x80046b28
//   0x80046b1c: lwz      r0, 0xc(r4)
//   0x80046b20: cmpwi    r0, 1
//   0x80046b24: bne      0x80046b10
//   0x80046b28: add      r3, r5, r6
//   0x80046b2c: lwz      r29, 4(r3)
//

// TODO: Full decompilation requires Ghidra
