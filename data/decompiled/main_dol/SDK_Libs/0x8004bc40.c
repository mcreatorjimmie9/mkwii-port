// Function at 0x8004bc40
// Size: 432 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004bc40: stwu     r1, -0x10(r1)
//   0x8004bc44: mflr     r0
//   0x8004bc48: lwz      r4, 0(r4)
//   0x8004bc4c: stw      r0, 0x14(r1)
//   0x8004bc50: lwz      r5, 0(r3)
//   0x8004bc54: lwz      r0, 0(r4)
//   0x8004bc58: lwz      r3, 0(r5)
//   0x8004bc5c: cmplw    r3, r0
//   0x8004bc60: bne      0x8004bc7c
//   0x8004bc64: addi     r3, r5, 4
//   0x8004bc68: addi     r4, r4, 4
//   0x8004bc6c: bl       0x8001273c
//   0x8004bc70: cntlzw   r0, r3
//   0x8004bc74: srwi     r3, r0, 5
//   0x8004bc78: b        0x8004bc80
//   0x8004bc7c: li       r3, 0
//   0x8004bc80: lwz      r0, 0x14(r1)
//   0x8004bc84: mtlr     r0
//   0x8004bc88: addi     r1, r1, 0x10
//   0x8004bc8c: blr      
//

// TODO: Full decompilation requires Ghidra
