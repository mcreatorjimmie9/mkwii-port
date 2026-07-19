// Function at 0x80093cd0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80093cd0: stwu     r1, -0x10(r1)
//   0x80093cd4: mflr     r0
//   0x80093cd8: stw      r0, 0x14(r1)
//   0x80093cdc: stw      r31, 0xc(r1)
//   0x80093ce0: mr       r31, r3
//   0x80093ce4: bl       0x80088750
//   0x80093ce8: bl       0x80089000
//   0x80093cec: addi     r3, r3, -2
//   0x80093cf0: lwz      r0, 0x10(r31)
//   0x80093cf4: cntlzw   r3, r3
//   0x80093cf8: srwi     r3, r3, 5
//   0x80093cfc: cmpw     r0, r3
//   0x80093d00: beq      0x80093d2c
//   0x80093d04: lwz      r12, 0(r31)
//   0x80093d08: mr       r3, r31
//   0x80093d0c: lwz      r12, 0x10(r12)
//   0x80093d10: mtctr    r12
//   0x80093d14: bctrl    
//   0x80093d18: lwz      r12, 0(r31)
//   0x80093d1c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
