// Function at 0x80138e60
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80138e60: stwu     r1, -0x20(r1)
//   0x80138e64: mflr     r0
//   0x80138e68: stw      r0, 0x24(r1)
//   0x80138e6c: lwz      r0, 0x10(r3)
//   0x80138e70: cmplwi   r0, 4
//   0x80138e74: bne      0x80138eac
//   0x80138e78: lis      r4, -0x7fcd
//   0x80138e7c: li       r3, 0xa
//   0x80138e80: addi     r4, r4, 0x1ef8
//   0x80138e84: li       r0, 0
//   0x80138e88: lwz      r12, 0x5c4(r4)
//   0x80138e8c: stb      r3, 8(r1)
//   0x80138e90: cmpwi    r12, 0
//   0x80138e94: sth      r0, 0x10(r1)
//   0x80138e98: stw      r0, 0x5c4(r4)
//   0x80138e9c: beq      0x80138eac
//   0x80138ea0: addi     r3, r1, 8
//   0x80138ea4: mtctr    r12
//   0x80138ea8: bctrl    
//   0x80138eac: lwz      r0, 0x24(r1)
//

// TODO: Full decompilation requires Ghidra
