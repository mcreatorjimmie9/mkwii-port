// Function at 0x8006a500
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006a500: stwu     r1, -0x10(r1)
//   0x8006a504: mflr     r0
//   0x8006a508: cmpwi    r4, 0
//   0x8006a50c: stw      r0, 0x14(r1)
//   0x8006a510: stw      r31, 0xc(r1)
//   0x8006a514: beq      0x8006a538
//   0x8006a518: lwz      r31, 0(r3)
//   0x8006a51c: cmpwi    r31, 0
//   0x8006a520: beq      0x8006a538
//   0x8006a524: addi     r3, r31, 0x30
//   0x8006a528: bl       0x80085ae0
//   0x8006a52c: lwz      r0, 0x70(r31)
//   0x8006a530: ori      r0, r0, 0x80
//   0x8006a534: stw      r0, 0x70(r31)
//   0x8006a538: lwz      r0, 0x14(r1)
//   0x8006a53c: lwz      r31, 0xc(r1)
//   0x8006a540: mtlr     r0
//   0x8006a544: addi     r1, r1, 0x10
//   0x8006a548: blr      
//

// TODO: Full decompilation requires Ghidra
