// Function at 0x8005d720
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d720: stwu     r1, -0x20(r1)
//   0x8005d724: mflr     r0
//   0x8005d728: stw      r0, 0x24(r1)
//   0x8005d72c: stw      r31, 0x1c(r1)
//   0x8005d730: mr       r31, r3
//   0x8005d734: stw      r30, 0x18(r1)
//   0x8005d738: stw      r29, 0x14(r1)
//   0x8005d73c: slwi     r29, r4, 2
//   0x8005d740: stw      r28, 0x10(r1)
//   0x8005d744: lwz      r5, 0x1c(r3)
//   0x8005d748: lwzx     r28, r5, r29
//   0x8005d74c: cmpwi    r28, 0
//   0x8005d750: beq      0x8005d818
//   0x8005d754: lwz      r12, 0(r28)
//   0x8005d758: lis      r30, 1
//   0x8005d75c: mr       r3, r28
//   0x8005d760: mr       r6, r31
//   0x8005d764: lwz      r12, 0xc(r12)
//   0x8005d768: addi     r4, r30, 3
//   0x8005d76c: li       r5, 0
//

// TODO: Full decompilation requires Ghidra
