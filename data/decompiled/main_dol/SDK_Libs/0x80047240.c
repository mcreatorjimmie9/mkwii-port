// Function at 0x80047240
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80047240: stwu     r1, -0x10(r1)
//   0x80047244: mflr     r0
//   0x80047248: cmpwi    r3, 0
//   0x8004724c: stw      r0, 0x14(r1)
//   0x80047250: stw      r31, 0xc(r1)
//   0x80047254: mr       r31, r3
//   0x80047258: beq      0x80047268
//   0x8004725c: cmpwi    r4, 0
//   0x80047260: ble      0x80047268
//   0x80047264: bl       0x80229a90
//   0x80047268: mr       r3, r31
//   0x8004726c: lwz      r31, 0xc(r1)
//   0x80047270: lwz      r0, 0x14(r1)
//   0x80047274: mtlr     r0
//   0x80047278: addi     r1, r1, 0x10
//   0x8004727c: blr      
//

// TODO: Full decompilation requires Ghidra
