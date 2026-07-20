// Function at 0x800257f0
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xa0 bytes
//
// Disassembly (first 20 instructions):
//   0x800257f0: stwu     r1, -0xa0(r1)
//   0x800257f4: mflr     r0
//   0x800257f8: stw      r0, 0xa4(r1)
//   0x800257fc: stfd     f31, 0x90(r1)
//   0x80025800: xscmpgedp vs31, f1, f0
//   0x80025804: stw      r31, 0x8c(r1)
//   0x80025808: stw      r30, 0x88(r1)
//   0x8002580c: stw      r29, 0x84(r1)
//   0x80025810: stw      r28, 0x80(r1)
//   0x80025814: mr       r28, r3
//   0x80025818: addi     r3, r1, 0xc
//   0x8002581c: bl       0x800b7e80
//   0x80025820: lwz      r0, 0(r28)
//   0x80025824: cmpwi    r0, 0
//   0x80025828: bne      0x8002583c
//   0x8002582c: addi     r3, r1, 0xc
//   0x80025830: li       r4, -1
//   0x80025834: bl       0x800b7ee0
//   0x80025838: b        0x8002595c
//   0x8002583c: stw      r0, 0x54(r1)
//

// TODO: Full decompilation requires Ghidra
