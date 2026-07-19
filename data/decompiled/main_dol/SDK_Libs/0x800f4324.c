// Function at 0x800f4324
// Size: 60 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800f4324: stwu     r1, -0x10(r1)
//   0x800f4328: mflr     r0
//   0x800f432c: stw      r0, 0x14(r1)
//   0x800f4330: lwz      r0, 0x30(r3)
//   0x800f4334: cmpwi    r0, 0
//   0x800f4338: beq      0x800f4344
//   0x800f433c: li       r3, 4
//   0x800f4340: b        0x800f4350
//   0x800f4344: lwz      r3, 0x28(r3)
//   0x800f4348: bl       0x80113780
//   0x800f434c: li       r3, 1
//   0x800f4350: lwz      r0, 0x14(r1)
//   0x800f4354: mtlr     r0
//   0x800f4358: addi     r1, r1, 0x10
//   0x800f435c: blr      
//

// TODO: Full decompilation requires Ghidra
