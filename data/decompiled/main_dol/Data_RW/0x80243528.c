// Function at 0x80243528
// Size: 60 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80243528: stwu     r1, -0x10(r1)
//   0x8024352c: mflr     r0
//   0x80243530: stw      r0, 0x14(r1)
//   0x80243534: lbz      r0, 0xf3(r3)
//   0x80243538: extsb.   r0, r0
//   0x8024353c: beq      0x80243550
//   0x80243540: addi     r3, r3, 0x110
//   0x80243544: bl       0x800c0a20
//   0x80243548: li       r3, 1
//   0x8024354c: b        0x80243554
//   0x80243550: li       r3, 0
//   0x80243554: lwz      r0, 0x14(r1)
//   0x80243558: mtlr     r0
//   0x8024355c: addi     r1, r1, 0x10
//   0x80243560: blr      
//

// TODO: Full decompilation requires Ghidra
