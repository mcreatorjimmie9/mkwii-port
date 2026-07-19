// Function at 0x8009dd90
// Size: 480 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8009dd90: stwu     r1, -0x10(r1)
//   0x8009dd94: mflr     r0
//   0x8009dd98: cmpwi    r3, 0
//   0x8009dd9c: stw      r0, 0x14(r1)
//   0x8009dda0: stw      r31, 0xc(r1)
//   0x8009dda4: mr       r31, r3
//   0x8009dda8: beq      0x8009ddb8
//   0x8009ddac: cmpwi    r4, 0
//   0x8009ddb0: ble      0x8009ddb8
//   0x8009ddb4: bl       0x80229a90
//   0x8009ddb8: mr       r3, r31
//   0x8009ddbc: lwz      r31, 0xc(r1)
//   0x8009ddc0: lwz      r0, 0x14(r1)
//   0x8009ddc4: mtlr     r0
//   0x8009ddc8: addi     r1, r1, 0x10
//   0x8009ddcc: blr      
//   0x8009ddd0: lwz      r3, 4(r3)
//   0x8009ddd4: neg      r0, r3
//   0x8009ddd8: or       r0, r0, r3
//   0x8009dddc: srwi     r3, r0, 0x1f
//

// TODO: Full decompilation requires Ghidra
