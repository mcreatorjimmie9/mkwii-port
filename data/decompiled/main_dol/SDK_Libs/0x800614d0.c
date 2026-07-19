// Function at 0x800614d0
// Size: 1104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x90 bytes
//
// Disassembly (first 20 instructions):
//   0x800614d0: stwu     r1, -0x90(r1)
//   0x800614d4: mflr     r0
//   0x800614d8: cmpwi    r3, 0
//   0x800614dc: stw      r0, 0x94(r1)
//   0x800614e0: stw      r31, 0x8c(r1)
//   0x800614e4: stw      r30, 0x88(r1)
//   0x800614e8: mr       r30, r5
//   0x800614ec: stw      r29, 0x84(r1)
//   0x800614f0: mr       r29, r4
//   0x800614f4: stw      r28, 0x80(r1)
//   0x800614f8: mr       r28, r3
//   0x800614fc: beq      0x800618f0
//   0x80061500: lis      r31, -0x7fd5
//   0x80061504: addi     r4, r31, 0x7734
//   0x80061508: lhz      r0, 0x7734(r31)
//   0x8006150c: lhz      r3, 2(r4)
//   0x80061510: clrlwi.  r0, r0, 0x1f
//   0x80061514: mulli    r0, r3, 0x30
//   0x80061518: add      r3, r4, r0
//   0x8006151c: addi     r3, r3, 0x34
//

// TODO: Full decompilation requires Ghidra
