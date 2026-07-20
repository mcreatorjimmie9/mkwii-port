// Function at 0x80243730
// Size: 820 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80243730: stwu     r1, -0x50(r1)
//   0x80243734: mflr     r0
//   0x80243738: cmplwi   r4, 9
//   0x8024373c: stw      r0, 0x54(r1)
//   0x80243740: mr       r0, r5
//   0x80243744: stw      r31, 0x4c(r1)
//   0x80243748: mr       r31, r6
//   0x8024374c: stw      r30, 0x48(r1)
//   0x80243750: mr       r30, r3
//   0x80243754: stw      r5, 8(r1)
//   0x80243758: bge      0x8024377c
//   0x8024375c: addi     r6, r4, -1
//   0x80243760: li       r7, 1
//   0x80243764: lwz      r5, 0xcc(r3)
//   0x80243768: slw      r6, r7, r6
//   0x8024376c: and.     r5, r6, r5
//   0x80243770: beq      0x8024377c
//   0x80243774: li       r5, 1
//   0x80243778: b        0x80243780
//   0x8024377c: li       r5, 0
//

// TODO: Full decompilation requires Ghidra
