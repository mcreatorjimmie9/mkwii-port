// Function at 0x8007c300
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8007c300: stwu     r1, -0x20(r1)
//   0x8007c304: mflr     r0
//   0x8007c308: cmpwi    r4, 0
//   0x8007c30c: stw      r0, 0x24(r1)
//   0x8007c310: stw      r31, 0x1c(r1)
//   0x8007c314: stw      r30, 0x18(r1)
//   0x8007c318: mr       r30, r4
//   0x8007c31c: stw      r29, 0x14(r1)
//   0x8007c320: mr       r29, r3
//   0x8007c324: beq      0x8007c3ac
//   0x8007c328: addi     r4, r4, 1
//   0x8007c32c: lhz      r0, 0xfc(r3)
//   0x8007c330: slwi     r31, r4, 1
//   0x8007c334: cmplw    r31, r0
//   0x8007c338: ble      0x8007c3ac
//   0x8007c33c: lwz      r12, 0(r3)
//   0x8007c340: lwz      r12, 0x78(r12)
//   0x8007c344: mtctr    r12
//   0x8007c348: bctrl    
//   0x8007c34c: addi     r0, r30, 1
//

// TODO: Full decompilation requires Ghidra
