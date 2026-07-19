// Function at 0x800c7020
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800c7020: stwu     r1, -0x10(r1)
//   0x800c7024: mflr     r0
//   0x800c7028: stw      r0, 0x14(r1)
//   0x800c702c: stw      r31, 0xc(r1)
//   0x800c7030: mr       r31, r4
//   0x800c7034: bl       0x800c6e20
//   0x800c7038: lhz      r0, 0(r31)
//   0x800c703c: rlwinm   r0, r0, 0, 0x1b, 0x11
//   0x800c7040: sth      r0, 0(r31)
//   0x800c7044: lwz      r31, 0xc(r1)
//   0x800c7048: lwz      r0, 0x14(r1)
//   0x800c704c: mtlr     r0
//   0x800c7050: addi     r1, r1, 0x10
//   0x800c7054: blr      
//

// TODO: Full decompilation requires Ghidra
