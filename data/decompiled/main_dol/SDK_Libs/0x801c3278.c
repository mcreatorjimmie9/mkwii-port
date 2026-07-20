// Function at 0x801c3278
// Size: 4220 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x470 bytes
//
// Disassembly (first 20 instructions):
//   0x801c3278: stwu     r1, -0x470(r1)
//   0x801c327c: mflr     r0
//   0x801c3280: stw      r0, 0x474(r1)
//   0x801c3284: addi     r11, r1, 0x470
//   0x801c3288: bl       0x80020a34
//   0x801c328c: lis      r6, -0x7fcb
//   0x801c3290: slwi     r0, r3, 2
//   0x801c3294: addi     r6, r6, -0x3a50
//   0x801c3298: mr       r31, r3
//   0x801c329c: lwzx     r29, r6, r0
//   0x801c32a0: mr       r27, r4
//   0x801c32a4: mr       r28, r5
//   0x801c32a8: bl       0x801a650c
//   0x801c32ac: lwz      r26, 0x838(r29)
//   0x801c32b0: lbz      r25, 0x8cc(r29)
//   0x801c32b4: lwz      r24, 0x8bc(r29)
//   0x801c32b8: lwz      r30, 0x8dc(r29)
//   0x801c32bc: bl       0x801a6534
//   0x801c32c0: cmpwi    r24, -1
//   0x801c32c4: beq      0x801c42bc
//

// TODO: Full decompilation requires Ghidra
