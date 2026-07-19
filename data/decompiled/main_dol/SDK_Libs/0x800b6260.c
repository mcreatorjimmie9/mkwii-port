// Function at 0x800b6260
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800b6260: stwu     r1, -0x20(r1)
//   0x800b6264: mflr     r0
//   0x800b6268: mr       r7, r4
//   0x800b626c: mr       r6, r5
//   0x800b6270: stw      r0, 0x24(r1)
//   0x800b6274: stw      r31, 0x1c(r1)
//   0x800b6278: mr       r31, r1
//   0x800b627c: stw      r30, 0x18(r1)
//   0x800b6280: stw      r29, 0x14(r1)
//   0x800b6284: mr       r29, r3
//   0x800b6288: lwz      r30, -0x6980(r13)
//   0x800b628c: cmpwi    r30, 0
//   0x800b6290: beq      0x800b6298
//   0x800b6294: b        0x800b62b0
//   0x800b6298: lwz      r3, -0x7e30(r13)
//   0x800b629c: lwz      r0, 0(r1)
//   0x800b62a0: neg      r30, r3
//   0x800b62a4: rlwinm   r30, r30, 0, 0, 0x1c
//   0x800b62a8: stwux    r0, r1, r30
//   0x800b62ac: addi     r30, r1, 8
//

// TODO: Full decompilation requires Ghidra
