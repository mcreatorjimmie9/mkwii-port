// Function at 0x80156514
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80156514: stwu     r1, -0x10(r1)
//   0x80156518: mflr     r0
//   0x8015651c: cmpwi    r4, 0
//   0x80156520: stw      r0, 0x14(r1)
//   0x80156524: stw      r31, 0xc(r1)
//   0x80156528: mr       r31, r3
//   0x8015652c: beq      0x80156558
//   0x80156530: addi     r3, r3, 0x18
//   0x80156534: bl       0x8012f1bc
//   0x80156538: b        0x80156558
//   0x8015653c: addi     r3, r31, 0x18
//   0x80156540: bl       0x8012f438
//   0x80156544: cmpwi    r3, 0
//   0x80156548: mr       r4, r3
//   0x8015654c: beq      0x80156564
//   0x80156550: lhz      r3, 0x68(r31)
//   0x80156554: bl       0x8014a880
//   0x80156558: lbz      r0, 0x73(r31)
//   0x8015655c: cmpwi    r0, 0
//   0x80156560: beq      0x8015653c
//

// TODO: Full decompilation requires Ghidra
