// Function at 0x800ef6e4
// Size: 172 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800ef6e4: stwu     r1, -0x10(r1)
//   0x800ef6e8: mflr     r0
//   0x800ef6ec: stw      r0, 0x14(r1)
//   0x800ef6f0: stw      r31, 0xc(r1)
//   0x800ef6f4: mr       r31, r3
//   0x800ef6f8: lwz      r7, 0(r3)
//   0x800ef6fc: addi     r8, r7, -1
//   0x800ef700: cmpw     r4, r8
//   0x800ef704: bge      0x800ef770
//   0x800ef708: cmpwi    r4, 0
//   0x800ef70c: blt      0x800ef718
//   0x800ef710: cmpw     r4, r7
//   0x800ef714: blt      0x800ef720
//   0x800ef718: li       r6, 0
//   0x800ef71c: b        0x800ef730
//   0x800ef720: lwz      r0, 8(r3)
//   0x800ef724: lwz      r5, 0x14(r3)
//   0x800ef728: mullw    r0, r0, r4
//   0x800ef72c: add      r6, r5, r0
//   0x800ef730: addic.   r5, r4, 1
//

// TODO: Full decompilation requires Ghidra
