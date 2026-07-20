// Function at 0x80165990
// Size: 360 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80165990: stwu     r1, -0x10(r1)
//   0x80165994: mflr     r0
//   0x80165998: lis      r7, -0x7fcc
//   0x8016599c: li       r10, 1
//   0x801659a0: stw      r0, 0x14(r1)
//   0x801659a4: addi     r7, r7, -0xea0
//   0x801659a8: stw      r31, 0xc(r1)
//   0x801659ac: lis      r31, -0x7fd8
//   0x801659b0: addi     r31, r31, 0x4a90
//   0x801659b4: stw      r30, 8(r1)
//   0x801659b8: lwz      r9, -0x64e0(r13)
//   0x801659bc: stb      r10, -0x64e8(r13)
//   0x801659c0: slwi     r8, r9, 5
//   0x801659c4: add      r6, r7, r8
//   0x801659c8: lbz      r5, 8(r6)
//   0x801659cc: neg      r0, r5
//   0x801659d0: or       r0, r0, r5
//   0x801659d4: srwi     r0, r0, 0x1f
//   0x801659d8: cmplwi   r0, 1
//   0x801659dc: bne      0x80165a00
//

// TODO: Full decompilation requires Ghidra
