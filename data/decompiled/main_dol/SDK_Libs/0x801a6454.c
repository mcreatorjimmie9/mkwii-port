// Function at 0x801a6454
// Size: 296 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801a6454: stwu     r1, -0x20(r1)
//   0x801a6458: mflr     r0
//   0x801a645c: stw      r0, 0x24(r1)
//   0x801a6460: stw      r31, 0x1c(r1)
//   0x801a6464: mr       r31, r4
//   0x801a6468: lhz      r0, -0x7130(r13)
//   0x801a646c: cmplwi   r0, 0xffff
//   0x801a6470: beq      0x801a6478
//   0x801a6474: b        0x801a64bc
//   0x801a6478: lis      r4, -0x8000
//   0x801a647c: lwz      r0, 0xcc(r4)
//   0x801a6480: cmpwi    r0, 0
//   0x801a6484: beq      0x801a6490
//   0x801a6488: blt      0x801a64a4
//   0x801a648c: b        0x801a64a4
//   0x801a6490: lis      r4, -0x3400
//   0x801a6494: lhz      r0, 0x206e(r4)
//   0x801a6498: rlwinm   r0, r0, 0x1f, 0x1f, 0x1f
//   0x801a649c: sth      r0, -0x7130(r13)
//   0x801a64a0: b        0x801a64ac
//

// TODO: Full decompilation requires Ghidra
