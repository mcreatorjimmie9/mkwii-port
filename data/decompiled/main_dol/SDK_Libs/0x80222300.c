// Function at 0x80222300
// Size: 104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80222300: stwu     r1, -0x10(r1)
//   0x80222304: mflr     r0
//   0x80222308: cmpwi    r3, 0
//   0x8022230c: stw      r0, 0x14(r1)
//   0x80222310: stw      r31, 0xc(r1)
//   0x80222314: mr       r31, r4
//   0x80222318: stw      r30, 8(r1)
//   0x8022231c: mr       r30, r3
//   0x80222320: beq      0x8022234c
//   0x80222324: lis      r12, -0x7fd6
//   0x80222328: addi     r12, r12, -0x15a0
//   0x8022232c: stw      r12, 0(r3)
//   0x80222330: lwz      r12, 0x10(r12)
//   0x80222334: mtctr    r12
//   0x80222338: bctrl    
//   0x8022233c: cmpwi    r31, 0
//   0x80222340: ble      0x8022234c
//   0x80222344: mr       r3, r30
//   0x80222348: bl       0x80229a90
//   0x8022234c: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
