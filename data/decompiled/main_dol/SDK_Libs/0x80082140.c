// Function at 0x80082140
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80082140: stwu     r1, -0x10(r1)
//   0x80082144: mflr     r0
//   0x80082148: stw      r0, 0x14(r1)
//   0x8008214c: stw      r31, 0xc(r1)
//   0x80082150: mr       r31, r5
//   0x80082154: lwz      r12, 0(r3)
//   0x80082158: lwz      r12, 0x20(r12)
//   0x8008215c: mtctr    r12
//   0x80082160: bctrl    
//   0x80082164: cmpwi    r3, 0
//   0x80082168: beq      0x80082178
//   0x8008216c: cntlzw   r0, r31
//   0x80082170: srwi     r0, r0, 5
//   0x80082174: stb      r0, 0xe(r3)
//   0x80082178: lwz      r0, 0x14(r1)
//   0x8008217c: lwz      r31, 0xc(r1)
//   0x80082180: mtlr     r0
//   0x80082184: addi     r1, r1, 0x10
//   0x80082188: blr      
//

// TODO: Full decompilation requires Ghidra
