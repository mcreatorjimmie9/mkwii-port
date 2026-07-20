// Function at 0x8013362c
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8013362c: stwu     r1, -0x10(r1)
//   0x80133630: mflr     r0
//   0x80133634: stw      r0, 0x14(r1)
//   0x80133638: stw      r31, 0xc(r1)
//   0x8013363c: stw      r30, 8(r1)
//   0x80133640: lis      r30, -0x7fcd
//   0x80133644: addi     r30, r30, 0x1b18
//   0x80133648: lwz      r3, 4(r30)
//   0x8013364c: bl       0x8013c630
//   0x80133650: cmpwi    r3, 0
//   0x80133654: stw      r3, 4(r30)
//   0x80133658: beq      0x801336d0
//   0x8013365c: addi     r3, r3, 2
//   0x80133660: bl       0x801389f0
//   0x80133664: clrlwi.  r0, r3, 0x18
//   0x80133668: beq      0x80133678
//   0x8013366c: li       r0, 0
//   0x80133670: stb      r0, 0x78(r30)
//   0x80133674: b        0x80133680
//   0x80133678: li       r0, 1
//

// TODO: Full decompilation requires Ghidra
