// Function at 0x801e8f18
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801e8f18: stwu     r1, -0x10(r1)
//   0x801e8f1c: mflr     r0
//   0x801e8f20: stw      r0, 0x14(r1)
//   0x801e8f24: stw      r31, 0xc(r1)
//   0x801e8f28: mr       r31, r4
//   0x801e8f2c: li       r4, 0
//   0x801e8f30: stw      r30, 8(r1)
//   0x801e8f34: mr       r30, r3
//   0x801e8f38: bl       0x801e8c54
//   0x801e8f3c: cmpwi    r3, 0
//   0x801e8f40: beq      0x801e8f48
//   0x801e8f44: b        0x801e8f74
//   0x801e8f48: cmpwi    r31, 0
//   0x801e8f4c: bne      0x801e8f58
//   0x801e8f50: li       r3, -3
//   0x801e8f54: b        0x801e8f74
//   0x801e8f58: lhz      r0, 0(r30)
//   0x801e8f5c: cmplwi   r0, 0xffff
//   0x801e8f60: bne      0x801e8f6c
//   0x801e8f64: li       r3, -0x28
//

// TODO: Full decompilation requires Ghidra
