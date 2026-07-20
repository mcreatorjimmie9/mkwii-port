// Function at 0x800fc204
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800fc204: stwu     r1, -0x20(r1)
//   0x800fc208: mflr     r0
//   0x800fc20c: cmpwi    r3, 0
//   0x800fc210: stw      r0, 0x24(r1)
//   0x800fc214: stw      r31, 0x1c(r1)
//   0x800fc218: mr       r31, r4
//   0x800fc21c: stw      r30, 0x18(r1)
//   0x800fc220: mr       r30, r3
//   0x800fc224: beq      0x800fc234
//   0x800fc228: lwz      r5, 0(r3)
//   0x800fc22c: cmpwi    r5, 0
//   0x800fc230: bne      0x800fc23c
//   0x800fc234: li       r3, 0
//   0x800fc238: b        0x800fc2ac
//   0x800fc23c: lwz      r0, 0x108(r5)
//   0x800fc240: cmpwi    r0, 0
//   0x800fc244: beq      0x800fc250
//   0x800fc248: li       r3, 0
//   0x800fc24c: b        0x800fc2ac
//   0x800fc250: addi     r5, r1, 8
//

// TODO: Full decompilation requires Ghidra
