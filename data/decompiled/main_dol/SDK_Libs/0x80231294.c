// Function at 0x80231294
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80231294: stwu     r1, -0x10(r1)
//   0x80231298: mflr     r0
//   0x8023129c: li       r5, 0
//   0x802312a0: stw      r0, 0x14(r1)
//   0x802312a4: stw      r31, 0xc(r1)
//   0x802312a8: mr       r31, r3
//   0x802312ac: lwz      r4, 0x14(r3)
//   0x802312b0: cmpwi    r4, 1
//   0x802312b4: ble      0x802312c4
//   0x802312b8: addi     r0, r4, -1
//   0x802312bc: stw      r0, 0x14(r3)
//   0x802312c0: b        0x80231338
//   0x802312c4: bl       0x801dce48
//   0x802312c8: addi     r0, r3, 0x15
//   0x802312cc: cmplwi   r0, 5
//   0x802312d0: ble      0x8023130c
//   0x802312d4: cmpwi    r3, 0
//   0x802312d8: beq      0x802312f8
//   0x802312dc: cmpwi    r3, -9
//   0x802312e0: beq      0x802312f8
//

// TODO: Full decompilation requires Ghidra
