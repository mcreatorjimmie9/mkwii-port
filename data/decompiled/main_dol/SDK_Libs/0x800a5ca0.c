// Function at 0x800a5ca0
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a5ca0: stwu     r1, -0x10(r1)
//   0x800a5ca4: mflr     r0
//   0x800a5ca8: stw      r0, 0x14(r1)
//   0x800a5cac: stw      r31, 0xc(r1)
//   0x800a5cb0: stw      r30, 8(r1)
//   0x800a5cb4: mr       r30, r3
//   0x800a5cb8: lwz      r12, 0(r3)
//   0x800a5cbc: lwz      r12, 0x10(r12)
//   0x800a5cc0: mtctr    r12
//   0x800a5cc4: bctrl    
//   0x800a5cc8: bl       0x800a4490
//   0x800a5ccc: addi     r3, r3, 0x354
//   0x800a5cd0: bl       0x801a7e44
//   0x800a5cd4: lbz      r0, 0x11c(r30)
//   0x800a5cd8: cmpwi    r0, 0
//   0x800a5cdc: bne      0x800a5cf0
//   0x800a5ce0: bl       0x800a4490
//   0x800a5ce4: addi     r3, r3, 0x354
//   0x800a5ce8: bl       0x801a7f20
//   0x800a5cec: b        0x800a5d18
//

// TODO: Full decompilation requires Ghidra
