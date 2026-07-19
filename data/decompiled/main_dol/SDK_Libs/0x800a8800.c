// Function at 0x800a8800
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a8800: stwu     r1, -0x20(r1)
//   0x800a8804: mflr     r0
//   0x800a8808: stw      r0, 0x24(r1)
//   0x800a880c: stw      r31, 0x1c(r1)
//   0x800a8810: stw      r30, 0x18(r1)
//   0x800a8814: stw      r29, 0x14(r1)
//   0x800a8818: mr       r29, r3
//   0x800a881c: bl       0x8008ee40
//   0x800a8820: mr       r31, r29
//   0x800a8824: li       r30, 0
//   0x800a8828: mr       r4, r30
//   0x800a882c: addi     r3, r29, 0x100
//   0x800a8830: bl       0x800a7fb0
//   0x800a8834: cmpwi    r3, 0
//   0x800a8838: beq      0x800a8854
//   0x800a883c: lwz      r3, 0xe48(r31)
//   0x800a8840: lwz      r0, 0xe44(r31)
//   0x800a8844: cmpw     r3, r0
//   0x800a8848: bge      0x800a8854
//   0x800a884c: addi     r0, r3, 1
//

// TODO: Full decompilation requires Ghidra
