// Function at 0x80243e80
// Size: 152 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243e80: stwu     r1, -0x10(r1)
//   0x80243e84: mflr     r0
//   0x80243e88: stw      r0, 0x14(r1)
//   0x80243e8c: lwz      r12, 0(r3)
//   0x80243e90: lwz      r12, 0x14(r12)
//   0x80243e94: mtctr    r12
//   0x80243e98: bctrl    
//   0x80243e9c: lwz      r0, 0x14(r1)
//   0x80243ea0: addi     r3, r3, 4
//   0x80243ea4: mtlr     r0
//   0x80243ea8: addi     r1, r1, 0x10
//   0x80243eac: blr      
//   0x80243eb0: lis      r3, -0x7fda
//   0x80243eb4: lwz      r0, 0(r4)
//   0x80243eb8: addi     r3, r3, -0x7dc0
//   0x80243ebc: cmplw    r0, r3
//   0x80243ec0: bne      0x80243ecc
//   0x80243ec4: li       r3, 1
//   0x80243ec8: blr      
//   0x80243ecc: lis      r3, -0x7fdc
//

// TODO: Full decompilation requires Ghidra
