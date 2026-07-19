// Function at 0x8000a510
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000a510: stwu     r1, -0x10(r1)
//   0x8000a514: mflr     r0
//   0x8000a518: cmpwi    r4, 5
//   0x8000a51c: stw      r0, 0x14(r1)
//   0x8000a520: bne      0x8000a53c
//   0x8000a524: li       r3, 0xcd8
//   0x8000a528: bl       0x80229a48
//   0x8000a52c: cmpwi    r3, 0
//   0x8000a530: beq      0x8000a558
//   0x8000a534: bl       0x800072c0
//   0x8000a538: b        0x8000a558
//   0x8000a53c: lis      r3, -0x7fdc
//   0x8000a540: li       r4, 0x27
//   0x8000a544: addi     r3, r3, 0x5a40
//   0x8000a548: addi     r5, r3, 0x17
//   0x8000a54c: crclr    cr1eq
//   0x8000a550: bl       0x801a25c0
//   0x8000a554: li       r3, 0
//   0x8000a558: lwz      r0, 0x14(r1)
//   0x8000a55c: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
