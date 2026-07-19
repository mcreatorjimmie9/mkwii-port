// Function at 0x801a689c
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801a689c: stwu     r1, -0x20(r1)
//   0x801a68a0: mflr     r0
//   0x801a68a4: stw      r0, 0x24(r1)
//   0x801a68a8: stw      r31, 0x1c(r1)
//   0x801a68ac: mr       r31, r3
//   0x801a68b0: stw      r30, 0x18(r1)
//   0x801a68b4: stw      r29, 0x14(r1)
//   0x801a68b8: bl       0x801a650c
//   0x801a68bc: lis      r4, -0x8000
//   0x801a68c0: mr       r30, r3
//   0x801a68c4: lwz      r29, 0xc4(r4)
//   0x801a68c8: lwz      r5, 0xc8(r4)
//   0x801a68cc: or       r0, r29, r5
//   0x801a68d0: andc     r3, r31, r0
//   0x801a68d4: or       r31, r31, r29
//   0x801a68d8: stw      r31, 0xc4(r4)
//   0x801a68dc: or       r31, r31, r5
//   0x801a68e0: b        0x801a68ec
//   0x801a68e4: mr       r4, r31
//   0x801a68e8: bl       0x801a6640
//

// TODO: Full decompilation requires Ghidra
