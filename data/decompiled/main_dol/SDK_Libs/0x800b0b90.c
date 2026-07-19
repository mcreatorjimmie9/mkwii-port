// Function at 0x800b0b90
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800b0b90: stwu     r1, -0x20(r1)
//   0x800b0b94: mflr     r0
//   0x800b0b98: stw      r0, 0x24(r1)
//   0x800b0b9c: stw      r31, 0x1c(r1)
//   0x800b0ba0: mr       r31, r5
//   0x800b0ba4: stw      r30, 0x18(r1)
//   0x800b0ba8: mr       r30, r4
//   0x800b0bac: stw      r29, 0x14(r1)
//   0x800b0bb0: mr       r29, r3
//   0x800b0bb4: lbz      r0, 0x16b(r3)
//   0x800b0bb8: cmpwi    r0, 0
//   0x800b0bbc: beq      0x800b0bd0
//   0x800b0bc0: lwz      r12, 0(r3)
//   0x800b0bc4: lwz      r12, 0x10(r12)
//   0x800b0bc8: mtctr    r12
//   0x800b0bcc: bctrl    
//   0x800b0bd0: clrlwi   r3, r31, 0x1f
//   0x800b0bd4: rlwinm   r0, r31, 0x1f, 0x1f, 0x1f
//   0x800b0bd8: stb      r3, 0x168(r29)
//   0x800b0bdc: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
