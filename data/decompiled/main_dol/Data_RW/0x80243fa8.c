// Function at 0x80243fa8
// Size: 104 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243fa8: stwu     r1, -0x10(r1)
//   0x80243fac: mflr     r0
//   0x80243fb0: stw      r0, 0x14(r1)
//   0x80243fb4: stw      r31, 0xc(r1)
//   0x80243fb8: mr       r31, r3
//   0x80243fbc: lwz      r3, 4(r3)
//   0x80243fc0: lwz      r12, 0(r3)
//   0x80243fc4: lwz      r12, 0xc(r12)
//   0x80243fc8: mtctr    r12
//   0x80243fcc: bctrl    
//   0x80243fd0: cmpwi    r3, 0
//   0x80243fd4: beq      0x80243fec
//   0x80243fd8: lwz      r0, 8(r31)
//   0x80243fdc: rlwinm   r0, r0, 0, 0, 0x1e
//   0x80243fe0: ori      r0, r0, 2
//   0x80243fe4: stw      r0, 8(r31)
//   0x80243fe8: b        0x80243ffc
//   0x80243fec: lwz      r0, 8(r31)
//   0x80243ff0: ori      r0, r0, 1
//   0x80243ff4: rlwinm   r0, r0, 0, 0x1f, 0x1d
//

// TODO: Full decompilation requires Ghidra
