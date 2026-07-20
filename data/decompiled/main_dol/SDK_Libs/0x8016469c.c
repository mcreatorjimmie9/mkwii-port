// Function at 0x8016469c
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8016469c: stwu     r1, -0x10(r1)
//   0x801646a0: mflr     r0
//   0x801646a4: lis      r5, -0x7fcc
//   0x801646a8: lis      r6, -0x7fcc
//   0x801646ac: stw      r0, 0x14(r1)
//   0x801646b0: addi     r5, r5, -0xe20
//   0x801646b4: stw      r31, 0xc(r1)
//   0x801646b8: mr       r31, r4
//   0x801646bc: lwz      r0, -0xe00(r6)
//   0x801646c0: li       r6, 0
//   0x801646c4: stb      r6, -0x64e8(r13)
//   0x801646c8: stw      r0, 4(r5)
//   0x801646cc: lwz      r5, 0xc(r4)
//   0x801646d0: addis    r0, r5, 0x115
//   0x801646d4: cmplwi   r0, 0xdaed
//   0x801646d8: beq      0x801646fc
//   0x801646dc: lis      r3, -0x7fd8
//   0x801646e0: addi     r3, r3, 0x4a90
//   0x801646e4: crclr    cr1eq
//   0x801646e8: bl       0x801a2530
//

// TODO: Full decompilation requires Ghidra
