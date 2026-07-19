// Function at 0x800a7620
// Size: 512 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800a7620: stwu     r1, -0x30(r1)
//   0x800a7624: mflr     r0
//   0x800a7628: stw      r0, 0x34(r1)
//   0x800a762c: addi     r11, r1, 0x30
//   0x800a7630: bl       0x80020a38
//   0x800a7634: lwz      r4, 0x158(r3)
//   0x800a7638: mr       r31, r3
//   0x800a763c: lwz      r0, 0x160(r3)
//   0x800a7640: addi     r4, r4, 1
//   0x800a7644: stw      r4, 0x158(r3)
//   0x800a7648: cmpw     r4, r0
//   0x800a764c: ble      0x800a7698
//   0x800a7650: lbz      r0, 0xe0(r3)
//   0x800a7654: cmpwi    r0, 0
//   0x800a7658: beq      0x800a7698
//   0x800a765c: lis      r4, -0x8000
//   0x800a7660: lwz      r5, 0x12c(r3)
//   0x800a7664: addi     r0, r4, -1
//   0x800a7668: lwz      r4, 0x15c(r3)
//   0x800a766c: cmpw     r5, r0
//

// TODO: Full decompilation requires Ghidra
