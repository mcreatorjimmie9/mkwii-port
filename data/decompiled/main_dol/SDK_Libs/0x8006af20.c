// Function at 0x8006af20
// Size: 352 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x8006af20: stwu     r1, -0x50(r1)
//   0x8006af24: mflr     r0
//   0x8006af28: stw      r0, 0x54(r1)
//   0x8006af2c: rlwinm   r0, r6, 0x1f, 0x1d, 0x1f
//   0x8006af30: cmplwi   r0, 7
//   0x8006af34: stw      r31, 0x4c(r1)
//   0x8006af38: mr       r31, r5
//   0x8006af3c: stw      r30, 0x48(r1)
//   0x8006af40: mr       r30, r4
//   0x8006af44: stw      r29, 0x44(r1)
//   0x8006af48: mr       r29, r3
//   0x8006af4c: bne      0x8006af58
//   0x8006af50: li       r3, 0
//   0x8006af54: b        0x8006b060
//   0x8006af58: lfs      f1, 8(r5)
//   0x8006af5c: addi     r3, r1, 0xc
//   0x8006af60: lfs      f0, -0x72c0(r2)
//   0x8006af64: addi     r4, r1, 8
//   0x8006af68: fmuls    f1, f0, f1
//   0x8006af6c: bl       0x80085140
//

// TODO: Full decompilation requires Ghidra
