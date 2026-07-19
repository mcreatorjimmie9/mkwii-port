// Function at 0x8005ae20
// Size: 368 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005ae20: stwu     r1, -0x10(r1)
//   0x8005ae24: mflr     r0
//   0x8005ae28: stw      r0, 0x14(r1)
//   0x8005ae2c: slwi     r0, r5, 1
//   0x8005ae30: stw      r31, 0xc(r1)
//   0x8005ae34: mr       r31, r4
//   0x8005ae38: lwz      r6, 0x14(r3)
//   0x8005ae3c: lhzx     r5, r6, r0
//   0x8005ae40: rlwinm.  r0, r5, 0, 0x10, 0x11
//   0x8005ae44: beq      0x8005ae58
//   0x8005ae48: li       r0, 0
//   0x8005ae4c: stw      r0, 0(r4)
//   0x8005ae50: mr       r3, r31
//   0x8005ae54: b        0x8005ae80
//   0x8005ae58: lwz      r6, 0x30(r3)
//   0x8005ae5c: cmpwi    r6, 0
//   0x8005ae60: beq      0x8005ae70
//   0x8005ae64: mulli    r0, r5, 0xe8
//   0x8005ae68: add      r3, r6, r0
//   0x8005ae6c: b        0x8005ae80
//

// TODO: Full decompilation requires Ghidra
