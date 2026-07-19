// Function at 0x800a8030
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800a8030: stwu     r1, -0x10(r1)
//   0x800a8034: mflr     r0
//   0x800a8038: stw      r0, 0x14(r1)
//   0x800a803c: li       r0, 1
//   0x800a8040: stw      r31, 0xc(r1)
//   0x800a8044: mr       r31, r3
//   0x800a8048: lwz      r4, 0x10(r3)
//   0x800a804c: stb      r0, 0x121(r4)
//   0x800a8050: lwz      r3, 0x14(r3)
//   0x800a8054: cmpwi    r3, 0
//   0x800a8058: beq      0x800a80c4
//   0x800a805c: lwz      r12, 0(r3)
//   0x800a8060: lwz      r12, 0x54(r12)
//   0x800a8064: mtctr    r12
//   0x800a8068: bctrl    
//   0x800a806c: cmpwi    r3, 0
//   0x800a8070: beq      0x800a80c4
//   0x800a8074: lwz      r3, 0x14(r31)
//   0x800a8078: lwz      r12, 0(r3)
//   0x800a807c: lwz      r12, 0x28(r12)
//

// TODO: Full decompilation requires Ghidra
