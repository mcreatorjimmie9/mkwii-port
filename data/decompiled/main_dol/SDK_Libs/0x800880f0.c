// Function at 0x800880f0
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800880f0: stwu     r1, -0x10(r1)
//   0x800880f4: mflr     r0
//   0x800880f8: lwz      r4, 4(r3)
//   0x800880fc: stw      r0, 0x14(r1)
//   0x80088100: cmpwi    r4, 0
//   0x80088104: bne      0x80088110
//   0x80088108: li       r3, 0
//   0x8008810c: b        0x80088120
//   0x80088110: lbz      r3, 0xc(r4)
//   0x80088114: addi     r5, r4, 8
//   0x80088118: lwz      r4, 0x10(r4)
//   0x8008811c: bl       0x800ad010
//   0x80088120: lwz      r0, 0x14(r1)
//   0x80088124: lwz      r3, 0(r3)
//   0x80088128: mtlr     r0
//   0x8008812c: addi     r1, r1, 0x10
//   0x80088130: blr      
//

// TODO: Full decompilation requires Ghidra
