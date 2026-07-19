// Function at 0x8012f918
// Size: 560 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8012f918: stwu     r1, -0x20(r1)
//   0x8012f91c: mflr     r0
//   0x8012f920: stw      r0, 0x24(r1)
//   0x8012f924: addi     r11, r1, 0x20
//   0x8012f928: bl       0x80020a3c
//   0x8012f92c: lis      r27, -0x7fd0
//   0x8012f930: cmplwi   r3, 9
//   0x8012f934: addi     r27, r27, 0x5640
//   0x8012f938: mr       r30, r3
//   0x8012f93c: addi     r31, r27, 0x54
//   0x8012f940: bge      0x8012fa60
//   0x8012f944: rlwinm   r26, r3, 2, 0x16, 0x1d
//   0x8012f948: addis    r0, r31, 3
//   0x8012f94c: add      r3, r0, r26
//   0x8012f950: lwz      r0, -0x75e4(r3)
//   0x8012f954: cmpwi    r0, 0
//   0x8012f958: bne      0x8012f960
//   0x8012f95c: b        0x8012fa60
//   0x8012f960: bl       0x801301e8
//   0x8012f964: addis    r4, r31, 3
//

// TODO: Full decompilation requires Ghidra
