// Function at 0x80057050
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80057050: stwu     r1, -0x10(r1)
//   0x80057054: mflr     r0
//   0x80057058: cmpwi    r3, 0
//   0x8005705c: stw      r0, 0x14(r1)
//   0x80057060: stw      r31, 0xc(r1)
//   0x80057064: mr       r31, r3
//   0x80057068: beq      0x80057078
//   0x8005706c: beq      0x80057078
//   0x80057070: li       r4, 0
//   0x80057074: bl       0x800602c0
//   0x80057078: mr       r3, r31
//   0x8005707c: lwz      r31, 0xc(r1)
//   0x80057080: lwz      r0, 0x14(r1)
//   0x80057084: mtlr     r0
//   0x80057088: addi     r1, r1, 0x10
//   0x8005708c: blr      
//

// TODO: Full decompilation requires Ghidra
