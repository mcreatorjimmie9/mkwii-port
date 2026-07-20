// Function at 0x80095740
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80095740: stwu     r1, -0x10(r1)
//   0x80095744: mflr     r0
//   0x80095748: stw      r0, 0x14(r1)
//   0x8009574c: stw      r31, 0xc(r1)
//   0x80095750: mr       r31, r3
//   0x80095754: bl       0x80088750
//   0x80095758: bl       0x80089000
//   0x8009575c: addi     r3, r3, -2
//   0x80095760: lwz      r0, 0x10(r31)
//   0x80095764: cntlzw   r3, r3
//   0x80095768: srwi     r3, r3, 5
//   0x8009576c: cmpw     r0, r3
//   0x80095770: beq      0x8009579c
//   0x80095774: lwz      r12, 0(r31)
//   0x80095778: mr       r3, r31
//   0x8009577c: lwz      r12, 0x10(r12)
//   0x80095780: mtctr    r12
//   0x80095784: bctrl    
//   0x80095788: lwz      r12, 0(r31)
//   0x8009578c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
