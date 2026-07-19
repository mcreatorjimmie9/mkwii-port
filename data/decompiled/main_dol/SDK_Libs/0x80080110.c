// Function at 0x80080110
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80080110: stwu     r1, -0x10(r1)
//   0x80080114: mflr     r0
//   0x80080118: cmpwi    r3, 0
//   0x8008011c: stw      r0, 0x14(r1)
//   0x80080120: stw      r31, 0xc(r1)
//   0x80080124: mr       r31, r4
//   0x80080128: stw      r30, 8(r1)
//   0x8008012c: mr       r30, r3
//   0x80080130: beq      0x800801a0
//   0x80080134: lis      r12, -0x7fd9
//   0x80080138: addi     r12, r12, -0xbc0
//   0x8008013c: stw      r12, 0(r3)
//   0x80080140: lwz      r12, 0x18(r12)
//   0x80080144: mtctr    r12
//   0x80080148: bctrl    
//   0x8008014c: lwz      r4, 0x40(r30)
//   0x80080150: cmpwi    r4, 0
//   0x80080154: beq      0x80080168
//   0x80080158: lwz      r3, -0x6a90(r13)
//   0x8008015c: bl       0x80199b08
//

// TODO: Full decompilation requires Ghidra
