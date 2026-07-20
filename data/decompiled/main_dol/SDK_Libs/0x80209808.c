// Function at 0x80209808
// Size: 508 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80209808: stwu     r1, -0x10(r1)
//   0x8020980c: mflr     r0
//   0x80209810: mr       r3, r5
//   0x80209814: stw      r0, 0x14(r1)
//   0x80209818: bl       0x8020b9dc
//   0x8020981c: neg      r0, r3
//   0x80209820: lis      r4, 1
//   0x80209824: or       r0, r0, r3
//   0x80209828: srawi    r3, r0, 0x1f
//   0x8020982c: addi     r0, r4, -0x4ffa
//   0x80209830: andc     r3, r0, r3
//   0x80209834: lwz      r0, 0x14(r1)
//   0x80209838: mtlr     r0
//   0x8020983c: addi     r1, r1, 0x10
//   0x80209840: blr      
//   0x80209844: clrlwi   r11, r1, 0x1b
//   0x80209848: mr       r12, r1
//   0x8020984c: subfic   r11, r11, -0x1a0
//   0x80209850: stwux    r1, r1, r11
//   0x80209854: mflr     r0
//

// TODO: Full decompilation requires Ghidra
