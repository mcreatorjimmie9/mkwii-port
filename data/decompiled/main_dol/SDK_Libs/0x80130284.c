// Function at 0x80130284
// Size: 920 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80130284: stwu     r1, -0x60(r1)
//   0x80130288: mflr     r0
//   0x8013028c: stw      r0, 0x64(r1)
//   0x80130290: addi     r11, r1, 0x60
//   0x80130294: bl       0x80020a0c
//   0x80130298: lbz      r0, 0x1e(r4)
//   0x8013029c: mr       r15, r4
//   0x801302a0: li       r19, 0
//   0x801302a4: cmplwi   r0, 2
//   0x801302a8: beq      0x801302b4
//   0x801302ac: li       r3, 0
//   0x801302b0: b        0x80130604
//   0x801302b4: addi     r20, r3, 1
//   0x801302b8: rlwinm   r0, r3, 1, 0xf, 0x1e
//   0x801302bc: lis      r31, -0x7fcd
//   0x801302c0: add      r22, r4, r3
//   0x801302c4: clrlwi   r16, r20, 0x10
//   0x801302c8: rlwinm   r23, r3, 2, 0xe, 0x1d
//   0x801302cc: add      r21, r4, r0
//   0x801302d0: addi     r31, r31, -0x1ee0
//

// TODO: Full decompilation requires Ghidra
