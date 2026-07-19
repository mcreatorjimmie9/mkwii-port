// Function at 0x8021360c
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8021360c: stwu     r1, -0x10(r1)
//   0x80213610: mflr     r0
//   0x80213614: cmpwi    r4, 0
//   0x80213618: stw      r0, 0x14(r1)
//   0x8021361c: bne      0x80213654
//   0x80213620: lwz      r0, -0x5e5c(r13)
//   0x80213624: lis      r5, -0x7fc8
//   0x80213628: addi     r5, r5, -0xf80
//   0x8021362c: mulli    r0, r0, 0xc
//   0x80213630: add      r5, r5, r0
//   0x80213634: lwz      r12, 8(r5)
//   0x80213638: cmpwi    r12, 0
//   0x8021363c: beq      0x80213648
//   0x80213640: mtctr    r12
//   0x80213644: bctrl    
//   0x80213648: bl       0x801c2dac
//   0x8021364c: stb      r3, -0x6ca0(r13)
//   0x80213650: b        0x80213670
//   0x80213654: lwz      r0, -0x5e5c(r13)
//   0x80213658: lis      r4, -0x7fc8
//

// TODO: Full decompilation requires Ghidra
