// Function at 0x800211e4
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800211e4: stwu     r1, -0x10(r1)
//   0x800211e8: mflr     r0
//   0x800211ec: stw      r0, 0x14(r1)
//   0x800211f0: stw      r31, 0xc(r1)
//   0x800211f4: mr       r31, r4
//   0x800211f8: stw      r30, 8(r1)
//   0x800211fc: mr       r30, r3
//   0x80021200: bl       0x801a650c
//   0x80021204: lwz      r5, -0x6b5c(r13)
//   0x80021208: addi     r0, r31, 3
//   0x8002120c: mr       r31, r3
//   0x80021210: mr       r4, r30
//   0x80021214: rlwinm   r3, r5, 0x10, 0x1f, 0x1f
//   0x80021218: rlwinm   r5, r0, 0, 0, 0x1d
//   0x8002121c: neg      r0, r3
//   0x80021220: rlwinm   r3, r0, 0, 0x14, 0x14
//   0x80021224: addis    r3, r3, 0xd1
//   0x80021228: addi     r0, r3, 0x1000
//   0x8002122c: rlwinm   r3, r0, 6, 2, 0x17
//   0x80021230: bl       0x80021948
//

// TODO: Full decompilation requires Ghidra
