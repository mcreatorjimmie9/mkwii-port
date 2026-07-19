// Function at 0x80205fe8
// Size: 444 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80205fe8: stwu     r1, -0x20(r1)
//   0x80205fec: mflr     r0
//   0x80205ff0: cmpwi    r3, 0
//   0x80205ff4: stw      r0, 0x24(r1)
//   0x80205ff8: stw      r31, 0x1c(r1)
//   0x80205ffc: mr       r31, r4
//   0x80206000: stw      r30, 0x18(r1)
//   0x80206004: mr       r30, r3
//   0x80206008: bne      0x80206014
//   0x8020600c: li       r3, 0xa
//   0x80206010: b        0x8020618c
//   0x80206014: lhz      r0, 0x1860(r3)
//   0x80206018: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x8020601c: bne      0x80206028
//   0x80206020: li       r3, 9
//   0x80206024: b        0x8020618c
//   0x80206028: addi     r3, r1, 8
//   0x8020602c: bl       0x80207c5c
//   0x80206030: lwz      r6, 8(r1)
//   0x80206034: addi     r3, r30, 0x248
//

// TODO: Full decompilation requires Ghidra
