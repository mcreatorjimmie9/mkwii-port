// Function at 0x8004bba0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004bba0: stwu     r1, -0x10(r1)
//   0x8004bba4: mflr     r0
//   0x8004bba8: cmpwi    r3, 0
//   0x8004bbac: stw      r0, 0x14(r1)
//   0x8004bbb0: stw      r31, 0xc(r1)
//   0x8004bbb4: mr       r31, r3
//   0x8004bbb8: beq      0x8004bbc8
//   0x8004bbbc: cmpwi    r4, 0
//   0x8004bbc0: ble      0x8004bbc8
//   0x8004bbc4: bl       0x80229a90
//   0x8004bbc8: mr       r3, r31
//   0x8004bbcc: lwz      r31, 0xc(r1)
//   0x8004bbd0: lwz      r0, 0x14(r1)
//   0x8004bbd4: mtlr     r0
//   0x8004bbd8: addi     r1, r1, 0x10
//   0x8004bbdc: blr      
//   0x8004bbe0: lwz      r6, 0(r4)
//   0x8004bbe4: rlwinm   r0, r5, 2, 0xe, 0x1d
//   0x8004bbe8: lwz      r4, 4(r6)
//   0x8004bbec: add      r5, r4, r6
//

// TODO: Full decompilation requires Ghidra
