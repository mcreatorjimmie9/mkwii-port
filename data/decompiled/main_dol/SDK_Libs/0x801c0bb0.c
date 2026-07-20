// Function at 0x801c0bb0
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801c0bb0: stwu     r1, -0x10(r1)
//   0x801c0bb4: mflr     r0
//   0x801c0bb8: lis      r5, -0x7fcb
//   0x801c0bbc: stw      r0, 0x14(r1)
//   0x801c0bc0: slwi     r0, r3, 2
//   0x801c0bc4: addi     r5, r5, -0x3a50
//   0x801c0bc8: stw      r31, 0xc(r1)
//   0x801c0bcc: lwzx     r31, r5, r0
//   0x801c0bd0: lwz      r12, 0x988(r31)
//   0x801c0bd4: cmpwi    r12, 0
//   0x801c0bd8: beq      0x801c0be4
//   0x801c0bdc: mtctr    r12
//   0x801c0be0: bctrl    
//   0x801c0be4: li       r0, 0
//   0x801c0be8: stw      r0, 0x988(r31)
//   0x801c0bec: stb      r0, 0x98c(r31)
//   0x801c0bf0: lwz      r31, 0xc(r1)
//   0x801c0bf4: lwz      r0, 0x14(r1)
//   0x801c0bf8: mtlr     r0
//   0x801c0bfc: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
