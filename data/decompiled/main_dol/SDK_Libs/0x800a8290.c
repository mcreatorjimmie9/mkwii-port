// Function at 0x800a8290
// Size: 336 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a8290: stwu     r1, -0x10(r1)
//   0x800a8294: mflr     r0
//   0x800a8298: stw      r0, 0x14(r1)
//   0x800a829c: li       r0, 1
//   0x800a82a0: stw      r31, 0xc(r1)
//   0x800a82a4: mr       r31, r3
//   0x800a82a8: lwz      r4, 0x10(r3)
//   0x800a82ac: stb      r0, 0x121(r4)
//   0x800a82b0: lwz      r3, 0x14(r3)
//   0x800a82b4: cmpwi    r3, 0
//   0x800a82b8: beq      0x800a8324
//   0x800a82bc: lwz      r12, 0(r3)
//   0x800a82c0: lwz      r12, 0x54(r12)
//   0x800a82c4: mtctr    r12
//   0x800a82c8: bctrl    
//   0x800a82cc: cmpwi    r3, 0
//   0x800a82d0: beq      0x800a8324
//   0x800a82d4: lwz      r3, 0x14(r31)
//   0x800a82d8: lwz      r12, 0(r3)
//   0x800a82dc: lwz      r12, 0x28(r12)
//

// TODO: Full decompilation requires Ghidra
