// Function at 0x80199604
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80199604: stwu     r1, -0x10(r1)
//   0x80199608: mflr     r0
//   0x8019960c: stw      r0, 0x14(r1)
//   0x80199610: srawi    r0, r4, 0x1f
//   0x80199614: stw      r31, 0xc(r1)
//   0x80199618: xor      r31, r0, r4
//   0x8019961c: subf     r31, r0, r31
//   0x80199620: stw      r30, 8(r1)
//   0x80199624: mr       r30, r3
//   0x80199628: bl       0x801a650c
//   0x8019962c: lwz      r0, 0x3c(r30)
//   0x80199630: addi     r4, r31, -1
//   0x80199634: nor      r5, r4, r4
//   0x80199638: lwz      r6, 0x40(r30)
//   0x8019963c: add      r4, r31, r0
//   0x80199640: addi     r0, r4, -1
//   0x80199644: and      r0, r5, r0
//   0x80199648: cmplw    r0, r6
//   0x8019964c: ble      0x80199658
//   0x80199650: li       r31, 0
//

// TODO: Full decompilation requires Ghidra
