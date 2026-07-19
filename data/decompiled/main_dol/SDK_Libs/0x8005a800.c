// Function at 0x8005a800
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005a800: stwu     r1, -0x20(r1)
//   0x8005a804: mflr     r0
//   0x8005a808: stw      r0, 0x24(r1)
//   0x8005a80c: addi     r11, r1, 0x20
//   0x8005a810: bl       0x80020a3c
//   0x8005a814: lwz      r6, 0x18(r3)
//   0x8005a818: mr       r26, r3
//   0x8005a81c: mr       r27, r4
//   0x8005a820: mr       r28, r5
//   0x8005a824: addi     r29, r6, -1
//   0x8005a828: slwi     r30, r5, 1
//   0x8005a82c: slwi     r31, r29, 2
//   0x8005a830: b        0x8005a884
//   0x8005a834: lwz      r3, 0x1c(r26)
//   0x8005a838: lwzx     r3, r3, r31
//   0x8005a83c: cmpwi    r3, 0
//   0x8005a840: beq      0x8005a87c
//   0x8005a844: lwz      r0, 0x14(r3)
//   0x8005a848: lhzx     r0, r30, r0
//   0x8005a84c: rlwinm.  r0, r0, 0, 0x10, 0x11
//

// TODO: Full decompilation requires Ghidra
