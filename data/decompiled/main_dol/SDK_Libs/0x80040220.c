// Function at 0x80040220
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80040220: stwu     r1, -0x10(r1)
//   0x80040224: mflr     r0
//   0x80040228: stw      r0, 0x14(r1)
//   0x8004022c: stw      r31, 0xc(r1)
//   0x80040230: mr       r31, r4
//   0x80040234: stw      r30, 8(r1)
//   0x80040238: mr       r30, r3
//   0x8004023c: lwz      r6, 0(r4)
//   0x80040240: lhz      r7, 0x42(r6)
//   0x80040244: lwzx     r6, r5, r7
//   0x80040248: b        0x80040254
//   0x8004024c: nop      
//   0x80040250: lwzx     r6, r6, r7
//   0x80040254: cmpwi    r6, 0
//   0x80040258: beq      0x80040268
//   0x8004025c: lwz      r0, 0xc(r6)
//   0x80040260: cmpwi    r0, 1
//   0x80040264: bne      0x80040250
//   0x80040268: cmpwi    r6, 0
//   0x8004026c: beq      0x80040294
//

// TODO: Full decompilation requires Ghidra
