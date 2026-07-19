// Function at 0x8014cfe8
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8014cfe8: stwu     r1, -0x10(r1)
//   0x8014cfec: mflr     r0
//   0x8014cff0: stw      r0, 0x14(r1)
//   0x8014cff4: stw      r31, 0xc(r1)
//   0x8014cff8: stw      r30, 8(r1)
//   0x8014cffc: mr       r30, r4
//   0x8014d000: bl       0x8014e3f8
//   0x8014d004: cmpwi    r3, 0
//   0x8014d008: beq      0x8014d010
//   0x8014d00c: stb      r30, 0x30(r3)
//   0x8014d010: lis      r3, -0x7fcd
//   0x8014d014: li       r30, 0
//   0x8014d018: addi     r3, r3, 0x4fc0
//   0x8014d01c: addi     r31, r3, 8
//   0x8014d020: lbz      r0, 0(r31)
//   0x8014d024: cmpwi    r0, 0
//   0x8014d028: beq      0x8014d040
//   0x8014d02c: lwz      r0, 4(r31)
//   0x8014d030: cmpwi    r0, 2
//   0x8014d034: bne      0x8014d040
//

// TODO: Full decompilation requires Ghidra
