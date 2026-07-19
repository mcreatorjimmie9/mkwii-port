// Function at 0x800b7fd0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800b7fd0: stwu     r1, -0x20(r1)
//   0x800b7fd4: mflr     r0
//   0x800b7fd8: stw      r0, 0x24(r1)
//   0x800b7fdc: lwz      r0, 0x48(r3)
//   0x800b7fe0: stw      r31, 0x1c(r1)
//   0x800b7fe4: mr       r31, r3
//   0x800b7fe8: cmpwi    r0, 0
//   0x800b7fec: beq      0x800b8008
//   0x800b7ff0: mr       r3, r0
//   0x800b7ff4: lwz      r12, 0(r3)
//   0x800b7ff8: lwz      r12, 0x34(r12)
//   0x800b7ffc: mtctr    r12
//   0x800b8000: bctrl    
//   0x800b8004: b        0x800b800c
//   0x800b8008: li       r3, 0
//   0x800b800c: xoris    r3, r3, 0x8000
//   0x800b8010: lis      r0, 0x4330
//   0x800b8014: stw      r3, 0xc(r1)
//   0x800b8018: lfd      f2, -0x6c98(r2)
//   0x800b801c: stw      r0, 8(r1)
//

// TODO: Full decompilation requires Ghidra
