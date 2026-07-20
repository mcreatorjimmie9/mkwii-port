// Function at 0x8006bcc0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006bcc0: stwu     r1, -0x10(r1)
//   0x8006bcc4: mflr     r0
//   0x8006bcc8: stw      r0, 0x14(r1)
//   0x8006bccc: rlwinm   r0, r6, 0x1f, 0x1d, 0x1f
//   0x8006bcd0: cmplwi   r0, 7
//   0x8006bcd4: stw      r31, 0xc(r1)
//   0x8006bcd8: mr       r31, r3
//   0x8006bcdc: bne      0x8006bce8
//   0x8006bce0: li       r3, 0
//   0x8006bce4: b        0x8006bd48
//   0x8006bce8: cmpwi    r4, 0
//   0x8006bcec: beq      0x8006bd10
//   0x8006bcf0: lis      r6, -0x7fdc
//   0x8006bcf4: slwi     r0, r0, 2
//   0x8006bcf8: addi     r6, r6, 0x7bb0
//   0x8006bcfc: mr       r4, r5
//   0x8006bd00: lwzx     r12, r6, r0
//   0x8006bd04: mtctr    r12
//   0x8006bd08: bctrl    
//   0x8006bd0c: b        0x8006bd2c
//

// TODO: Full decompilation requires Ghidra
