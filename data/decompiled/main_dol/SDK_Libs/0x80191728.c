// Function at 0x80191728
// Size: 296 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80191728: stwu     r1, -0x10(r1)
//   0x8019172c: mflr     r0
//   0x80191730: stw      r0, 0x14(r1)
//   0x80191734: stw      r31, 0xc(r1)
//   0x80191738: lbz      r6, 0(r4)
//   0x8019173c: lbz      r5, 1(r4)
//   0x80191740: srawi    r0, r6, 4
//   0x80191744: clrlwi   r7, r6, 0x1c
//   0x80191748: cmpwi    r0, 0xa
//   0x8019174c: beq      0x8019183c
//   0x80191750: bge      0x80191764
//   0x80191754: cmpwi    r0, 8
//   0x80191758: beq      0x80191774
//   0x8019175c: bge      0x801917a0
//   0x80191760: b        0x8019183c
//   0x80191764: cmpwi    r0, 0xc
//   0x80191768: beq      0x80191824
//   0x8019176c: bge      0x8019183c
//   0x80191770: b        0x801917b0
//   0x80191774: rlwinm   r4, r7, 9, 0xf, 0x16
//

// TODO: Full decompilation requires Ghidra
