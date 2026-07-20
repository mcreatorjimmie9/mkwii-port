// Function at 0x80047010
// Size: 560 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80047010: stwu     r1, -0x40(r1)
//   0x80047014: mflr     r0
//   0x80047018: stw      r0, 0x44(r1)
//   0x8004701c: addi     r11, r1, 0x40
//   0x80047020: bl       0x80020a40
//   0x80047024: lwz      r6, 0(r4)
//   0x80047028: mr       r31, r4
//   0x8004702c: mr       r30, r3
//   0x80047030: mr       r27, r5
//   0x80047034: lhz      r6, 0x42(r6)
//   0x80047038: lwzx     r4, r5, r6
//   0x8004703c: b        0x80047044
//   0x80047040: lwzx     r4, r4, r6
//   0x80047044: cmpwi    r4, 0
//   0x80047048: beq      0x80047058
//   0x8004704c: lwz      r0, 0xc(r4)
//   0x80047050: cmpwi    r0, 1
//   0x80047054: bne      0x80047040
//   0x80047058: add      r3, r5, r6
//   0x8004705c: lwz      r29, 4(r3)
//

// TODO: Full decompilation requires Ghidra
