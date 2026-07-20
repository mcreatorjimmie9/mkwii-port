// Function at 0x8008f220
// Size: 512 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008f220: stwu     r1, -0x10(r1)
//   0x8008f224: mflr     r0
//   0x8008f228: stw      r0, 0x14(r1)
//   0x8008f22c: stw      r31, 0xc(r1)
//   0x8008f230: stw      r30, 8(r1)
//   0x8008f234: mr       r30, r3
//   0x8008f238: lwz      r12, 0(r3)
//   0x8008f23c: lwz      r12, 0x24(r12)
//   0x8008f240: mtctr    r12
//   0x8008f244: bctrl    
//   0x8008f248: lwz      r12, 0(r3)
//   0x8008f24c: mr       r31, r3
//   0x8008f250: lwz      r12, 0x18(r12)
//   0x8008f254: mtctr    r12
//   0x8008f258: bctrl    
//   0x8008f25c: cmpwi    r3, 0
//   0x8008f260: beq      0x8008f28c
//   0x8008f264: lbz      r0, 0x7b(r30)
//   0x8008f268: cmpwi    r0, 0
//   0x8008f26c: beq      0x8008f278
//

// TODO: Full decompilation requires Ghidra
