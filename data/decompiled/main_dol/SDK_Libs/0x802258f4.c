// Function at 0x802258f4
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802258f4: stwu     r1, -0x10(r1)
//   0x802258f8: mflr     r0
//   0x802258fc: stw      r0, 0x14(r1)
//   0x80225900: stw      r31, 0xc(r1)
//   0x80225904: stw      r30, 8(r1)
//   0x80225908: lwz      r30, 0x30(r3)
//   0x8022590c: cmpwi    r30, 0
//   0x80225910: bne      0x8022591c
//   0x80225914: li       r3, 0
//   0x80225918: b        0x80225970
//   0x8022591c: addi     r3, r30, 4
//   0x80225920: li       r4, 0
//   0x80225924: bl       0x800af0e0
//   0x80225928: cmpwi    r3, 0
//   0x8022592c: mr       r31, r3
//   0x80225930: bne      0x8022593c
//   0x80225934: li       r31, 0
//   0x80225938: b        0x8022596c
//   0x8022593c: lwz      r12, 0x20(r30)
//   0x80225940: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
