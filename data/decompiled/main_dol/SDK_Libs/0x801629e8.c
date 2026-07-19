// Function at 0x801629e8
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801629e8: stwu     r1, -0x20(r1)
//   0x801629ec: mflr     r0
//   0x801629f0: stw      r0, 0x24(r1)
//   0x801629f4: stw      r31, 0x1c(r1)
//   0x801629f8: stw      r30, 0x18(r1)
//   0x801629fc: stw      r29, 0x14(r1)
//   0x80162a00: mr       r29, r3
//   0x80162a04: bl       0x801a650c
//   0x80162a08: lwz      r0, 0xc(r29)
//   0x80162a0c: mr       r30, r3
//   0x80162a10: cmpwi    r0, 3
//   0x80162a14: bne      0x80162a20
//   0x80162a18: li       r31, 1
//   0x80162a1c: b        0x80162a88
//   0x80162a20: lwz      r0, 0xc(r29)
//   0x80162a24: cmpwi    r0, 5
//   0x80162a28: bne      0x80162a34
//   0x80162a2c: li       r31, 4
//   0x80162a30: b        0x80162a88
//   0x80162a34: lis      r31, -0x7fcc
//

// TODO: Full decompilation requires Ghidra
