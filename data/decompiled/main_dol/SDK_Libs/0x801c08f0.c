// Function at 0x801c08f0
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801c08f0: stwu     r1, -0x10(r1)
//   0x801c08f4: mflr     r0
//   0x801c08f8: lis      r5, -0x7fcb
//   0x801c08fc: stw      r0, 0x14(r1)
//   0x801c0900: slwi     r0, r3, 2
//   0x801c0904: addi     r5, r5, -0x3a50
//   0x801c0908: stw      r31, 0xc(r1)
//   0x801c090c: stw      r30, 8(r1)
//   0x801c0910: mr       r30, r4
//   0x801c0914: lwzx     r31, r5, r0
//   0x801c0918: bl       0x801a650c
//   0x801c091c: cmpwi    r30, 0
//   0x801c0920: beq      0x801c092c
//   0x801c0924: lbz      r0, 0x8c1(r31)
//   0x801c0928: stw      r0, 0(r30)
//   0x801c092c: lwz      r30, 0x8bc(r31)
//   0x801c0930: cmpwi    r30, -1
//   0x801c0934: beq      0x801c095c
//   0x801c0938: lbz      r0, 0x8c1(r31)
//   0x801c093c: cmplwi   r0, 0xfd
//

// TODO: Full decompilation requires Ghidra
