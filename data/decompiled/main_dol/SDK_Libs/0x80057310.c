// Function at 0x80057310
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80057310: stwu     r1, -0x10(r1)
//   0x80057314: mflr     r0
//   0x80057318: stw      r0, 0x14(r1)
//   0x8005731c: stw      r31, 0xc(r1)
//   0x80057320: li       r31, 0
//   0x80057324: stw      r30, 8(r1)
//   0x80057328: mr       r30, r3
//   0x8005732c: b        0x8005734c
//   0x80057330: lwz      r12, 0(r30)
//   0x80057334: mr       r3, r30
//   0x80057338: mr       r4, r31
//   0x8005733c: lwz      r12, 0x40(r12)
//   0x80057340: mtctr    r12
//   0x80057344: bctrl    
//   0x80057348: addi     r31, r31, 1
//   0x8005734c: lwz      r0, 0x18(r30)
//   0x80057350: cmpw     r31, r0
//   0x80057354: blt      0x80057330
//   0x80057358: lwz      r0, 0x14(r1)
//   0x8005735c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
