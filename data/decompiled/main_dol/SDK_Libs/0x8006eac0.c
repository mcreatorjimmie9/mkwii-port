// Function at 0x8006eac0
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006eac0: stwu     r1, -0x10(r1)
//   0x8006eac4: mflr     r0
//   0x8006eac8: stw      r0, 0x14(r1)
//   0x8006eacc: stw      r31, 0xc(r1)
//   0x8006ead0: mr       r31, r3
//   0x8006ead4: lwz      r6, 0xe4(r3)
//   0x8006ead8: cmplw    r4, r6
//   0x8006eadc: bgt      0x8006ec34
//   0x8006eae0: lwz      r0, 0xe0(r3)
//   0x8006eae4: cmplw    r6, r0
//   0x8006eae8: bge      0x8006ec34
//   0x8006eaec: cmpwi    r5, 0
//   0x8006eaf0: beq      0x8006ec34
//   0x8006eaf4: lwz      r0, 4(r5)
//   0x8006eaf8: cmpwi    r0, 0
//   0x8006eafc: bne      0x8006ec34
//   0x8006eb00: cmplw    cr1, r6, r4
//   0x8006eb04: ble      cr1, 0x8006ebf0
//   0x8006eb08: subf     r0, r4, r6
//   0x8006eb0c: addi     r7, r4, 8
//

// TODO: Full decompilation requires Ghidra
