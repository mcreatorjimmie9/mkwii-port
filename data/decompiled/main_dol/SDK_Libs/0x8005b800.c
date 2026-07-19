// Function at 0x8005b800
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b800: stwu     r1, -0x10(r1)
//   0x8005b804: mflr     r0
//   0x8005b808: stw      r0, 0x14(r1)
//   0x8005b80c: stw      r31, 0xc(r1)
//   0x8005b810: li       r31, 0
//   0x8005b814: stw      r30, 8(r1)
//   0x8005b818: mr       r30, r3
//   0x8005b81c: b        0x8005b83c
//   0x8005b820: lwz      r12, 0(r30)
//   0x8005b824: mr       r3, r30
//   0x8005b828: mr       r4, r31
//   0x8005b82c: lwz      r12, 0x40(r12)
//   0x8005b830: mtctr    r12
//   0x8005b834: bctrl    
//   0x8005b838: addi     r31, r31, 1
//   0x8005b83c: lwz      r0, 0x18(r30)
//   0x8005b840: cmpw     r31, r0
//   0x8005b844: blt      0x8005b820
//   0x8005b848: lwz      r0, 0x14(r1)
//   0x8005b84c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
