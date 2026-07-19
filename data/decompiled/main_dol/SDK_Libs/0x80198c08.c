// Function at 0x80198c08
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80198c08: stwu     r1, -0x10(r1)
//   0x80198c0c: mflr     r0
//   0x80198c10: add      r4, r4, r3
//   0x80198c14: stw      r0, 0x14(r1)
//   0x80198c18: addi     r0, r3, 3
//   0x80198c1c: rlwinm   r6, r4, 0, 0, 0x1d
//   0x80198c20: stw      r31, 0xc(r1)
//   0x80198c24: rlwinm   r31, r0, 0, 0, 0x1d
//   0x80198c28: cmplw    r31, r6
//   0x80198c2c: bgt      0x80198c3c
//   0x80198c30: subf     r0, r31, r6
//   0x80198c34: cmplwi   r0, 0x64
//   0x80198c38: bge      0x80198c44
//   0x80198c3c: li       r3, 0
//   0x80198c40: b        0x80198ca4
//   0x80198c44: lis      r4, 0x4558
//   0x80198c48: mr       r7, r5
//   0x80198c4c: mr       r3, r31
//   0x80198c50: addi     r5, r31, 0x50
//   0x80198c54: addi     r4, r4, 0x5048
//

// TODO: Full decompilation requires Ghidra
