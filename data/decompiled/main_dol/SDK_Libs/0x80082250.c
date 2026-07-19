// Function at 0x80082250
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80082250: stwu     r1, -0x20(r1)
//   0x80082254: mflr     r0
//   0x80082258: lwz      r10, 0x18(r3)
//   0x8008225c: stw      r0, 0x24(r1)
//   0x80082260: srwi     r7, r10, 0x1c
//   0x80082264: stw      r31, 0x1c(r1)
//   0x80082268: addi     r0, r7, -8
//   0x8008226c: cmplwi   r0, 2
//   0x80082270: mr       r31, r4
//   0x80082274: stw      r30, 0x18(r1)
//   0x80082278: mr       r30, r3
//   0x8008227c: bgt      0x800822b8
//   0x80082280: mr       r3, r31
//   0x80082284: bl       0x80170d20
//   0x80082288: lwz      r0, 0x18(r30)
//   0x8008228c: stw      r3, 8(r1)
//   0x80082290: mr       r3, r31
//   0x80082294: lwz      r4, 0(r30)
//   0x80082298: srwi     r7, r0, 0x1c
//   0x8008229c: lhz      r5, 8(r30)
//

// TODO: Full decompilation requires Ghidra
