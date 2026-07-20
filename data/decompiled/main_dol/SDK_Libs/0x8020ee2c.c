// Function at 0x8020ee2c
// Size: 56 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020ee2c: stwu     r1, -0x10(r1)
//   0x8020ee30: mflr     r0
//   0x8020ee34: li       r4, 0x200
//   0x8020ee38: stw      r0, 0x14(r1)
//   0x8020ee3c: bl       0x8020bb1c
//   0x8020ee40: cntlzw   r3, r3
//   0x8020ee44: li       r0, -0x15
//   0x8020ee48: rlwinm   r3, r3, 0x1b, 0x1f, 0x1f
//   0x8020ee4c: neg      r3, r3
//   0x8020ee50: andc     r3, r0, r3
//   0x8020ee54: lwz      r0, 0x14(r1)
//   0x8020ee58: mtlr     r0
//   0x8020ee5c: addi     r1, r1, 0x10
//   0x8020ee60: blr      
//

// TODO: Full decompilation requires Ghidra
