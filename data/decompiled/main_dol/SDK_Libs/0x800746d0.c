// Function at 0x800746d0
// Size: 1328 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x800746d0: stwu     r1, -0x40(r1)
//   0x800746d4: mflr     r0
//   0x800746d8: stw      r0, 0x44(r1)
//   0x800746dc: addi     r11, r1, 0x40
//   0x800746e0: bl       0x80020a38
//   0x800746e4: cmplwi   r4, 9
//   0x800746e8: mr       r29, r3
//   0x800746ec: mr       r30, r5
//   0x800746f0: mr       r31, r6
//   0x800746f4: bge      0x80074718
//   0x800746f8: addi     r5, r4, -1
//   0x800746fc: li       r6, 1
//   0x80074700: lwz      r0, 0xcc(r3)
//   0x80074704: slw      r5, r6, r5
//   0x80074708: and.     r0, r5, r0
//   0x8007470c: beq      0x80074718
//   0x80074710: li       r0, 1
//   0x80074714: b        0x8007471c
//   0x80074718: li       r0, 0
//   0x8007471c: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
