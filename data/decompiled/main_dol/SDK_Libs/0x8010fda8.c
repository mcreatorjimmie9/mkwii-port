// Function at 0x8010fda8
// Size: 840 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8010fda8: stwu     r1, -0x30(r1)
//   0x8010fdac: mflr     r0
//   0x8010fdb0: stw      r0, 0x34(r1)
//   0x8010fdb4: addi     r11, r1, 0x30
//   0x8010fdb8: bl       0x80020a30
//   0x8010fdbc: lwz      r0, 0(r5)
//   0x8010fdc0: mr       r25, r3
//   0x8010fdc4: mr       r26, r4
//   0x8010fdc8: mr       r27, r5
//   0x8010fdcc: cmpwi    r0, 3
//   0x8010fdd0: blt      0x8010fddc
//   0x8010fdd4: li       r3, 0
//   0x8010fdd8: b        0x801100d8
//   0x8010fddc: lwz      r24, 0x578(r4)
//   0x8010fde0: subfic   r30, r24, 0x578
//   0x8010fde4: cmpwi    r30, 0x20
//   0x8010fde8: bge      0x8010fdf4
//   0x8010fdec: li       r3, 0
//   0x8010fdf0: b        0x801100d8
//   0x8010fdf4: lis      r28, -0x7fd8
//

// TODO: Full decompilation requires Ghidra
