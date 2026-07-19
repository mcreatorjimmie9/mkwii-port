// Function at 0x8005a220
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005a220: stwu     r1, -0x20(r1)
//   0x8005a224: mflr     r0
//   0x8005a228: stw      r0, 0x24(r1)
//   0x8005a22c: stw      r31, 0x1c(r1)
//   0x8005a230: li       r31, 0
//   0x8005a234: stw      r30, 0x18(r1)
//   0x8005a238: li       r30, 0
//   0x8005a23c: stw      r29, 0x14(r1)
//   0x8005a240: mr       r29, r3
//   0x8005a244: b        0x8005a270
//   0x8005a248: lwz      r3, 0x1c(r29)
//   0x8005a24c: lwzx     r3, r3, r31
//   0x8005a250: cmpwi    r3, 0
//   0x8005a254: beq      0x8005a268
//   0x8005a258: lwz      r12, 0(r3)
//   0x8005a25c: lwz      r12, 0x24(r12)
//   0x8005a260: mtctr    r12
//   0x8005a264: bctrl    
//   0x8005a268: addi     r31, r31, 4
//   0x8005a26c: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
