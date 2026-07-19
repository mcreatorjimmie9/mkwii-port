// Function at 0x8000bacc
// Size: 492 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000bacc: stwu     r1, -0x10(r1)
//   0x8000bad0: mflr     r0
//   0x8000bad4: lis      r6, -0x7fdc
//   0x8000bad8: li       r7, 0
//   0x8000badc: stw      r0, 0x14(r1)
//   0x8000bae0: addi     r6, r6, 0x5d10
//   0x8000bae4: stw      r31, 0xc(r1)
//   0x8000bae8: mr       r31, r3
//   0x8000baec: stw      r30, 8(r1)
//   0x8000baf0: b        0x8000bafc
//   0x8000baf4: addi     r6, r6, 4
//   0x8000baf8: addi     r7, r7, 1
//   0x8000bafc: lwz      r0, 0(r6)
//   0x8000bb00: cmplw    r5, r0
//   0x8000bb04: bgt      0x8000baf4
//   0x8000bb08: addi     r6, r4, -4
//   0x8000bb0c: lwz      r4, -4(r4)
//   0x8000bb10: slwi     r0, r7, 3
//   0x8000bb14: add      r3, r3, r0
//   0x8000bb18: lwz      r0, 0xc(r4)
//

// TODO: Full decompilation requires Ghidra
