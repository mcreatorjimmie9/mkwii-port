// Function at 0x800a4d70
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a4d70: stwu     r1, -0x10(r1)
//   0x800a4d74: mflr     r0
//   0x800a4d78: stw      r0, 0x14(r1)
//   0x800a4d7c: stw      r31, 0xc(r1)
//   0x800a4d80: mr       r31, r4
//   0x800a4d84: stw      r30, 8(r1)
//   0x800a4d88: mr       r30, r3
//   0x800a4d8c: bl       0x801a650c
//   0x800a4d90: lwz      r5, 0(r30)
//   0x800a4d94: li       r4, 1
//   0x800a4d98: lwz      r0, 8(r30)
//   0x800a4d9c: subf     r5, r5, r31
//   0x800a4da0: divwu    r5, r5, r0
//   0x800a4da4: srwi     r0, r5, 3
//   0x800a4da8: add      r6, r30, r0
//   0x800a4dac: clrlwi   r0, r5, 0x1d
//   0x800a4db0: lbz      r5, 0x14(r6)
//   0x800a4db4: slw      r0, r4, r0
//   0x800a4db8: andc     r0, r5, r0
//   0x800a4dbc: stb      r0, 0x14(r6)
//

// TODO: Full decompilation requires Ghidra
