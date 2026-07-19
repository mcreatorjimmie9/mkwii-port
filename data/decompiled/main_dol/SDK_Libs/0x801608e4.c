// Function at 0x801608e4
// Size: 404 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801608e4: stwu     r1, -0x10(r1)
//   0x801608e8: mflr     r0
//   0x801608ec: stw      r0, 0x14(r1)
//   0x801608f0: stw      r31, 0xc(r1)
//   0x801608f4: mr       r31, r3
//   0x801608f8: bl       0x801a650c
//   0x801608fc: lwz      r0, -0x65a0(r13)
//   0x80160900: cmpwi    r0, 0
//   0x80160904: bne      0x80160918
//   0x80160908: lis      r4, -0x7fcc
//   0x8016090c: addi     r4, r4, -0xfc0
//   0x80160910: stw      r31, 0x78(r4)
//   0x80160914: b        0x80160934
//   0x80160918: lwz      r4, -0x65a0(r13)
//   0x8016091c: lis      r5, -0x7fcc
//   0x80160920: addi     r5, r5, -0xfc0
//   0x80160924: addi     r0, r4, -1
//   0x80160928: mulli    r0, r0, 0x14
//   0x8016092c: add      r4, r5, r0
//   0x80160930: stw      r31, 0x28(r4)
//

// TODO: Full decompilation requires Ghidra
