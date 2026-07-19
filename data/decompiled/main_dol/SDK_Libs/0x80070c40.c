// Function at 0x80070c40
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80070c40: stwu     r1, -0x10(r1)
//   0x80070c44: mflr     r0
//   0x80070c48: stw      r0, 0x14(r1)
//   0x80070c4c: lwz      r12, 0(r3)
//   0x80070c50: lwz      r12, 0x14(r12)
//   0x80070c54: mtctr    r12
//   0x80070c58: bctrl    
//   0x80070c5c: lwz      r0, 0x14(r1)
//   0x80070c60: addi     r3, r3, 4
//   0x80070c64: mtlr     r0
//   0x80070c68: addi     r1, r1, 0x10
//   0x80070c6c: blr      
//   0x80070c70: lis      r3, -0x7fdc
//   0x80070c74: addi     r3, r3, 0x7c88
//   0x80070c78: blr      
//

// TODO: Full decompilation requires Ghidra
