// Function at 0x800f57dc
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x800f57dc: stwu     r1, -0x50(r1)
//   0x800f57e0: mflr     r0
//   0x800f57e4: stw      r0, 0x54(r1)
//   0x800f57e8: stw      r31, 0x4c(r1)
//   0x800f57ec: lis      r31, -0x7fd1
//   0x800f57f0: addi     r31, r31, -0x1f40
//   0x800f57f4: lwz      r0, 0xc(r31)
//   0x800f57f8: cmpwi    r0, 0
//   0x800f57fc: bne      0x800f5808
//   0x800f5800: li       r3, 3
//   0x800f5804: b        0x800f5868
//   0x800f5808: cmpwi    r3, 0
//   0x800f580c: beq      0x800f581c
//   0x800f5810: lbz      r0, 0(r3)
//   0x800f5814: extsb.   r0, r0
//   0x800f5818: bne      0x800f5824
//   0x800f581c: li       r3, 0xa
//   0x800f5820: b        0x800f5868
//   0x800f5824: mr       r4, r3
//   0x800f5828: addi     r3, r1, 0x18
//

// TODO: Full decompilation requires Ghidra
