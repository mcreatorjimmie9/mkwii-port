// Function at 0x8001aa30
// Size: 672 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001aa30: stwu     r1, -0x20(r1)
//   0x8001aa34: mflr     r0
//   0x8001aa38: lis      r3, 0x3fe9
//   0x8001aa3c: lfd      f2, -0x7a30(r2)
//   0x8001aa40: stfd     f1, 8(r1)
//   0x8001aa44: stw      r0, 0x24(r1)
//   0x8001aa48: addi     r0, r3, 0x21fb
//   0x8001aa4c: lwz      r3, 8(r1)
//   0x8001aa50: clrlwi   r3, r3, 1
//   0x8001aa54: cmpw     r3, r0
//   0x8001aa58: bgt      0x8001aa64
//   0x8001aa5c: bl       0x80018ba8
//   0x8001aa60: b        0x8001aae8
//   0x8001aa64: lis      r0, 0x7ff0
//   0x8001aa68: cmpw     r3, r0
//   0x8001aa6c: blt      0x8001aa78
//   0x8001aa70: fsub     f1, f1, f1
//   0x8001aa74: b        0x8001aae8
//   0x8001aa78: addi     r3, r1, 0x10
//   0x8001aa7c: bl       0x800185dc
//

// TODO: Full decompilation requires Ghidra
