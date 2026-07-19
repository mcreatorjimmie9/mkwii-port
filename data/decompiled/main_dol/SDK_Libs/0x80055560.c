// Function at 0x80055560
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80055560: stwu     r1, -0x10(r1)
//   0x80055564: mflr     r0
//   0x80055568: stw      r0, 0x14(r1)
//   0x8005556c: stw      r31, 0xc(r1)
//   0x80055570: mr       r31, r4
//   0x80055574: stw      r30, 8(r1)
//   0x80055578: mr       r30, r3
//   0x8005557c: lwz      r5, 0(r3)
//   0x80055580: rlwinm.  r0, r5, 0, 0x1a, 0x1a
//   0x80055584: beq      0x800555c0
//   0x80055588: rlwinm.  r0, r5, 0, 0x19, 0x19
//   0x8005558c: beq      0x8005559c
//   0x80055590: mr       r3, r31
//   0x80055594: bl       0x80199c64
//   0x80055598: b        0x800555ec
//   0x8005559c: mr       r3, r31
//   0x800555a0: bl       0x80199c64
//   0x800555a4: lfs      f0, 0x28(r30)
//   0x800555a8: stfs     f0, 0xc(r31)
//   0x800555ac: lfs      f0, 0x38(r30)
//

// TODO: Full decompilation requires Ghidra
