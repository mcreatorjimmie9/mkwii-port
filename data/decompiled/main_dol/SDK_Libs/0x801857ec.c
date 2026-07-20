// Function at 0x801857ec
// Size: 76 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801857ec: stwu     r1, -0x10(r1)
//   0x801857f0: mflr     r0
//   0x801857f4: stw      r0, 0x14(r1)
//   0x801857f8: stw      r31, 0xc(r1)
//   0x801857fc: mr       r31, r5
//   0x80185800: lwz      r12, 0(r3)
//   0x80185804: lwz      r12, 0x20(r12)
//   0x80185808: mtctr    r12
//   0x8018580c: bctrl    
//   0x80185810: cmpwi    r3, 0
//   0x80185814: beq      0x80185824
//   0x80185818: cntlzw   r0, r31
//   0x8018581c: srwi     r0, r0, 5
//   0x80185820: stb      r0, 0xe(r3)
//   0x80185824: lwz      r0, 0x14(r1)
//   0x80185828: lwz      r31, 0xc(r1)
//   0x8018582c: mtlr     r0
//   0x80185830: addi     r1, r1, 0x10
//   0x80185834: blr      
//

// TODO: Full decompilation requires Ghidra
