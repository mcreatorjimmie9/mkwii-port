// Function at 0x80109924
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80109924: stwu     r1, -0x10(r1)
//   0x80109928: mflr     r0
//   0x8010992c: cmpwi    r3, 0
//   0x80109930: stw      r0, 0x14(r1)
//   0x80109934: stw      r31, 0xc(r1)
//   0x80109938: mr       r31, r3
//   0x8010993c: bne      0x80109948
//   0x80109940: li       r3, 1
//   0x80109944: b        0x801099a4
//   0x80109948: lwz      r12, 0x24(r3)
//   0x8010994c: cmpwi    r12, 0
//   0x80109950: bne      0x8010995c
//   0x80109954: li       r3, 1
//   0x80109958: b        0x801099a4
//   0x8010995c: lwz      r4, 0x1c(r3)
//   0x80109960: addi     r0, r4, 1
//   0x80109964: stw      r0, 0x1c(r3)
//   0x80109968: mtctr    r12
//   0x8010996c: bctrl    
//   0x80109970: lwz      r3, 0x1c(r31)
//

// TODO: Full decompilation requires Ghidra
