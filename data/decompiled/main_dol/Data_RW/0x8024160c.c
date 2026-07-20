// Function at 0x8024160c
// Size: 60 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8024160c: stwu     r1, -0x10(r1)
//   0x80241610: mflr     r0
//   0x80241614: addi     r3, r3, 0xc
//   0x80241618: stw      r0, 0x14(r1)
//   0x8024161c: bl       0x8015be84
//   0x80241620: cntlzw   r0, r3
//   0x80241624: srwi     r3, r0, 5
//   0x80241628: lwz      r0, 0x14(r1)
//   0x8024162c: mtlr     r0
//   0x80241630: addi     r1, r1, 0x10
//   0x80241634: blr      
//   0x80241638: li       r3, 0x20
//   0x8024163c: blr      
//   0x80241640: mr       r3, r4
//   0x80241644: b        0x8015c240
//

// TODO: Full decompilation requires Ghidra
