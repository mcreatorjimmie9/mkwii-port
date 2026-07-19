// Function at 0x80075650
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80075650: stwu     r1, -0x10(r1)
//   0x80075654: mflr     r0
//   0x80075658: cmpwi    r4, 5
//   0x8007565c: stw      r0, 0x14(r1)
//   0x80075660: stw      r31, 0xc(r1)
//   0x80075664: bne      0x80075688
//   0x80075668: lwz      r12, 0(r3)
//   0x8007566c: lwz      r31, 0x138(r3)
//   0x80075670: lwz      r12, 0x38(r12)
//   0x80075674: mr       r4, r31
//   0x80075678: mtctr    r12
//   0x8007567c: bctrl    
//   0x80075680: mr       r3, r31
//   0x80075684: b        0x8007568c
//   0x80075688: bl       0x800725f0
//   0x8007568c: lwz      r0, 0x14(r1)
//   0x80075690: lwz      r31, 0xc(r1)
//   0x80075694: mtlr     r0
//   0x80075698: addi     r1, r1, 0x10
//   0x8007569c: blr      
//

// TODO: Full decompilation requires Ghidra
